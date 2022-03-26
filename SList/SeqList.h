#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <assert.h>

#define MAXSIZE 100
typedef int SQDataType;
//��̬˳���
//���⣺�����˲����ã�������̫�˷ѣ�����������
//�ĳɶ�̬
//typedef struct SeqList
//{
//	SQDataType data[MAXSIZE];
//	int length; //��
//}SL;
typedef struct SeqList
{
	SQDataType* data;
	int length;//��Ч���ݵĸ���
	int capacity;//����
}SeqList;
//ʵ��˳������ɾ�Ĳ�Ƚӿں���
//��ʼ��˳���
void SeqListInit(SeqList* ps);
//��ӡ˳���
void SeqListPrint(SeqList* ps);
//ʵ��β�塢ͷ�塢βɾ��ͷɾ
void SeqListPushBack(SeqList* ps, SQDataType x);
void SeqListPushFront(SeqList* ps, SQDataType x);
void SeqListPopBack(SeqList* ps);
void SeqListPopFront(SeqList* ps);
//ʵ��˳�������λ�õĲ�����ɾ��
void SeqListInsert(SeqList* ps, int pos, SQDataType x);
void SeqListErase(SeqList* ps, int pos);
//���ҡ��޸�
int SeqListFindX(SeqList* ps,SQDataType x);
void SeqListModify(SeqList* ps, int pos, SQDataType x);
//���˳���
void SeqListClear(SeqList* ps);
//����˳���
void SeqListDestory(SeqList* ps);
