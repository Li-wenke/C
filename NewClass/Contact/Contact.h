#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <memory.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

#define  MAX_NAME	20
#define  MAX_SEX	10
#define  MAX_TELE	12
#define  MAX_ADDR   30
#define  MAX        1000
#define  DEFAULT_SZ 3
#define  INC_SZ		2
//类型定义
typedef struct PeoInfo
{
	char name[MAX_NAME];//名字
	char sex[MAX_SEX];//性别
	int age;//年龄
	char tele[MAX_TELE];//电话
	char addr[MAX_ADDR];//地址
}PeoInfo;
//通讯录 -- 静态版本
//typedef struct Contact
//{
//	PeoInfo	data[MAX];//存放添加人的信息
//	int sz;//记录当前通讯录中有效信息的个数
//}Contact;
//			动态版本
typedef struct Contact
{
	PeoInfo	*data;//指向动态申请的空间//存放联系人的信息
	int sz;//记录当前通讯录中有效信息的个数
	int capacity;//记录当前通讯录的最大容量
}Contact;
//初始化通讯录的声明
void InitContact(Contact* p);
//增加联系人
void AddContact(Contact* p);
//删除联系人
void DelContact(Contact* p);
//查找指定人的信息
void SearchContact(const Contact* p);
//修改联系人的信息
void ModifyContact(Contact* p);
//排序通讯录的信息
void SortContact(Contact* p);
//打印通讯录中联系人信息
void PrintContact(const Contact* p);
//销毁通讯录
void DestoryContact(Contact* p);
//保存信息到文件中
void SaveContact(Contact* p);
//加载文件信息
void LoadContact(Contact* p);
