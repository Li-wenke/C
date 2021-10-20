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
//打印简易菜单
void menu()
{
	printf("\n");
	printf("******************************************\n");
	printf("********    欢迎来到扫雷游戏    **********\n");
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
	
	//布置雷
	Setmine(mine,ROW,COL,EASY_COUNT);
	//排查雷
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
	//打印列号
	for(i=0;i<=row;i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for(i=1;i<row;i++)
	{
		//打印行号
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
	//1.输入排查的坐标
	//2.检查坐标是否是雷
	//1.是雷 - 炸死了	--游戏结束
	//2.不是雷 - 统计坐标周围有几个雷 -- 存储排查雷的信息到show数组  游戏继续 win用来计算排查不是雷的数量
	while(win < row*col -EASY_COUNT)
	{
		printf("请输入需要排查的坐标(x,y):>");
		scanf("%d%d",&x,&y);
		
		if(x>=1&&x<=row&&y>=1&&y<=col)
		{
			if(mine[x][y]=='1')
			{
				printf("很遗憾,你被炸死了!\n");
				printf("游戏结束!\n");
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
			printf("坐标非法,请重新输入:>");
		}
		
	}
	if(win = row*col-EASY_COUNT)
	{
		printf("恭喜你!排雷成功\n");
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
		printf("请输入您的选择:>");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("输入有误!\n");
				printf("请重新输入:>");
				break;
		}
		
	
	}while(input);
	
	return 0;
}