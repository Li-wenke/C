#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <assert.h>

#define MAXSIZE 100
typedef int SQDataType;
//静态顺序表
//问题：给少了不够用，给多了太浪费，不能灵活控制
//改成动态
//typedef struct SeqList
//{
//	SQDataType data[MAXSIZE];
//	int length; //表长
//}SL;
typedef struct SeqList
{
	SQDataType* data;
	int length;//有效数据的个数
	int capacity;//容量
}SeqList;
//实现顺序表的增删改查等接口函数
//初始化顺序表
void SeqListInit(SeqList* ps);
//打印顺序表
void SeqListPrint(SeqList* ps);
//实现尾插、头插、尾删、头删
void SeqListPushBack(SeqList* ps, SQDataType x);
void SeqListPushFront(SeqList* ps, SQDataType x);
void SeqListPopBack(SeqList* ps);
void SeqListPopFront(SeqList* ps);
//实现顺序表的随机位置的插入与删除
void SeqListInsert(SeqList* ps, int pos, SQDataType x);
void SeqListErase(SeqList* ps, int pos);
//查找、修改
int SeqListFindX(SeqList* ps,SQDataType x);
void SeqListModify(SeqList* ps, int pos, SQDataType x);
//清空顺序表
void SeqListClear(SeqList* ps);
//销毁顺序表
void SeqListDestory(SeqList* ps);
