#define _CRT_SECURE_NO_WARNINGS 1
//重复引用头文件
//所以在game.h里引用头文件 省得多次引用头文件
//#include <stdio.h>
#include "game.h"


//简易游戏菜单
void menu()
{
	printf("\n");
	printf("******************************************\n");
	printf("*******    欢迎来到三子棋游戏    *********\n");
	printf("************    1. play    ***************\n");
	printf("************    0. exit    ***************\n");
	printf("******************************************\n");
}
//三子棋游戏运行逻辑
void game()
{
	//存储数据 - 二维数组
	//char board[3][3];//3*3的棋盘 后期如果需要更大的棋盘需要改大 修改数据太多工程量大 不适合
	//棋盘是游戏的属性 
	char board[ROW][COL];
	//初始化棋盘 - 初始化为空格
	//初始化棋盘函数属于游戏模块 -->game.h
	//不初始化出现随机值影响外观
	InitBoard(board,ROW,COL);

	//打印棋盘
	//本质上是打印数组的内容
	DisplayBoard(board,ROW,COL);

	//在游戏进行的过程
	//1.玩家赢了		*
	//2.电脑赢了		#
	//3.平局			Q
	//4.游戏继续		C
	//char IsWin 用来判断游戏的状态
	
	char ret = 0;//接受游戏状态

	while (1)
	{
		//玩家先下棋
		PlayerMove(board, ROW, COL);
		//打印棋盘
		DisplayBoard(board, ROW, COL);
		//判断用户输赢
		ret = IsWin(board,ROW,COL);
		if ('C' != ret)
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		//打印棋盘
		DisplayBoard(board, ROW, COL);
		//判断电脑输赢
		ret = IsWin(board, ROW, COL);
		if ('C' != ret)
		{
			break;
		}
	}
	if ('*' == ret)
	{
		printf("玩家赢了!\n");
	}
	else if ('#' == ret)
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局!\n");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;//定义用户的选择变量
	//生成随机值 srand()函数只会调用一次
	srand((unsigned int)time(NULL));
	do
	{
		menu();//打印简易的菜单
		printf("请选择:>");
		scanf("%d", &input);//接受用户输入的选择
		switch (input)
		{
			case 1:
				game();
				//printf("三子棋游戏\n");
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误,重新选择\n");
				break;
		}
	} while (input);
	return 0;
}