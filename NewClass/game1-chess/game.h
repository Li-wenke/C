#define _CRT_SECURE_NO_WARNINGS 1

//头文件的包含
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//符号的声明
#define ROW 3
#define COL 3

//函数的声明

//初始化棋盘函数
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘函数
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//在游戏进行的过程
//1.玩家赢了		*
//2.电脑赢了		#
//3.平局			Q
//4.游戏继续		C
//char IsWin 用来判断游戏的状态

char IsWin(char board[ROW][COL], int row, int col);
