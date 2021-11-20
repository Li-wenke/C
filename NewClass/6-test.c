#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//野指针不可以正常使用
//32位：int类型占4个字节 指针占4个字节 操作系统可以使用的最大内存是2^32
//64位: int类型占4个字节 指针占8个字节 操作系统可以使用的最大内存是2^64


//结果是什么
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);//0 0 3 4 5
//    }
//    return 0;
//}

//int main()
//{
//	unsigned long arr[] = { 6,7,8,9,10 };
//	unsigned long* parr;
//	parr = arr;
//	*(parr + 3) += 3;//*(parr+3) = *(parr+3)+3; *(parr+3) = 9 + 3;
//	printf("%d,%d\n", *parr, *(parr + 3));//6 12
//	return 0;
//}

//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//void fun(struct stu* p)
//{
//    printf("%s\n", (*p).name);
//    return;
//}
//int main()
//{
//    struct stu students[3] = { {9801,"zhang",20},
//                              {9802,"wang",19},
//                              {9803,"zhao",18}
//    };
//    fun(students + 1);//wang
//    return 0;
//}

//结构体访问成员的操作符 . -> *解引用操作符   
//sizeof 不是访问结构体成员的操作符

//二级指针也是指针，是用来存放一级指针的地址
//指针是用来存放地址的变量

//指针是地址 地址有高低之分 可以用来比较大小的
//整型指针解引用操作访问4个字节 char类型是一个字节 short类型是2个字节...

//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//
//	a.a = 99;
//	printf("%d\n", __________);
//	return 0;
//}
//题目内容：
//A.a.a ok
//B. *p.a//err    .操作符的优先级比*操作符高
//C.p->a
//D.(*p).a
//void reverse(char* str)
//{
//	assert(str);
//
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//
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
//int main()
//{
//	char arr[] = "abcdef";//fedcba
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}
#include <string.h>
#include <assert.h>
//写一个函数，可以逆序一个字符串的内容
//void reverse(char* str,char* end)
//{
//	assert(str);//防止野指针 断言
//	while (str <= end)
//	{
//		char tmp = *end;
//		*end = *str;
//		*str = tmp;
//		str++;
//		end--;
//	}
//}
//int main()
//{
//	char ch[] = "abcdef";
//	char* end = ch + strlen(ch) - 1;
//	reverse(ch,end);
//	printf("%s\n", ch);
//	return 0;
//}

//打印菱形图案

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 7; i++)
//	{
//		for (j = 0; j <= 5 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i*2; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= 10-(2*i); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//上
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0; j <= i ; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少瓶汽水

int main()
{
	int money = 0;
	scanf("%d", &money);
	int total = 0;
	if (money > 0)
	{
		total = 2 * money - 1;
	}
	//int total = money;
	//int empty = money;
	////开始置换
	//while (empty >= 2)
	//{
	//	total += empty / 2;
	//	empty = empty / 2 + empty % 2;
	//}
	printf("%d", total);
	return 0;
}