#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define ROW 3
//#define COL 3
//
////��Ϸ�˵�
////1��ʾ����Ϸ
////0��ʾ�˳���Ϸ
//void menu()
//{
//	printf("\n");
//	printf("******************************************\n");
//	printf("*******    ��ӭ������������Ϸ    *********\n");
//	printf("************    1. play    ***************\n");
//	printf("************    0. exit    ***************\n");
//	printf("******************************************\n");
//}
//
////�ж��������˷�
//int isFull(char board[ROW][COL], int row, int col)
//{
//	//�ж������Ƿ����� �Ϳ��Ƿ��пո�
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (board[i][j] == ' ')
//			{
//				return 0;//����û��
//			}
//		}
//	}
//	return 1;//��������
//}
//
////�ж���Ӯ
//char  IsWim(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//
//	//�ж�����
//	for (i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//		{
//			return board[i][1];//
//		}
//	}
//	//�ж�����
//	for (i = 0; i < col; i++)
//	{
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
//		{
//			return board[1][i];
//		}
//	}
//	//�ж϶Խ���
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//	if (board[0][2] == board[1][1] & board[1][1] == board[2][0] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//
//	// ��������������һ�ߣ�Ӯ�Ҳ���
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
//	// ��������������һ�ߣ�Ӯ�Ҳ���
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
//	// б������������һ�ߣ�Ӯ�Ҳ���
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
//	//�ж�ƽ��
//	//����������˷���1 ��֮0
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
////��������
//void ComputerMove(char board[ROW][COL], int row, int col)
//{
//	printf("������:>\n");
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
////�������
//void PlayerMove(char board[ROW][COL], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	printf("�����:>\n");
//	while (1)
//	{
//		printf("��ѡ������(x,y):>");
//		scanf("%d %d",&x,&y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			//����
//			//���ж�λ����û�б�ռ��
//			if (board[x - 1][y - 1] == ' ')
//			{
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("λ�ñ�ռ����,����������:>\n");
//			}
//		}
//		else
//		{
//			printf("����Ƿ�,����������");
//		}
//	}
//}
//
////��ӡ����
////��ӡ����Ԫ�ؼ����̵Ŀ��
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
////��ʼ������
////������ÿ��Ԫ�س�ʼ���ɿո�
//void InitBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;//��
//	int j = 0;//��
//	//������ά����
//	for (i = 0; i < row; i++)//������
//	{
//		for (j = 0; j < col; j++)//������
//		{
//			board[i][j] = ' ';//��ʼ���ɿո�
//		}
//	}
//}
//
////��Ϸ���� --���Ϸ��صĺ���
//void game()
//{
//	//�洢���� 
//	char board[ROW][COL];
//	//��ʼ������ -- ��ʼ���ո�
//	//�����鸳ֵ�ո����
//	InitBoard(board, ROW, COL);
//
//	//��ӡ����
//	//��ӡ����Ԫ�ؼ����̿��
//
//	DisplayBoard(board, ROW, COL);
//	int i = 0;//���������û����»��Ǻ��µĽ���ֵ
//	char ret = 0;//������Ϸ״̬
//	//��Ϸ����
//	//���Ӯ   - '*'
//	//����Ӯ   - '#'
//	//ƽ��     - 'Q'
//	//��Ϸ���� - 'C'
//	printf("��ѡ�����»��Ǻ���(1/0):>");
//	scanf("%d", &i);
//	while (1)
//	{
//		if (1 == i)
//		{
//			//�����
//			PlayerMove(board, ROW, COL);
//			DisplayBoard(board, ROW, COL);
//			//�ж���Ӯ
//			ret = IsWim(board, ROW, COL);
//			if ('C' != ret)
//			{
//				break;
//			}
//			//������
//			ComputerMove(board, ROW, COL);
//			DisplayBoard(board, ROW, COL);
//			//�ж���Ӯ
//			ret = IsWim(board, ROW, COL);
//			if ('C' != ret)
//			{
//				break;
//			}
//		}
//		else
//		{
//			//������
//			ComputerMove(board, ROW, COL);
//			DisplayBoard(board, ROW, COL);
//			//�ж���Ӯ
//			ret = IsWim(board, ROW, COL);
//			if ('C' != ret)
//			{
//				break;
//			}
//			//�����
//			PlayerMove(board, ROW, COL);
//			DisplayBoard(board, ROW, COL);
//			//�ж���Ӯ
//			ret = IsWim(board, ROW, COL);
//			if ('C' != ret)
//			{
//				break;
//			}
//		}
//	}
//	if ('*' == ret)
//	{
//		printf("���Ӯ��\n");
//	}
//	else if ('#' == ret)
//	{
//		printf("����Ӯ��\n");
//	}
//	else
//	{
//		printf("ƽ��!\n");
//	}
//	DisplayBoard(board, ROW, COL);
//}
//
//
//int main()
//{
//	//printf("��������Ϸ:>");
//	int input = 0;//���������û�ѡ��
//	srand((unsigned int)time(NULL));//��������� ָ��ִ��һ�����Էŵ�main����
//	//ϣ����һ����Ϸ����񫻹���Լ����� ���Բ���do...while�ṹ ��Ϸ������ζ������һ�� ��ӡһ���˵����û�ѡ�� 
//	do
//	{
//		menu();//��ӡ�˵�
//		printf("��ѡ��:>");//���û�ѡ��
//		scanf("%d", &input);
//		//�����û�ѡ������һ�²���
//		switch (input)
//		{
//			//ѡ�� 1 ����Ϸ
//		case 1:
//			printf("\n��ʼ��Ϸ:\n");
//			game();
//			break;
//			//ѡ�� 0 �˳���Ϸ
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//			//ѡ��������������ѡ��
//		default:
//			printf("ѡ�����,������ѡ��:>\n");
//			break;
//		}
//
//	} while (input);//���ݳ����趨����input��Ϊѭ������
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
	//��ӡ�к�
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		//��ӡ�к�
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
	//1.�����Ų������
	//2.��������Ƿ�����
	//1.���� - ը����	--��Ϸ����
	//2.������ - ͳ��������Χ�м����� -- �洢�Ų��׵���Ϣ��show����  ��Ϸ���� win���������Ų鲻���׵�����
	while (win < row * col - EASY_COUNT)
	{
		printf("��ѡ���Ų�(1)���߱����(0):>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			DisplayBoard(show, ROW, COL);
			printf("��������Ҫ�Ų������(x,y):>");
			scanf("%d%d", &x, &y);

			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (mine[x][y] == '1')
				{
					printf("���ź�,�㱻ը����!\n");
					printf("��Ϸ����!\n");
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
				printf("����Ƿ�,����������:>");
			}
			break;
		case 0:
			printf("��������(x,y):>\n");
			DisplayBoard(show, ROW, COL);
			//����׵ĺ���
			break;
		default:
			printf("��������,����������:>\n");
			break;
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ��!���׳ɹ�\n");
		DisplayBoard(show, row, col);
		printf("\n");
		DisplayBoard(mine, row, col);
	}

}
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
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };

	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//DisplayBoard(mine,ROW,COL);
	//DisplayBoard(show, ROW, COL);

	//������
	Setmine(mine, ROW, COL, EASY_COUNT);
	//DisplayBoard(mine, ROW, COL);
	//�Ų���
	Findmine(mine, show, ROW, COL);

}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("����������ѡ��:>");
		scanf("%d", &input);
		switch (input)
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
	} while (input);
	return 0;
}