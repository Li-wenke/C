#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

//通讯录--静态版本 
//1.通讯录中能够存放1000个人的信息
//每个人的信息:
//名字+年龄+性别+电话+地址
//2. 增加联系人的信息
//3. 删除指定人的信息
//4. 修改指定人的信息
//5. 查找指定人的信息
//6. 排序通讯录的信息
//
//版本2:
//动态增长的版本
//1>通讯录初始化后，能存放3个人的信息
//2>当空间存放满的时候，增加2个信息
//3+2+2+....
//版本3:
//当通讯录退出的时候，把信息写到文件中
//当通讯录初始化的时候，加载文件的信息到通讯录
void menu()
{
		printf("****************************************************************************\n");
		printf("************** \t1. add\t\t\t2. del\t\t********************\n");
		printf("************** \t3. search\t\t4. modify\t********************\n");
		printf("************** \t5. sort\t\t\t6. print\t********************\n");
		printf("**************	\t\t0. exit\t\t\t********************\n");
		printf("****************************************************************************\n");
}
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};
int main()
{
	int input = 0;
	//创建通讯录
	Contact con;//通讯录
	//初始化通讯录
	//给data申请一块连续的空间在堆区上
	//sz=0;
	//capacity初始化当前的最大容量
	InitContact(&con);
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//增加人的信息
			AddContact(&con);
			break;
		case DEL:
			//删除
			DelContact(&con);
			break;
		case SEARCH:
			//查找
			SearchContact(&con);
			break;
		case MODIFY:
			//修改
			ModifyContact(&con);
			break;
		case SORT:
			//排序
			SortContact(&con);
			break;
		case PRINT:
			//打印出信息
			PrintContact(&con);
			break;
		case EXIT:
			//保存信息到文件中
			SaveContact(&con);
			//销毁通讯录
			DestoryContact(&con);
			printf("退出通讯录!\n");
			break;
		default:
			printf("选择错误请重新选择:>\n");
			break;
		}
	} while (input);
	return 0;
}