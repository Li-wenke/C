#define _CRT_SECURE_NO_WARNINGS 1

//ͷ�ļ��İ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//���ŵ�����
#define ROW 3
#define COL 3

//����������

//��ʼ�����̺���
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ���̺���
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//����Ϸ���еĹ���
//1.���Ӯ��		*
//2.����Ӯ��		#
//3.ƽ��			Q
//4.��Ϸ����		C
//char IsWin �����ж���Ϸ��״̬

char IsWin(char board[ROW][COL], int row, int col);
