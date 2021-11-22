#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Account
{
	int aid;//�˺�
	char card[20];//�ͻ����֤����
	char name[20];//�ͻ�����
	char pwd[7];//ȡ�����룬������6λ
	float mon;//�˻����
}acc[100];
int count = 0;//��ǰ�ѿ�������

void menu()//�˵�
{
	system("cls");
	printf("\t**************************************************\n");
	printf("\t\t\t�����˻�����ϵͳv1.0\n");
	printf("\t**************************************************\n");
	printf("\t\t\t\t1.����\n");
	printf("\t\t\t\t2.���\n");
	printf("\t\t\t\t3.ȡ��\n");
	printf("\t\t\t\t4.��ѯ���\n");
	printf("\t\t\t\t5.�޸�����\n");
	printf("\t\t\t\t6.ת��\n");
	printf("\t\t\t\t7.�鿴�ͻ���Ϣ\n");
	printf("\t\t\t\t8.�˳�\n");
	printf("\t\t\t��ѡ��");
}
void back()
{
	printf("���س��������˵�.....\n");
	getchar();
	getchar();
}
void newAccount()//��������
{
	system("cls");
	printf("\t\t\t����.\n");
	printf("\t\t\t���֤����:");
	scanf("%s", &acc[count].card);
	printf("\t\t\t�ͻ�����:");
	scanf("%s", &acc[count].name);
	printf("\t\t\tȡ������:");
	scanf("%s", &acc[count].pwd);
	acc[count].mon = 1.0;//Ĭ�Ͽ������1Ԫ
	acc[count].aid = count + 1;
	printf("�����ɹ���\n");
	printf("�����˺�Ϊ:%d,���μ���������.", acc[count].aid);
	count++;
	back();

}
void saving()//����
{
	int aid;
	float mon;
	system("cls");
	printf("\t\t\t���.\n");
	printf("\t\t\t�������˺�:");
	scanf("%d", &aid);
	int i = 0;
	for (i = 0; i < count; i++)
	{
		if (aid == acc[i].aid)
		{
			printf("\t\t\t��������Ľ��:");
			scanf("%f", &mon);
			acc[i].mon += mon;
			printf("���ɹ�!\n");
			back();
			return;
		}
	}
	printf("�˺���������!\n");
	back();
}
void get()//ȡ���
{
	int aid = 0;
	char pwd[7] = { 0 };
	float mon = 0;
	printf("\t\t\tȡ��.\n");
	printf("\t\t\t������ȡ����˺�:");
	scanf("%d", &aid);
	printf("\t\t\t������ȡ���˻�������:");
	scanf("%s", &pwd);
	int i = 0;
	for (i = 0; i < count; i++)
	{
		if (aid == acc[i].aid && strcmp(acc[i].pwd, pwd) == 0)
		{
			printf("\t\t\t��������Ҫȡ�ߵĽ��:");
			scanf("%f", &mon);
			if (mon > acc[i].mon)
			{
				printf("\t\t\t��������Ѳ���!\n");
			}
			else
			{
				acc[i].mon -= mon;
				printf("\t\t\tȡ��ɹ�!\n");
			}
			back();
			return;
		}
	}
	printf("\t\t\t�����˺Ż��������!\n");
	back();
}
void find()//��ѯ���
{
	int aid = 0;//�˺�
	char pwd[7] = { 0 };//����
	system("cls");
	printf("\t\t\t��ѯ���.\n");
	printf("\t\t\t���������˺ţ�");
	scanf("%d", &aid);
	printf("\t\t\t�����������룺");
	scanf("%s", &pwd);
	int i = 0;
	for (i = 0; i < count; i++)
	{
		if ((aid == acc[i].aid) && strcmp(acc[i].pwd, pwd) == 0)
		{
			printf("\t\t\t�˻�����:%d\n", acc[i].aid);
			printf("\t\t\t�˻����:%f\n", acc[i].mon);
			back();
			return;
		}
	}
	printf("\t\t\t�˺Ż��������!\n");
	back();
	
}
void modPwd()//�޸�����
{
	int aid = 0;
	char pwd[7] = { 0 }, newpwd[7] = { 0 };
	printf("\t\t\t�޸�����.\n");
	printf("\t\t\t���������˺�:");
	scanf("%d", &aid);
	printf("\t\t\t������������:");
	scanf("%s", &pwd);
	int i = 0;
	for (i = 0; i < count; i++)
	{
		if (aid == acc[i].aid && strcmp(acc[i].pwd, pwd) == 0)
		{
			printf("\t\t\t���޸���������:");
			scanf("%s", newpwd);
			strcpy(acc[i].pwd, newpwd);//�Ӻ���ǰ�����ַ���
			printf("\t\t\t�޸ĳɹ�!\n");
			back();
			return;
		}
	}
	printf("\t\t\t�˺Ż��������!\n");
	back();
}
void turn()//ת��
{
	int aid1 = 0, aid2 = 0;
	char pwd[7] = { 0 };
	float mon = 0;
	system("cls");
	printf("\t\t\tת��.\n");
	printf("\t\t\t���������˺�:");
	scanf("%d", &aid1);
	printf("\t\t\t������������:");
	scanf("%s", &pwd);
	int i = 0;
	for (i = 0; i < count; i++)
	{
		if (aid1 == acc[i].aid && strcmp(acc[i].pwd, pwd) == 0)
		{
			printf("\t\t\t������Ŀ����˺�:");
			scanf("%d",&aid2);
			int j = 0;
			for (j = 0; j < count; j++)
			{
				if (aid2 == acc[j].aid)
				{
					printf("\t\t\t������ת�˵Ľ��:");
					scanf("%f", &mon);
					if (mon > acc[i].mon)
					{
						printf("\t\t\t��������Ѳ���!\n");
						back();
					}
					else
					{
						acc[j].mon += mon;
						acc[i].mon -= mon;
						printf("ת�˳ɹ�!\n");
					}
					back();
					return;
				}
			}
			printf("\t\t\tĿ���˺Ų�����!\n");
			back();
			return;
		}
	}
	printf("\t\t\t�����˺���������!\n");
	back();
}
void check()
{
	system("cls");
	printf("\t\t\t\t�鿴��ǰ�ͻ���Ϣ.\n");
	if (count > 0)
	{
		int i = 0;
		for (i = 0; i < count; i++)
		{
			printf("\t\t\t\t�ͻ�����:%s\n", acc[i].name);
			printf("\t\t\t\t�ͻ����֤����:%s\n", acc[i].card);
			printf("\t\t\t\t�ͻ��˺�:%d\n", acc[i].aid);
			printf("\t\t\t\t�ͻ���ǰ���:%f\n", acc[i].mon);
		}
	}
	else
	{
		printf("\t\t\t��ǰ�����˻���û�пͻ�����!\n");
		printf("\t\t\t����ȥ����!\n");
	}
	back();
}
int main()
{
	int input = 0;
	do
	{
		menu();
		//printf("\t\t��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("������\n");
			newAccount();//��������
			break;
		case 2:
			//printf("��\n");
			saving();//����
			break;
		case 3:
			//printf("ȡ��ɹ���\n");
			get();//ȡ���
			break;
		case 4:
			//printf("��ѯ��\n");
			find();//��ѯ����
			break;
		case 5:
			//printf("�޸����룡\n");
			modPwd();//�޸����뺯��
			break;
		case 6:
			//printf("ת�ˣ�\n");
			turn();//ת�˺���
			break;
		case 7:
			check();//�鿴��ǰ�ͻ���Ϣ
			break;
		case 8:
			//printf("�˳���\n");
			printf("\t\t\t\t���˳���\n");
			exit(0);//�˳�����
			break;
		default:
			printf("������������������!\n");
			break;
		}
	} while (input);
	return 0;
}