#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int (*  (*F)(int, int))(int);
//int(*  (*F)(int, int) );

//���Ͼ���
//��Ŀ���ݣ�
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ�����
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);

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
	//����ҵ� ����1   �Ҳ��� ����0
//	int x = 3, y = 3;//������
	//1. �������
	//2. ����
	//int ret = find_num(arr, 3, 3, k);
//	int ret = find_num1(arr, &x, &y, k);
//	if (1 == ret)
//	{
//		printf("�ҵ���!\n");
//		printf("�±���: %d %d\n", x+1, y+1);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };//N -- ���ҵĴ�������������N�� or 2N
	//O(1) -- ʱ�临�Ӷȸ�N�޹�
	//N -  3 
	//����һ������ ��:5
	//�����ķ���������Ҫ��
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

//����
//�ַ���
//���ݽṹ

//�ַ�������
//��Ŀ���ݣ�
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

#include <string.h>
//
//void left_move(char* str, int s)
//{
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < s; i++)
//	{
//		ÿ������תһ���ַ�
//		char tmp = *str;//1.
//		//2.�Ѻ�����ַ�Ų��ǰ��ȥ len-1
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3.��tmp�ŵ����ȥ
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
//	reverse(str,str+s-1);//��
//	reverse(str+s,str+len-1);//��
//	reverse(str,str+len-1);//����
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


//�ַ�������
//��Ŀ���ݣ�
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�DABC
//ABCD���������ַ��õ�DCAB

//void right_move(char* str, int s)
//{
//	int len = strlen(str);//�ַ�������
//	int i = 0;
//	for (i = 0; i < s; i++)
//	{
//		//1.�����һ���ַ���������
//		char tmp = *(str + len-1);
//		//2.��ǰ����ַ����Ų��
//		int j = 0;
//		for (j = len; j >=0 ; j--)
//		{
//			*(str + j - 1) = *(str + j - 2);
//		}
//		//3.�ٰѿ������ַ��ŵ���һ��λ����
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

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

//is_rotate(char* str, char* dst)
//{
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < len; i++)
//	{
//		//ÿ������תһ���ַ�
//		char tmp = *str;//1.
//		//2.�Ѻ�����ַ�Ų��ǰ��ȥ len-1
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3.��tmp�ŵ����ȥ
//		*(str + len - 1) = tmp;
//
//		if (strcmp(str, dst) == 0)
//			return 1;
//	}
//	return 0;
//}

//��ԭ�ַ���׷�������� 

//int is_rotate(char* str, char* dst)
//{
//	assert(str);
//	assert(dst);
//	if (strlen(str) != strlen(dst))
//	{
//		return 0;
//	}
//	//1.arr�ַ����ĺ���׷��������
//	//strcat();
//	int len = strlen(str);
//	strncat(str, str, len);
//	//2.�ж�dst�Ƿ�Ϊarr���ִ�
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

//strcat ׷���ַ���
//strncat �Լ����Լ�׷���ַ���

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
