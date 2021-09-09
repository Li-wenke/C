#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>//system
#include <string.h>//strcmp
int main()
{
	char input[20] = { 0 };//存储数据
	//关机
	//system()--专门用来执行命令
	system("shutdown -s -t 60");//关机命令 60秒后
	again:
	printf("请注意，你的电脑在一分钟内关机，如果输入:我是猪,就取消关机\n");
	scanf("%s", &input);//%s -字符串
	if (strcmp(input, "我是猪") ==0)//判断input是不是"我是猪"  -strcmp --string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0; 
}

//3^3=0
//011
//011
//000
//5^5=0
//101
//101
//000
//a^a=0
//0^5=5
//000
//101
//101
//0^3=3
//000
//011
//011
//3^5^3=5
//011
//101
//110
//011
//101
//3^3^5=5
//异或是满足交换律
//011
//011
//000
//101
//101
//int main()
//{
	//1^1^2^2^3^3^4^4^5 = 5
	// 
	//给定一个非空整型数组,除了某个元素只出现一次以外,其余每个元素均出现两次,找出只出现一次的元素
//	int arr[] = {1,2,3,4,5,6,7,8,1,2,3,4,5,6,7,8,9};
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("只出现一次的元素:%d\n", ret);
//	return 0;
//}

//int main()
//{
	//Leetcode--国外算法网站
	////给定一个非空整型数组,除了某个元素只出现一次以外,其余每个元素均出现两次,找出只出现一次的元素
	//int arr[] = { 1,2,3,4,5,1,2,3,4,5,7};
	//int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数


	//统计每个元素出现的次数
	//先遍历真个数组
	//找出只出现一次的元素
	//下面的方法---暴力求解 比较繁琐
	//for (i = 0; i < sz; i++)
	//{
	//	// 统计arr[i]在arr数组中出现过几次;
	//	int count = 0;//计数器
	//	int j = 0;
	//	for (j = 0; j < sz; j++)
	//	{
	//		if (arr[i] == arr[j])
	//		{
	//			count++;
	//		}
	//		
	//	}
	//	if (count == 1)
	//		{
	//			printf("只出现一次的元素: %d\n",arr[i]);
	//			break;
	//		}
	//}
//	return 0;
//}

//#include <limits.h>
//int main()
//{
	//交换2个整型变量，不能使用第三个变量
	// 进入企业:会采用第三个变量的方法,代码的可读性高,执行效率高
	//int a = 3;
	//int b = 5;
	//INT_MAX; 2147483647
	//int c = 0;
	//printf("交换前:a = %d b = %d\n", a, b);
	// ^ ->按(二进制)位异或 相同为0 反则为1
	// 	异或的操作:可读性差,执行效率低于其他方法!
	// 不会溢出
	// 没用使用第三个变量
	//a = a ^ b;
	// 011 3 a
	// 101 5 b
	// 110   a
	//b = a ^ b;
	// 110 a
	// 101 b
	// 011 b
	//a = a ^ b;
	// 110 a
	// 011 b
	// 101 a
	//如果a,b的数值过大就会引起
	//溢出的问题
	//int - 4个字节 -32bit位 - 整型最大值
	/*c = a;
	a = b;
	b = c;*/
	//a = a + b;//a -> a+b和  b还是原来的b
	//b = a - b;//b得到原来的a
	//a = a - b;//a得到原来的b
//	printf("交换后:a = %d b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	//打印函数 --->引用头文件<stdio.h>
//	printf("Hello World!\n");
//	return 0;
//}