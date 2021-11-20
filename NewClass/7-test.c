#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//C程序常见的错误分类：编译错误  链接错误  运行时错误-->调试时需要解决的
//									  栈溢出属于运行时错误	

//Release版本不可以调试

//i和arr是局部变量，都是存放在栈区上，栈区是先使用高地址再使用低地址，
//i的地址大，arr地址小，因为下标的增长地址是由低到高变化的，数组的下标在增长的过程中有可能会越界访问到i
//越界适当的话，会导致程序的死循环
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}

//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//从前往后找一个偶数
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//从后往前找一个奇数
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,3,2,5,6,9,4,6,13,15,21,7,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr, sz);
//	return 0;
//}

//模拟实现strlen
#include <assert.h>

int  my_strlen(char* ch)
{
	assert(ch);
	size_t count = 0;
	while (*ch++)
	{
		count++;
	}
	return count;
}

int main()
{
	char ch[] = "hello world!";
	int ret = my_strlen(ch);
	printf("%d", ret);
	return 0;
}

//模拟实现strcpy

char* my_strcpy(char* dest,const char* str)
{
	assert(dest);
	assert(str);
	char* ret = dest;
	while (*dest++ = *str++)
	{
		;
	}
	return ret;
}

int main()
{
	char ch1[20] = "i love you";
	char ch2[] = "you love me";
	printf("%s\n", my_strcpy(ch1, ch2));
	return 0;
}
