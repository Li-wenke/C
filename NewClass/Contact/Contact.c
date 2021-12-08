#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

//初始化通讯录--静态版本
//void InitContact(Contact* p)
//{
//	assert(p);
//	p->sz = 0;
//	//memset();  --> 内存设置
//	memset(p->data, 0, sizeof(p->data));//计算整个数组的大小
//}
// 考虑是否需要增容
void AddCapacity(Contact* p)
{
	assert(p);
	if (p->sz == p->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(p->data, (p->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			p->data = ptr;
			p->capacity += INC_SZ;//增容
			printf("增容成功!\n");
		}
		else
		{
			perror("AddContatc");
			printf("增加联系人失败,将退回主菜单!\n");
			return;
		}
	}
}
// 加载文件信息
void LoadContact(Contact* p)
{
	FILE* pf = fopen("contact.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return;
	}
	//读文件
	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		//考虑是否需要增容
		AddCapacity(p);
		p->data[p->sz] = tmp;
		p->sz++;
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
}
//初始化通讯录--动态版本
void InitContact(Contact* p)
{
	p->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	if (p->data == NULL)
	{
		perror("InitContact");
		return;
	}
	p->sz = 0;//初始化后默认是0
	p->capacity = DEFAULT_SZ;
	//加载文件
	LoadContact(p);
}
//保存信息到文件中
void SaveContact(Contact* p)
{
	assert(p);
	FILE* pf = fopen("contact.txt", "w");
	if (pf == NULL)
	{
		perror("SaveContact");
		return;
	}
	//写文件
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		fwrite(p->data + i, sizeof(PeoInfo), 1, pf);
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
	printf("联系人信息保存成功!\n");
}
//销毁通讯录
void DestoryContact(Contact* p)
{
	assert(p);
	free(p->data);
	p->data = NULL;
	p->sz = 0;
	p->capacity = 0;
}
//增加联系人  --静态版本
//void AddContact(Contact* p)
//{
//	assert(p);
//	if (p->sz == MAX)
//	{
//		printf("通讯录已满，无法继续添加\n");
//		return 0;
//	}
//	//增加一个人的信息
//	printf("请输入名字:>");
//	scanf("%s", p->data[p->sz].name);
//	printf("请输入年龄:>");
//	scanf("%d", &(p->data[p->sz].age));
//	printf("请输入性别:>");
//	scanf("%s", p->data[p->sz].sex);
//	printf("请输入电话:>");
//	scanf("%s", p->data[p->sz].tele);
//	printf("请输入地址:>");
//	scanf("%s", p->data[p->sz].addr);
//	p->sz++;
//	printf("添加联系人成功!\n");
//}
//增加联系人  --动态版本
void AddContact(Contact * p)
{
		assert(p);
		//考虑增容
		AddCapacity(p);
		//增加一个人的信息
		printf("请输入名字:>");
		scanf("%s", p->data[p->sz].name);
		printf("请输入年龄:>");
		scanf("%d", &(p->data[p->sz].age));
		printf("请输入性别:>");
		scanf("%s", p->data[p->sz].sex);
		printf("请输入电话:>");
		scanf("%s", p->data[p->sz].tele);
		printf("请输入地址:>");
		scanf("%s", p->data[p->sz].addr);
		p->sz++;
		printf("添加联系人成功!\n");
}
//通过名字找某个联系人   加上static修饰 只在本源文件生效，其他文件中用不了
static int FindName(Contact* p, char name[])
{
	assert(p);
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		if (strcmp(p->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;//找不到联系人
}

//删除联系人的信息
void DelContact(Contact* p)
{
	assert(p);
	char name[MAX_NAME] = { 0 };
	if (p->sz == 0)
	{
		printf("通讯录为空，无需删除!\n");
	}
	printf("请输入被删除人的名字");
	scanf("%s", name);
	//删除一个人的信息
	//1. 查找被删除的人  有or无  先实现查找的功能
	int pos = FindName(p,name);
	if (pos == -1)
	{
		printf("被删除的人不存在!\n");
		return;
	}
	//2. 删除
	int i = 0;
	for (i = pos; i < p->sz - 1; i++)
	{
		p->data[i] = p->data[i + 1];
	}
	p->sz--;
	printf("删除成功!\n");
}
//查找联系人
void SearchContact(const Contact* p)
{
	assert(p);
	char name[MAX_NAME];
	printf("请输入要查找联系人的名字:>");
	scanf("%s", name);
	int pos = FindName(p, name);
	if (pos == -1)
	{
		printf("要查找的人不存在!\n");
		return;
	}
	else
	{
		printf("%-20s\t%-10s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-10d\t%-5s\t%-12s\t%-20s\n", p->data[pos].name,
			p->data[pos].age,
			p->data[pos].sex,
			p->data[pos].tele,
			p->data[pos].addr);
	}
}
//修改指定人的信息
void ModifyContact(Contact* p)
{
	assert(p);
	char name[MAX_NAME];
	printf("请输入要修改联系人的名字:>");
	scanf("%s", name);
	int pos = FindName(p, name);
	if (pos == -1)
	{
		printf("要修改的人不存在!\n");
		return;
	}
	else
	{
		printf("请输入名字:>");
		scanf("%s", p->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(p->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", p->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", p->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", p->data[pos].addr);
		printf("修改成功!\n");
	}
}
//排序选择菜单
void menu2()
{
	printf("****************************************************************************\n");
	printf("************** \t1. name\t\t\t2. age\t\t********************\n");
	printf("****************************************************************************\n");
}
//按照姓名排序
static int SortByName(const void* e1,const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name,((PeoInfo *)e2)->name);
}
//按照年龄排序
static int SortByAge(const void* e1,const void* e2)
{
	return ((PeoInfo*)e1)->age - ((PeoInfo*)e2)->age;
}
//排序通讯录的信息
void SortContact(Contact* p)
{
	assert(p);
	int input = 0;
	menu2();
	printf("请选择排序的方式:>");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		qsort(p->data,p->sz,sizeof(struct PeoInfo), SortByName);//按照姓名排序
		printf("按照姓名的升序排序成功\n");
		break;
	case 2:
		qsort(p->data, p->sz, sizeof(struct PeoInfo), SortByAge);//按照年龄排序
		printf("按照年龄的升序排序成功\n");
		break;
	default:
		printf("选择错误，请重新选择!\n");
		break;
	}
}
//打印通讯录联系人信息
void PrintContact(const Contact* p)
{
	assert(p);
	int i = 0;
	//打印标题
	printf("%-20s\t%-10s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	//打印数据
	for (i = 0; i < p->sz; i++)
	{
		printf("%-20s\t%-10d\t%-5s\t%-12s\t%-20s\n", p->data[i].name,
			p->data[i].age,
			p->data[i].sex,
			p->data[i].tele,
			p->data[i].addr);
	}
}