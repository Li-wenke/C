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
//���Ͷ���
typedef struct PeoInfo
{
	char name[MAX_NAME];//����
	char sex[MAX_SEX];//�Ա�
	int age;//����
	char tele[MAX_TELE];//�绰
	char addr[MAX_ADDR];//��ַ
}PeoInfo;
//ͨѶ¼ -- ��̬�汾
//typedef struct Contact
//{
//	PeoInfo	data[MAX];//�������˵���Ϣ
//	int sz;//��¼��ǰͨѶ¼����Ч��Ϣ�ĸ���
//}Contact;
//			��̬�汾
typedef struct Contact
{
	PeoInfo	*data;//ָ��̬����Ŀռ�//�����ϵ�˵���Ϣ
	int sz;//��¼��ǰͨѶ¼����Ч��Ϣ�ĸ���
	int capacity;//��¼��ǰͨѶ¼���������
}Contact;
//��ʼ��ͨѶ¼������
void InitContact(Contact* p);
//������ϵ��
void AddContact(Contact* p);
//ɾ����ϵ��
void DelContact(Contact* p);
//����ָ���˵���Ϣ
void SearchContact(const Contact* p);
//�޸���ϵ�˵���Ϣ
void ModifyContact(Contact* p);
//����ͨѶ¼����Ϣ
void SortContact(Contact* p);
//��ӡͨѶ¼����ϵ����Ϣ
void PrintContact(const Contact* p);
//����ͨѶ¼
void DestoryContact(Contact* p);
//������Ϣ���ļ���
void SaveContact(Contact* p);
//�����ļ���Ϣ
void LoadContact(Contact* p);
