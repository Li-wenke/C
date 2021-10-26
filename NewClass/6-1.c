#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//指针
//在计算机科学中，指针（Pointer）是编程语言中的一个对象，利用地址，它的值直接指向
//（points to）存在电脑存储器中另一个地方的值。由于通过地址能找到所需的变量单元，可以
//说，地址指向该变量单元。因此，将地址形象化的称为“指针”。意思是通过它能找到以它为地址
//的内存单元。

//指针
//指针是个变量，存放内存单元的地址（编号）。

//int main()
//{
//	int a = 10;//a占4个字节 -
//	int *pa = &a;//拿到的是a的4个字节中第一个字节的地址
//	*pa = 20;//通过找到a的地址找到a然后改值 pa是指针变量
//	return 0;
//}
//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
	//指针大小
//	printf("%d\n", sizeof(pa));//4
//	printf("%d\n", sizeof(pc));//4
//	printf("%d\n", sizeof(pf));//4
//	return 0;
//}

//指针类型的意义
//1. 指针类型决定了：指针解引用的权限有多大
//2. 指针类型决定了，指针走一步，能走多远（步长）

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
	//0 1 2 3 4 5 6 7 8 9 a b c d e f
	//11111111
	//    8421
	//
	//int a = 0x11223344;
	//char* pc = &a;
	//*pc = 0;
	/*int* pa = &a;
	*pa = 0;*/
//	return 0;
//}

//希望一个字节一个字节访问 可以用char类型的指针
//一个整型一个整型访问 可以用int类型的指针
//看成double类型访问可以用double类型的指针
//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i)=1;//其实是下标为i的地址
//	}
//	return 0;
//}

//野指针
//野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的)

//野指针成因

//1. 指针未初始化

//int main()
//{
	//p -> 野指针
//	int* p;//p是一个局部的指针变量, 局部变量不初始化的话,默认是随机值
//	*p = 20;//非法访问内存
	//使用了未初始化的局部变量 p
	//使用未初始化的内存 p
	//err
//	return 0;
//}

//2.指针越界访问

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//		*p = i;
//		p++;
//	}
//	return 0;
//}

//3.指针指向的空间释放

//int* test()
//{
//	int a = 10;//函数调用后变量a销毁了
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

//如何规避野指针
//1. 指针初始化
//2. 小心指针越界
//3. 指针指向空间释放及时置NULL
//4. 指针使用之前检查有效性

//1. 指针初始化
//int main()
//{
//	//当前不知道p应该初始化为什么地址的时候，直接初始化为NULL
//	//int* p = NULL;//NULL -> stdio.h   可以理解为空指针吗?
//	#ifndef NULL
//	#ifdef __cplusplus
//	#define NULL 0
//	#else
//	#define NULL ((void *)0)
//	#endif
//	//明确知道初始化的值
//	//int a = 10;
//	//int* ptr = &a;
//	//C语言本身是不会检查数据的越界行为的
//	int* p = NULL;
//
//	if(p != NULL)
//		*p = 10;
//
//	return 0;
//}

//指针运算

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}

//指针的关系运算

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char c[5];
//	//指针和指针相减的前提：
//	//两个指针指向同一块空间
//	printf("%d\n", &arr[9] - &c[0]);//err 从“char *”到“int *”的类型不兼容
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}

#include <string.h>
//计数器
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
// 递归
//int my_strlen(char* str)
//{
//	if ('\0' != *str)
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//指针-指针
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	//strlen(); - 求字符串长度
//	//递归
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//
//	return 0;
//}

//指针和数组

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n",arr);//数组名是数组首元素的地址
//	printf("%p\n", &arr[0]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p <==> %p\n", &arr[i], p + i);
		//*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//数组名
	//[ ]是操作符  2和arr是两个操作数
//	printf("%d \n", 2[arr]);
//	printf("%d \n", arr[2]);
//	printf("%d \n", 2[p]);//p[2] --> *(p+2)
	//arr[2] --> *(arr+2) --> *(2+arr) --> 2[arr]
	//arr[2]<==> *(arr+2) <==> *(p+2) <==> *(2+p) <==> *(2+arr) == 2[arr]
	//2[arr] <==> *(2+arr)
//	return 0;
//}

//	二级指针

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量,一级指针
	//pa;//pa也是变量,&pa取出pa在内存中起始地址
//	int** ppa = &pa;//二级指针变量
//	return 0;
//}

//指针数组

int main()
{
	int arr[10];//整形数组 - 存放整形的数组就是整形数组
	char ch[5];//字符数组 - 存放的是字符
	//指针数组 - 存放指针的数组
	int* parr[5];//整形指针的数组
	char* pch[5];
	return 0;
}