#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//		数组
//		数组 -  一组相同类型元素的集合
//		分为一维数组、二维数组、三维数组

//int main()
//{
//	//int arr[8];
//	//char ch[5];
//	//int n = 8; int arr[n]; //C99语法支持  变长数组  数组的大小是变量
//	数组创建 [] 中要给一个常量才可以，不能使用变量
//	//int arr[8];
//
//	//int a = 10;//初始化
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};//完全初始化
//	//int arr[10] = { 1,2,3,4,5 };//不完全初始化
//	//int arr2[] = { 1,2,3,4,5 };
//	//int arr2[5] = { 1,2,3,4,5 };
//
//	//char ch1[5] = {'b', 'i', 't'};
//	//char ch2[] = { 'b', 'i', 't' };
//
//	//char ch3[5] = "bit";//b i t \0 0
//	//char ch4[] = "bit";//b i t \0
//
//	char ch5[] = "bit";
//	//[b i t \0]
//	char ch6[] = { 'b', 'i', 't' };
//	//[b i t]
//
//	printf("%d\n", strlen(ch5));//3
//	printf("%d\n", strlen(ch6));//随机值
//
//	//printf("%s\n", ch5);
//	//printf("%s\n", ch6);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//
//	arr[4] = 5;//[] - 下标引用操作符
//	int i = 0;
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("-------------\n");
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//%p - 是按地址的格式打印 - 十六进制的打印
//		数组在内存中存储
//		一维数组在内存中是连续存放的
//		随着数组下标的增长，地址由低到高变化的
//int main()
//{
//	//printf("%x\n", 0x12);//12
//	//printf("%p\n", 0x12);//00000012
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	//printf("%x\n", 0x12);
//	//printf("%p\n", 0x12);
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//数组名是数组首元素的地址
//	//printf("%p", &p);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//		二维数组

//int main()
//{
	//三行四列的整型二维数组
	//二维数组的创建
	//int arr[3][4] ;
	//char ch[3][10];
	//double arr1[4][6];

	//二维数组的初始化 -创建的同时初始化
	// 二维数组的行可以省略 但列不能省略
	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	//int arr[3][4] = {1,2,3,4,5,6,7,8};//不完全初始化后面补0
	//int arr[3][4] = { {1,2},{3,4},{5,6} };//
	//int arr[][4] = { {1,2},{3,4},{5,6} };/

	//二维数组在数组中存储
	//二维数组在内存中也是连续存放的
	//一行内部连续,跨行也是连续的
	//int arr[][4] = { {1,2},{3,4},{5,6} };
	//int i = 0;//行
	//int j = 0;//列
	//int* p = &arr[0][0];
	//for (i = 0; i < 12; i++)
	//{
	//	printf("%d\t", *p);
	//	//*p++;
	//	p++;
	//}
	/*for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n",i,j,&arr[i][j]);
		}
	}*/
//	return 0;
//}


//		冒泡排序
//		俩俩相邻的元素比较,并且可能的话需要交换

//void bubble_sort(int arr[],int sz)//形参arr本质是指针
//{
	//计算数组元素个数
	//int sz = sizeof(arr) / sizeof(arr[0]);//err
	//确定趟数 也就是数组元素个数-1
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])//如果前一个数字大于后一个数字则需要交换
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//}

//int main()
//{
//	int arr[] = { 3,1,6,2,0,4,7,10,8,5,9,13,11,17 };
//	//排序为升序	->>>>>> 冒泡排序
//	//计算数组元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	printf("交换前:");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//	bubble_sort(arr,sz);//数组传参的时候，传递的其实是数组首元素的地址
//	
//	printf("交换后:");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//	数组名是什么
//	数组名是数组首元素的地址 
//	但是有2个例外
//	1.sizeof(数组名) - 数组名表示整个数组 - 计算整个数组的大小 单位是字节
//	2.&数组名 - 数组名表示整个数组 - 取出的是整个数组的地址

//int main()
//{
//	int arr[10] = { 0 };
//
//	printf("%p\n", &arr);//&arr取出的是数组的地址
//	printf("%p\n", &arr+1);//加了40 相当于跳到了下个数组 
//
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);//加4 数组跳到下个元素的地址
//
//	printf("%p\n", &arr[0]);
//
//	int sz = sizeof(arr);//数组名表示整个数组
//	printf("%d\n", sz);
//
//	//printf("%p ", &arr[0]);
//	//printf("%p ", arr);//数组名是首元素的地址
//
//	return 0;
//}

void bubble_sort(int arr[], int sz)//形参arr本质是指针
{
	//确定趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序的过程
		int j = 0;
		int flag = 1;

		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//只要两个相邻的元素发生了交换
			}
		}
		if (flag == 1)//一趟冒泡排序走完都没有交换
		{
			break;
		}
	}
}
int main()
{
	//int arr[] = { 3,1,6,2,0,4,7,10,8,5,9,13,11,17 };
	int arr[] = { 3,1,6,2,0,4,7,10,8,5,9,13,11,17,14,15,23 };
	//排序为升序	->>>>>> 冒泡排序
	//计算数组元素个数
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	printf("交换前:");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	bubble_sort(arr,sz);//数组传参的时候，传递的其实是数组首元素的地址
	
	printf("交换后:");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}