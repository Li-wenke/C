#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define ROW 3
//#define COL 3
//
////游戏菜单
////1表示玩游戏
////0表示退出游戏
//void menu()
//{
//	printf("\n");
//	printf("******************************************\n");
//	printf("*******    欢迎来到三子棋游戏    *********\n");
//	printf("************    1. play    ***************\n");
//	printf("************    0. exit    ***************\n");
//	printf("******************************************\n");
//}
//
////判断棋盘满了否
//int isFull(char board[ROW][COL], int row, int col)
//{
//	//判断棋盘是否满了 就看是否还有空格
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (board[i][j] == ' ')
//			{
//				return 0;//棋盘没满
//			}
//		}
//	}
//	return 1;//棋盘满了
//}
//
////判断输赢
//char  IsWim(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//
//	//判断三行
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//		{
//			return board[i][1];//
//		}
//	}
//	//判断三列
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
//		{
//			return board[1][i];
//		}
//	}
//	//判断对角线
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//	if (board[0][2] == board[1][1] & board[1][1] == board[2][0] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//
//	// 横线上五子连成一线，赢家产生
//	
//	//for (i = 0; i < row; i++)
//	//{
//	//	for (j = 0; j < col - 4; j++)
//	//	{
//	//		if (board[i][j] == board[i][j + 1]
//	//			&& board[i][j + 1] == board[i][j + 2]
//	//			&& board[i][j + 2] == board[i][j + 3]
//	//			&& board[i][j + 3] == board[i][j + 4]
//	//			&& board[i][j] != ' ')
//	//		{
//	//			return board[i][j];
//	//		}
//	//	}
//	//}
//
//	// 竖线上五子连成一线，赢家产生
//	 
//	//for (j = 0; j < col; j++)
//	//{
//	//	for (i = 0; i < row - 4; i++)
//	//	{
//	//		if (board[i][j] == board[i + 1][j]
//	//			&& board[i + 1][j] == board[i + 2][j]
//	//			&& board[i + 2][j] == board[i + 3][j]
//	//			&& board[i + 3][j] == board[i + 4][j]
//	//			&& board[i][j] != ' ')
//	//		{
//	//			return board[i][j];
//	//		}
//	//	}
//	//}
//
//	// 斜线上五子连成一线，赢家产生
//	
//	//for (i = 0; i < row - 4; i++)
//	//{
//	//	if (board[i][i] == board[i + 1][i + 1]
//	//		&& board[i + 1][i + 1] == board[i + 2][i + 2]
//	//		&& board[i + 2][i + 2] == board[i + 3][i + 3]
//	//		&& board[i + 3][i + 3] == board[i + 4][i + 4]
//	//		&& board[i][i] != ' ')
//	//	{
//	//		return board[i][i];
//	//	}
//	//	if (board[i][i + 4] == board[i + 1][i + 3]
//	//		&& board[i + 1][i + 3] == board[i + 2][i + 2]
//	//		&& board[i + 2][i + 2] == board[i + 3][i + 1]
//	//		&& board[i + 3][i + 1] == board[i + 4][i]
//	//		&& board[i][i + 4] != ' ')
//	//	{
//	//		return board[i][i + 4];
//	//	}
//	//}
//
//	//判断平局
//	//如果棋盘满了返回1 反之0
//	int ret = isFull(board, ROW, COL);
//	if (1 == ret)
//	{
//		return 'Q';
//	}
//	else
//	{
//		return 'C';
//	}
//}
//
////电脑下棋
//void ComputerMove(char board[ROW][COL], int row, int col)
//{
//	printf("电脑走:>\n");
//	while (1)
//	{
//		int x = rand() % row;
//		int y = rand() % col;
//		if (board[x][y] == ' ')
//		{
//			board[x][y] = '#';
//			break;
//		}
//	}
//
//}
//
////玩家下棋
//void PlayerMove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("玩家走:>\n");
//	while (1)
//	{
//		printf("请选择坐标(x,y):>");
//		scanf("%d %d",&x,&y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			//下棋
//			//先判断位置有没有被占用
//			if (board[x - 1][y - 1] == ' ')
//			{
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("位置被占用了,请重新下子:>\n");
//			}
//		}
//		else
//		{
//			printf("坐标非法,请重新输入");
//		}
//	}
//}
//
////打印棋盘
////打印数组元素及棋盘的框架
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			
//			printf(" %c ",board[i][j]);
//			if (col - 1 > j )
//			{
//				printf("|");
//			}
//			
//		}
//		printf("\n");
//		if (i < row - 1)
//		{
//			//printf("---|---|---\n");
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if (j < col - 1 )
//				{
//					printf("|");
//				}
//			}
//		}
//		
//		printf("\n");
//	}
//
//}
//
////初始化棋盘
////把数组每个元素初始化成空格
//void InitBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;//行
//	int j = 0;//列
//	//遍历二维数组
//	for (i = 0; i < row; i++)//控制行
//	{
//		for (j = 0; j < col; j++)//控制列
//		{
//			board[i][j] = ' ';//初始化成空格
//		}
//	}
//}
//
////游戏函数 --搭建游戏相关的函数
//void game()
//{
//	//存储数据 
//	char board[ROW][COL];
//	//初始化棋盘 -- 初始化空格
//	//给数组赋值空格符号
//	InitBoard(board, ROW, COL);
//
//	//打印棋盘
//	//打印数组元素及棋盘框架
//
//	DisplayBoard(board, ROW, COL);
//	int i = 0;//用来接受用户先下还是后下的接收值
//	char ret = 0;//接受游戏状态
//	//游戏过程
//	//玩家赢   - '*'
//	//电脑赢   - '#'
//	//平局     - 'Q'
//	//游戏继续 - 'C'
//	printf("请选择先下还是后下(1/0):>");
//	scanf("%d", &i);
//	while (1)
//	{
//		if (1 == i)
//		{
//			//玩家走
//			PlayerMove(board, ROW, COL);
//			DisplayBoard(board, ROW, COL);
//			//判断输赢
//			ret = IsWim(board, ROW, COL);
//			if ('C' != ret)
//			{
//				break;
//			}
//			//电脑走
//			ComputerMove(board, ROW, COL);
//			DisplayBoard(board, ROW, COL);
//			//判断输赢
//			ret = IsWim(board, ROW, COL);
//			if ('C' != ret)
//			{
//				break;
//			}
//		}
//		else
//		{
//			//电脑走
//			ComputerMove(board, ROW, COL);
//			DisplayBoard(board, ROW, COL);
//			//判断输赢
//			ret = IsWim(board, ROW, COL);
//			if ('C' != ret)
//			{
//				break;
//			}
//			//玩家走
//			PlayerMove(board, ROW, COL);
//			DisplayBoard(board, ROW, COL);
//			//判断输赢
//			ret = IsWim(board, ROW, COL);
//			if ('C' != ret)
//			{
//				break;
//			}
//		}
//	}
//	if ('*' == ret)
//	{
//		printf("玩家赢了\n");
//	}
//	else if ('#' == ret)
//	{
//		printf("电脑赢了\n");
//	}
//	else
//	{
//		printf("平局!\n");
//	}
//	DisplayBoard(board, ROW, COL);
//}
//
//
//int main()
//{
//	//printf("三子棋游戏:>");
//	int input = 0;//用来接受用户选择
//	srand((unsigned int)time(NULL));//产生随机数 指挥执行一次所以放到main函数
//	//希望玩一把游戏不过瘾还可以继续玩 所以采用do...while结构 游戏无论如何都会进行一次 打印一个菜单让用户选择 
//	do
//	{
//		menu();//打印菜单
//		printf("请选择:>");//让用户选择
//		scanf("%d", &input);
//		//根据用户选择做出一下操作
//		switch (input)
//		{
//			//选择 1 玩游戏
//		case 1:
//			printf("\n开始游戏:\n");
//			game();
//			break;
//			//选择 0 退出游戏
//		case 0:
//			printf("退出游戏\n");
//			break;
//			//选择其他数则重新选择
//		default:
//			printf("选择错误,请重新选择:>\n");
//			break;
//		}
//
//	} while (input);//根据程序设定可用input作为循环条件
//
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define EASY_COUNT 10
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2 
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		//打印行号
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void Setmine(char mine[ROWS][COLS], int row, int col, int count)
{
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if ('0' == mine[x][y])
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x + 1][y + 1] +
		mine[x + 1][y] +
		mine[x + 1][y - 1] +
		mine[x][y - 1] - 8 * '0';
}
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{

	int x = 0;
	int y = 0;
	int win = 0;
	int input = 0;
	//1.输入排查的坐标
	//2.检查坐标是否是雷
	//1.是雷 - 炸死了	--游戏结束
	//2.不是雷 - 统计坐标周围有几个雷 -- 存储排查雷的信息到show数组  游戏继续 win用来计算排查不是雷的数量
	while (win < row * col - EASY_COUNT)
	{
		printf("请选择排查(1)或者标记雷(0):>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			DisplayBoard(show, ROW, COL);
			printf("请输入需要排查的坐标(x,y):>");
			scanf("%d%d", &x, &y);

			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾,你被炸死了!\n");
					printf("游戏结束!\n");
					DisplayBoard(mine, row, col);
					break;
				}
				else
				{
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';
					DisplayBoard(show, row, col);
					win++;
				}
			}
			else
			{
				printf("坐标非法,请重新输入:>");
			}
			break;
		case 0:
			printf("请标记坐标(x,y):>\n");
			DisplayBoard(show, ROW, COL);
			//标记雷的函数
			break;
		default:
			printf("输入有误,请重新输入:>\n");
			break;
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你!排雷成功\n");
		DisplayBoard(show, row, col);
		printf("\n");
		DisplayBoard(mine, row, col);
	}

}
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
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//DisplayBoard(mine,ROW,COL);
	//DisplayBoard(show, ROW, COL);

	//布置雷
	Setmine(mine, ROW, COL, EASY_COUNT);
	//DisplayBoard(mine, ROW, COL);
	//排查雷
	Findmine(mine, show, ROW, COL);

}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请输入您的选择:>");
		scanf("%d", &input);
		switch (input)
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
	} while (input);
	return 0;
}