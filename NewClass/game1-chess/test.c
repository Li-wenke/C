#define _CRT_SECURE_NO_WARNINGS 1
//�ظ�����ͷ�ļ�
//������game.h������ͷ�ļ� ʡ�ö������ͷ�ļ�
//#include <stdio.h>
#include "game.h"


//������Ϸ�˵�
void menu()
{
	printf("\n");
	printf("******************************************\n");
	printf("*******    ��ӭ������������Ϸ    *********\n");
	printf("************    1. play    ***************\n");
	printf("************    0. exit    ***************\n");
	printf("******************************************\n");
}
//��������Ϸ�����߼�
void game()
{
	//�洢���� - ��ά����
	//char board[3][3];//3*3������ ���������Ҫ�����������Ҫ�Ĵ� �޸�����̫�๤������ ���ʺ�
	//��������Ϸ������ 
	char board[ROW][COL];
	//��ʼ������ - ��ʼ��Ϊ�ո�
	//��ʼ�����̺���������Ϸģ�� -->game.h
	//����ʼ���������ֵӰ�����
	InitBoard(board,ROW,COL);

	//��ӡ����
	//�������Ǵ�ӡ���������
	DisplayBoard(board,ROW,COL);

	//����Ϸ���еĹ���
	//1.���Ӯ��		*
	//2.����Ӯ��		#
	//3.ƽ��			Q
	//4.��Ϸ����		C
	//char IsWin �����ж���Ϸ��״̬
	
	char ret = 0;//������Ϸ״̬

	while (1)
	{
		//���������
		PlayerMove(board, ROW, COL);
		//��ӡ����
		DisplayBoard(board, ROW, COL);
		//�ж��û���Ӯ
		ret = IsWin(board,ROW,COL);
		if ('C' != ret)
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		//��ӡ����
		DisplayBoard(board, ROW, COL);
		//�жϵ�����Ӯ
		ret = IsWin(board, ROW, COL);
		if ('C' != ret)
		{
			break;
		}
	}
	if ('*' == ret)
	{
		printf("���Ӯ��!\n");
	}
	else if ('#' == ret)
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��!\n");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;//�����û���ѡ�����
	//�������ֵ srand()����ֻ�����һ��
	srand((unsigned int)time(NULL));
	do
	{
		menu();//��ӡ���׵Ĳ˵�
		printf("��ѡ��:>");
		scanf("%d", &input);//�����û������ѡ��
		switch (input)
		{
			case 1:
				game();
				//printf("��������Ϸ\n");
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����,����ѡ��\n");
				break;
		}
	} while (input);
	return 0;
}