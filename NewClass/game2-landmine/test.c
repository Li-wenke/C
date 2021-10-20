#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>

//#include "game.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EASY_COUNT 10
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2
//��ӡ���ײ˵�
void menu()
{
	printf("\n");
	printf("******************************************\n");
	printf("********    ��ӭ����ɨ����Ϸ    **********\n");
	printf("************    1. play    ***************\n");
	printf("************    0. exit    ***************\n");
	printf("******************************************\n");
	printf("\n");
}

void game()
{
	char mine[ROWS][COLS]={0};
	char show[ROWS][COLS]={0};
	
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	
	//DisplayBoard(mine,ROW,COL);
	DisplayBoard(show,ROW,COL);
	
	//������
	Setmine(mine,ROW,COL,EASY_COUNT);
	//�Ų���
	Findmine(mine,show,ROW,COL);

}

void InitBoard(char board[ROWS][COLS],int rows,int cols,char set)
{
	int i = 0;
	int j = 0;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			board[i][j]=set;
		}
	}
}
DisplayBoard(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for(i=0;i<=row;i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for(i=1;i<row;i++)
	{
		//��ӡ�к�
		printf("%d ",i);
		for(j=1;j<col;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}
void Setmine(char mine[ROW][COL],int row,int col,int count)
{
	while(count)
	{
		int x = rand()%row+1;
		int y = rand()%col+1;
		
		if('0'==mine[x][y])
		{
			mine[x][y]='1';
			count --;
			break;
		}
	}
}
int get_mine_count(char mine,int x,int y)
{
	return mine[x-1][y-1]+
		   mine[x-1][y]+
		   mine[x-1][y+1]+
		   mine[x][y+1]+
		   mine[x+1][y+1]+
		   mine[x+1][y]+
		   mine[x+1][y-1]+
		   mine[x][y-1] - 8 *'0';
}
void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{

	int x = 0;
	int y = 0;
	int win = 0;
	//1.�����Ų������
	//2.��������Ƿ�����
	//1.���� - ը����	--��Ϸ����
	//2.������ - ͳ��������Χ�м����� -- �洢�Ų��׵���Ϣ��show����  ��Ϸ���� win���������Ų鲻���׵�����
	while(win < row*col -EASY_COUNT)
	{
		printf("��������Ҫ�Ų������(x,y):>");
		scanf("%d%d",&x,&y);
		
		if(x>=1&&x<=row&&y>=1&&y<=col)
		{
			if(mine[x][y]=='1')
			{
				printf("���ź�,�㱻ը����!\n");
				printf("��Ϸ����!\n");
				DisplayBoard(mine,row,col);
				break;
			}
			else
			{
				int count = get_mine_count(mine,x,y);
				show[x][y] = count +'0';
				DisplayBoard(show,row,col);
				win++;
			}
		}
		else
		{
			printf("����Ƿ�,����������:>");
		}
		
	}
	if(win = row*col-EASY_COUNT)
	{
		printf("��ϲ��!���׳ɹ�\n");
		DisplayBoard(show,row,col);
	}
	
}

int main()
{
	int input = 0;
	srand((unsigned) time(NULL));
	do
	{
		menu();
		printf("����������ѡ��:>");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("��������!\n");
				printf("����������:>");
				break;
		}
		
	
	}while(input);
	
	return 0;
}