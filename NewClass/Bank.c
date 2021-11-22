#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Account
{
	int aid;//账号
	char card[20];//客户身份证号码
	char name[20];//客户姓名
	char pwd[7];//取款密码，必须是6位
	float mon;//账户余额
}acc[100];
int count = 0;//当前已开户数量

void menu()//菜单
{
	system("cls");
	printf("\t**************************************************\n");
	printf("\t\t\t银行账户管理系统v1.0\n");
	printf("\t**************************************************\n");
	printf("\t\t\t\t1.开户\n");
	printf("\t\t\t\t2.存款\n");
	printf("\t\t\t\t3.取款\n");
	printf("\t\t\t\t4.查询余额\n");
	printf("\t\t\t\t5.修改密码\n");
	printf("\t\t\t\t6.转账\n");
	printf("\t\t\t\t7.查看客户信息\n");
	printf("\t\t\t\t8.退出\n");
	printf("\t\t\t请选择：");
}
void back()
{
	printf("按回车返回主菜单.....\n");
	getchar();
	getchar();
}
void newAccount()//开户函数
{
	system("cls");
	printf("\t\t\t开户.\n");
	printf("\t\t\t身份证号码:");
	scanf("%s", &acc[count].card);
	printf("\t\t\t客户姓名:");
	scanf("%s", &acc[count].name);
	printf("\t\t\t取款密码:");
	scanf("%s", &acc[count].pwd);
	acc[count].mon = 1.0;//默认开户余额1元
	acc[count].aid = count + 1;
	printf("开户成功！\n");
	printf("您的账号为:%d,请牢记您的密码.", acc[count].aid);
	count++;
	back();

}
void saving()//存款函数
{
	int aid;
	float mon;
	system("cls");
	printf("\t\t\t存款.\n");
	printf("\t\t\t输入存款账号:");
	scanf("%d", &aid);
	int i = 0;
	for (i = 0; i < count; i++)
	{
		if (aid == acc[i].aid)
		{
			printf("\t\t\t请输入存款的金额:");
			scanf("%f", &mon);
			acc[i].mon += mon;
			printf("存款成功!\n");
			back();
			return;
		}
	}
	printf("账号输入有误!\n");
	back();
}
void get()//取款函数
{
	int aid = 0;
	char pwd[7] = { 0 };
	float mon = 0;
	printf("\t\t\t取款.\n");
	printf("\t\t\t请输入取款的账号:");
	scanf("%d", &aid);
	printf("\t\t\t请输入取款账户的密码:");
	scanf("%s", &pwd);
	int i = 0;
	for (i = 0; i < count; i++)
	{
		if (aid == acc[i].aid && strcmp(acc[i].pwd, pwd) == 0)
		{
			printf("\t\t\t请输入您要取走的金额:");
			scanf("%f", &mon);
			if (mon > acc[i].mon)
			{
				printf("\t\t\t您的余额已不足!\n");
			}
			else
			{
				acc[i].mon -= mon;
				printf("\t\t\t取款成功!\n");
			}
			back();
			return;
		}
	}
	printf("\t\t\t您的账号或密码错误!\n");
	back();
}
void find()//查询余额
{
	int aid = 0;//账号
	char pwd[7] = { 0 };//密码
	system("cls");
	printf("\t\t\t查询余额.\n");
	printf("\t\t\t输入您的账号：");
	scanf("%d", &aid);
	printf("\t\t\t输入您的密码：");
	scanf("%s", &pwd);
	int i = 0;
	for (i = 0; i < count; i++)
	{
		if ((aid == acc[i].aid) && strcmp(acc[i].pwd, pwd) == 0)
		{
			printf("\t\t\t账户号码:%d\n", acc[i].aid);
			printf("\t\t\t账户余额:%f\n", acc[i].mon);
			back();
			return;
		}
	}
	printf("\t\t\t账号或密码错误!\n");
	back();
	
}
void modPwd()//修改密码
{
	int aid = 0;
	char pwd[7] = { 0 }, newpwd[7] = { 0 };
	printf("\t\t\t修改密码.\n");
	printf("\t\t\t输入您的账号:");
	scanf("%d", &aid);
	printf("\t\t\t输入您的密码:");
	scanf("%s", &pwd);
	int i = 0;
	for (i = 0; i < count; i++)
	{
		if (aid == acc[i].aid && strcmp(acc[i].pwd, pwd) == 0)
		{
			printf("\t\t\t请修改您的密码:");
			scanf("%s", newpwd);
			strcpy(acc[i].pwd, newpwd);//从后往前拷贝字符串
			printf("\t\t\t修改成功!\n");
			back();
			return;
		}
	}
	printf("\t\t\t账号或密码错误!\n");
	back();
}
void turn()//转账
{
	int aid1 = 0, aid2 = 0;
	char pwd[7] = { 0 };
	float mon = 0;
	system("cls");
	printf("\t\t\t转账.\n");
	printf("\t\t\t输入您的账号:");
	scanf("%d", &aid1);
	printf("\t\t\t输入您的密码:");
	scanf("%s", &pwd);
	int i = 0;
	for (i = 0; i < count; i++)
	{
		if (aid1 == acc[i].aid && strcmp(acc[i].pwd, pwd) == 0)
		{
			printf("\t\t\t请输入目标的账号:");
			scanf("%d",&aid2);
			int j = 0;
			for (j = 0; j < count; j++)
			{
				if (aid2 == acc[j].aid)
				{
					printf("\t\t\t请输入转账的金额:");
					scanf("%f", &mon);
					if (mon > acc[i].mon)
					{
						printf("\t\t\t您的余额已不足!\n");
						back();
					}
					else
					{
						acc[j].mon += mon;
						acc[i].mon -= mon;
						printf("转账成功!\n");
					}
					back();
					return;
				}
			}
			printf("\t\t\t目标账号不存在!\n");
			back();
			return;
		}
	}
	printf("\t\t\t您的账号输入有误!\n");
	back();
}
void check()
{
	system("cls");
	printf("\t\t\t\t查看当前客户信息.\n");
	if (count > 0)
	{
		int i = 0;
		for (i = 0; i < count; i++)
		{
			printf("\t\t\t\t客户姓名:%s\n", acc[i].name);
			printf("\t\t\t\t客户身份证号码:%s\n", acc[i].card);
			printf("\t\t\t\t客户账号:%d\n", acc[i].aid);
			printf("\t\t\t\t客户当前余额:%f\n", acc[i].mon);
		}
	}
	else
	{
		printf("\t\t\t当前银行账户中没有客户开户!\n");
		printf("\t\t\t请先去开户!\n");
	}
	back();
}
int main()
{
	int input = 0;
	do
	{
		menu();
		//printf("\t\t请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("开户！\n");
			newAccount();//开户函数
			break;
		case 2:
			//printf("存款！\n");
			saving();//存款函数
			break;
		case 3:
			//printf("取款成功！\n");
			get();//取款函数
			break;
		case 4:
			//printf("查询余额！\n");
			find();//查询余额函数
			break;
		case 5:
			//printf("修改密码！\n");
			modPwd();//修改密码函数
			break;
		case 6:
			//printf("转账！\n");
			turn();//转账函数
			break;
		case 7:
			check();//查看当前客户信息
			break;
		case 8:
			//printf("退出！\n");
			printf("\t\t\t\t已退出！\n");
			exit(0);//退出函数
			break;
		default:
			printf("输入有误，请重新输入!\n");
			break;
		}
	} while (input);
	return 0;
}