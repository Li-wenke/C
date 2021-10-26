#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//结果是什么?
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 }; //逗号表达式 取最后一个值
//    printf("%d\n", sizeof(arr));//4*4=16
//    return 0;
//} 

#include <stdlib.h>
//结果是什么?
//int main()
//{
//	char ch[] = { "hello bit" };
//	//[hello bit\0]
//	printf("%d %d\n", sizeof(ch), strlen(ch));//10 9
//	//strlen - 函数-求字符串长度的，找\0之前出现的字符个数
//	//sizeof - 操作符-计算变量/类型所占内存大小，单位是字节
//	return 0;
//}

//int main()
//{
//	char acX[] = "abcdefg";
//	char acY[] = { 'a','b','c','d','e','f','g' };
	//A.数组acX和数组acY等价 no
	//B.数组acX和数组acY的长度相同 no
	//C.数组acX的长度大于数组acY的长度 yes
	//D.数组acX的长度小于数组acY的长度 no
	//int a[2][] = { {0,1,2},{3,4,5} };//no
	//int a[][3] = { {0,1,2},{3,4,5} };//yes
	//int a[2][4] = { {0,1,2},{3,4},{5} };//no
	//int a[][3] = { {0,,2},{},{3,4,5} };//no
//	return 0;
//}

//冒泡排序

//int main()
//{
//	int arr[] = { 6,3,1,4,8,9,3,0,11,27,15,12 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz-1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]  < arr[j + 1])
//			{
//				int tep = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tep;
//				flag = 0;
//			}
//			
//		}
//		if (flag == 1)//一趟冒泡排序走完都没有交换
//		{
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。

//void Init(int arr[],int sz)//实现函数init() 初始化数组为全0
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)//实现print()  打印数组的每个元素
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Sort(int arr[], int sz)//排序
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//void Reverse(int arr[], int sz,int left,int right)
//{
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right ] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,5,6,7,9,21,4,3,10 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int i = 0;
//	Print(arr, sz);
//	//Init(arr,sz);//实现函数init() 初始化数组为全0
//	Sort(arr,sz);
//	Print(arr, sz);//实现print()  打印数组的每个元素
//	Reverse(arr, sz,left,right);//实现reverse()  函数完成数组元素的逆置。
//	Print(arr, sz);
//	return 0;
//}

//交换数组
//一对一对元素交换
 
int main()
{
	int arr1[] = {1,3,4,5,6,7,8};
	int arr2[] = {11,18,14,19,21,20};
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);

	for (i = 0; i < sz; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
//	int arr3[5] = {0};
//	//数组名是数组首元素的地址 - 0x0012ff44
//	//3 = 5;//err
//	/*arr3 = arr1;
//	arr1 = arr2;
//	arr2 = arr3;*/
	return 0;
}