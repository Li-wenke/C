#define _CRT_SECURE_NO_WARNINGS 1
#include "Contact.h"

//ͨѶ¼--��̬�汾 
//1.ͨѶ¼���ܹ����1000���˵���Ϣ
//ÿ���˵���Ϣ:
//����+����+�Ա�+�绰+��ַ
//2. ������ϵ�˵���Ϣ
//3. ɾ��ָ���˵���Ϣ
//4. �޸�ָ���˵���Ϣ
//5. ����ָ���˵���Ϣ
//6. ����ͨѶ¼����Ϣ
//
//�汾2:
//��̬�����İ汾
//1>ͨѶ¼��ʼ�����ܴ��3���˵���Ϣ
//2>���ռ�������ʱ������2����Ϣ
//3+2+2+....
//�汾3:
//��ͨѶ¼�˳���ʱ�򣬰���Ϣд���ļ���
//��ͨѶ¼��ʼ����ʱ�򣬼����ļ�����Ϣ��ͨѶ¼
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
	//����ͨѶ¼
	Contact con;//ͨѶ¼
	//��ʼ��ͨѶ¼
	//��data����һ�������Ŀռ��ڶ�����
	//sz=0;
	//capacity��ʼ����ǰ���������
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			//�����˵���Ϣ
			AddContact(&con);
			break;
		case DEL:
			//ɾ��
			DelContact(&con);
			break;
		case SEARCH:
			//����
			SearchContact(&con);
			break;
		case MODIFY:
			//�޸�
			ModifyContact(&con);
			break;
		case SORT:
			//����
			SortContact(&con);
			break;
		case PRINT:
			//��ӡ����Ϣ
			PrintContact(&con);
			break;
		case EXIT:
			//������Ϣ���ļ���
			SaveContact(&con);
			//����ͨѶ¼
			DestoryContact(&con);
			printf("�˳�ͨѶ¼!\n");
			break;
		default:
			printf("ѡ�����������ѡ��:>\n");
			break;
		}
	} while (input);
	return 0;
}