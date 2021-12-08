#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

//��ʼ��ͨѶ¼--��̬�汾
//void InitContact(Contact* p)
//{
//	assert(p);
//	p->sz = 0;
//	//memset();  --> �ڴ�����
//	memset(p->data, 0, sizeof(p->data));//������������Ĵ�С
//}
// �����Ƿ���Ҫ����
void AddCapacity(Contact* p)
{
	assert(p);
	if (p->sz == p->capacity)
	{
		PeoInfo* ptr = (PeoInfo*)realloc(p->data, (p->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			p->data = ptr;
			p->capacity += INC_SZ;//����
			printf("���ݳɹ�!\n");
		}
		else
		{
			perror("AddContatc");
			printf("������ϵ��ʧ��,���˻����˵�!\n");
			return;
		}
	}
}
// �����ļ���Ϣ
void LoadContact(Contact* p)
{
	FILE* pf = fopen("contact.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return;
	}
	//���ļ�
	PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PeoInfo), 1, pf))
	{
		//�����Ƿ���Ҫ����
		AddCapacity(p);
		p->data[p->sz] = tmp;
		p->sz++;
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}
//��ʼ��ͨѶ¼--��̬�汾
void InitContact(Contact* p)
{
	p->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	if (p->data == NULL)
	{
		perror("InitContact");
		return;
	}
	p->sz = 0;//��ʼ����Ĭ����0
	p->capacity = DEFAULT_SZ;
	//�����ļ�
	LoadContact(p);
}
//������Ϣ���ļ���
void SaveContact(Contact* p)
{
	assert(p);
	FILE* pf = fopen("contact.txt", "w");
	if (pf == NULL)
	{
		perror("SaveContact");
		return;
	}
	//д�ļ�
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		fwrite(p->data + i, sizeof(PeoInfo), 1, pf);
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	printf("��ϵ����Ϣ����ɹ�!\n");
}
//����ͨѶ¼
void DestoryContact(Contact* p)
{
	assert(p);
	free(p->data);
	p->data = NULL;
	p->sz = 0;
	p->capacity = 0;
}
//������ϵ��  --��̬�汾
//void AddContact(Contact* p)
//{
//	assert(p);
//	if (p->sz == MAX)
//	{
//		printf("ͨѶ¼�������޷��������\n");
//		return 0;
//	}
//	//����һ���˵���Ϣ
//	printf("����������:>");
//	scanf("%s", p->data[p->sz].name);
//	printf("����������:>");
//	scanf("%d", &(p->data[p->sz].age));
//	printf("�������Ա�:>");
//	scanf("%s", p->data[p->sz].sex);
//	printf("������绰:>");
//	scanf("%s", p->data[p->sz].tele);
//	printf("�������ַ:>");
//	scanf("%s", p->data[p->sz].addr);
//	p->sz++;
//	printf("�����ϵ�˳ɹ�!\n");
//}
//������ϵ��  --��̬�汾
void AddContact(Contact * p)
{
		assert(p);
		//��������
		AddCapacity(p);
		//����һ���˵���Ϣ
		printf("����������:>");
		scanf("%s", p->data[p->sz].name);
		printf("����������:>");
		scanf("%d", &(p->data[p->sz].age));
		printf("�������Ա�:>");
		scanf("%s", p->data[p->sz].sex);
		printf("������绰:>");
		scanf("%s", p->data[p->sz].tele);
		printf("�������ַ:>");
		scanf("%s", p->data[p->sz].addr);
		p->sz++;
		printf("�����ϵ�˳ɹ�!\n");
}
//ͨ��������ĳ����ϵ��   ����static���� ֻ�ڱ�Դ�ļ���Ч�������ļ����ò���
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
	return -1;//�Ҳ�����ϵ��
}

//ɾ����ϵ�˵���Ϣ
void DelContact(Contact* p)
{
	assert(p);
	char name[MAX_NAME] = { 0 };
	if (p->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�����ɾ��!\n");
	}
	printf("�����뱻ɾ���˵�����");
	scanf("%s", name);
	//ɾ��һ���˵���Ϣ
	//1. ���ұ�ɾ������  ��or��  ��ʵ�ֲ��ҵĹ���
	int pos = FindName(p,name);
	if (pos == -1)
	{
		printf("��ɾ�����˲�����!\n");
		return;
	}
	//2. ɾ��
	int i = 0;
	for (i = pos; i < p->sz - 1; i++)
	{
		p->data[i] = p->data[i + 1];
	}
	p->sz--;
	printf("ɾ���ɹ�!\n");
}
//������ϵ��
void SearchContact(const Contact* p)
{
	assert(p);
	char name[MAX_NAME];
	printf("������Ҫ������ϵ�˵�����:>");
	scanf("%s", name);
	int pos = FindName(p, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����!\n");
		return;
	}
	else
	{
		printf("%-20s\t%-10s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-10d\t%-5s\t%-12s\t%-20s\n", p->data[pos].name,
			p->data[pos].age,
			p->data[pos].sex,
			p->data[pos].tele,
			p->data[pos].addr);
	}
}
//�޸�ָ���˵���Ϣ
void ModifyContact(Contact* p)
{
	assert(p);
	char name[MAX_NAME];
	printf("������Ҫ�޸���ϵ�˵�����:>");
	scanf("%s", name);
	int pos = FindName(p, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����!\n");
		return;
	}
	else
	{
		printf("����������:>");
		scanf("%s", p->data[pos].name);
		printf("����������:>");
		scanf("%d", &(p->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", p->data[pos].sex);
		printf("������绰:>");
		scanf("%s", p->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", p->data[pos].addr);
		printf("�޸ĳɹ�!\n");
	}
}
//����ѡ��˵�
void menu2()
{
	printf("****************************************************************************\n");
	printf("************** \t1. name\t\t\t2. age\t\t********************\n");
	printf("****************************************************************************\n");
}
//������������
static int SortByName(const void* e1,const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name,((PeoInfo *)e2)->name);
}
//������������
static int SortByAge(const void* e1,const void* e2)
{
	return ((PeoInfo*)e1)->age - ((PeoInfo*)e2)->age;
}
//����ͨѶ¼����Ϣ
void SortContact(Contact* p)
{
	assert(p);
	int input = 0;
	menu2();
	printf("��ѡ������ķ�ʽ:>");
	scanf("%d", &input);
	switch (input)
	{
	case 1:
		qsort(p->data,p->sz,sizeof(struct PeoInfo), SortByName);//������������
		printf("������������������ɹ�\n");
		break;
	case 2:
		qsort(p->data, p->sz, sizeof(struct PeoInfo), SortByAge);//������������
		printf("�����������������ɹ�\n");
		break;
	default:
		printf("ѡ�����������ѡ��!\n");
		break;
	}
}
//��ӡͨѶ¼��ϵ����Ϣ
void PrintContact(const Contact* p)
{
	assert(p);
	int i = 0;
	//��ӡ����
	printf("%-20s\t%-10s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	//��ӡ����
	for (i = 0; i < p->sz; i++)
	{
		printf("%-20s\t%-10d\t%-5s\t%-12s\t%-20s\n", p->data[i].name,
			p->data[i].age,
			p->data[i].sex,
			p->data[i].tele,
			p->data[i].addr);
	}
}