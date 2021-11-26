#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int (*  (*F)(int, int))(int);
//int(*  (*F)(int, int) );

//杨氏矩阵
//题目内容：
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);

//1 2 3
//2 3 4
//4 5 6

//1 2 3 
//4 5 6
//7 8 9

//int find_num(int arr[3][3], int r, int c, int s)
//{
//	int x = 0, y = c - 1;
//	while (x < r && y >= 0)
//	{
//		if (s > arr[x][y])
//		{
//				x++;
//		}
//		else if (s < arr[x][y])
//		{
//				y--;
//		}
//		else
//		{
//			//printf("%d %d\n", x+1, y+1);
//			return 1;
//		}
//	}
//	return 0;
//}

//int find_num1(int arr[3][3], int* px, int* py, int s)
//{
//	int x = 0, y = *py - 1;
//	while (x < *px && y >= 0)
//	{
//		if (s > arr[x][y])
//		{
//			x++;
//		}
//		else if (s < arr[x][y])
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
	//如果找到 返回1   找不到 返回0
//	int x = 3, y = 3;//行与列
	//1. 传入参数
	//2. 带回
	//int ret = find_num(arr, 3, 3, k);
//	int ret = find_num1(arr, &x, &y, k);
//	if (1 == ret)
//	{
//		printf("找到了!\n");
//		printf("下标是: %d %d\n", x+1, y+1);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };//N -- 查找的次数最坏的情况下是N次 or 2N
	//O(1) -- 时间复杂度跟N无关
	//N -  3 
	//查找一个数字 如:5
	//遍历的方法不满足要求
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (7 == arr[i][j])
//			{
//				printf("%d", arr[i][j]);
//			}
//		}
//	}
//	return 0;
//}

//A.(int* p[10])(int*)
//B.int[10] * p(int*)
//C.int (*  (*p)[10] )(int*) //ok
//D.int((int*)[10])* p

//数组
//字符串
//数据结构

//字符串左旋
//题目内容：
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

#include <string.h>
//
//void left_move(char* str, int s)
//{
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < s; i++)
//	{
//		每次左旋转一个字符
//		char tmp = *str;//1.
//		//2.把后面的字符挪到前面去 len-1
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3.把tmp放到最后去
//		*(str + len - 1) = tmp;
//	}
//}
#include <assert.h>

//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* str,int s)
//{
//	assert(str);
//	int len = strlen(str);
//	reverse(str,str+s-1);//左
//	reverse(str+s,str+len-1);//右
//	reverse(str,str+len-1);//整体
//}
//
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 0;
//	scanf("%d", &k);
//	//char* p = "ABCDEF";//err
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}


//字符串右旋
//题目内容：
//实现一个函数，可以右旋字符串中的k个字符。
//例如：
//ABCD右旋一个字符得到DABC
//ABCD右旋两个字符得到DCAB

//void right_move(char* str, int s)
//{
//	int len = strlen(str);//字符串长度
//	int i = 0;
//	for (i = 0; i < s; i++)
//	{
//		//1.把最后一个字符拷贝下来
//		char tmp = *(str + len-1);
//		//2.把前面的字符向后挪动
//		int j = 0;
//		for (j = len; j >=0 ; j--)
//		{
//			*(str + j - 1) = *(str + j - 2);
//		}
//		//3.再把拷贝的字符放到第一个位置上
//		*(str) = tmp;
//	}
//}
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 0;
//	scanf("%d", &k);
//	//char* p = "ABCDEF";//err
//	right_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

//is_rotate(char* str, char* dst)
//{
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < len; i++)
//	{
//		//每次左旋转一个字符
//		char tmp = *str;//1.
//		//2.把后面的字符挪到前面去 len-1
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3.把tmp放到最后去
//		*(str + len - 1) = tmp;
//
//		if (strcmp(str, dst) == 0)
//			return 1;
//	}
//	return 0;
//}

//给原字符串追加它本身 

//int is_rotate(char* str, char* dst)
//{
//	assert(str);
//	assert(dst);
//	if (strlen(str) != strlen(dst))
//	{
//		return 0;
//	}
//	//1.arr字符串的后面追加它本身
//	//strcat();
//	int len = strlen(str);
//	strncat(str, str, len);
//	//2.判断dst是否为arr的字串
//	char* ret = strstr(str,dst);
//	return ret != NULL;/*if (NULL == ret){return 0;} else{return 1;}*/
//}
//
//int main()
//{
//	char arr[20] = "AABCD";
//	char ptr[] = "CDAAB";
//	int ret = is_rotate(arr, ptr);
//	if (1 == ret)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}

//strcat 追加字符串
//strncat 自己给自己追加字符串

//int main()
//{
//	char arr[20] = "hello";
	//hello bit\0
	//strcat(arr, "bit");

	//strcat(arr, arr);
//	strncat(arr, arr, 5);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//1  6
//	return 0;
//}

int main()
{
	int a[5] = { 5, 4, 3, 2, 1 };
	int* ptr = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));//4 1
	return 0;
}
