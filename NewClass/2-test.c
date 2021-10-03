#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//		printf("%d ", i);
//	}
//	//结果是死循环打印5
//	return 0;
//}

//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}
//int main()
//{
//    printf("%d\n", func(1));//0
//    return 0;
//} 
//F11 - 逐语句
//F10 - 逐过程

//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third"); //没有break ;  最后打印hellothird
//	}
//	return 0;
//}

//写代码将三个整数数按从大到小输出。
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d%d%d", &a, &b, &c);
//	//调整顺序
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	//输出 - 大到小
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//写一个代码打印1 - 100之间所有3的倍数的数字
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if ( 0 == i % 3)
//		{
//			printf("%d\t",i);
//		}
//	}
// //	for (i = 3; i <= 100; i+=3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//给定两个数，求这两个数的最大公约数
//			同时整除		24 18
//			最大公约数不会超过其中的较小值
//			先找出较小值 看能不能整除较大值 不能就递减 直到可以整除较大值 这就是两个数的最大公约数
//			辗转相除法
//			拿较大值去模上较小值取余为0的话 较小值就是最大公约数 否则 将模数去模上余数直到余数为0 模数就为最大公约数
//			被模数 % 模数 = 余数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);//24 18 
//	int max = m > n ? m:n;//三元运算符
//	//假设最大公约数就是m 和 n的较小值
//	//while (1)
//	//{
//	//	if (m % max == 0 && n % max == 0)
//	//	{
//	//		printf("最大公约数是:%d\n", max);
//	//		break;
//	//	}
//	//	max--;
//	//}
//	for (max; max > 0; max--)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("最大公约数就是:%d\n", max);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);//24 18
//	int t = 0;
//
//	while (t=m%n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("最大公约数：%d\n", n);
//
//	//最小公倍数 = m*n/最大公约数;
//	//printf("%d\n", (m * n)/n);
//
//	return 0;
//}

//打印闰年
//1000-2000年之间的

//int main()
//{
//	int i = 0;
//	for (i = 1000; i < 2001; i++)
//	{
//		//判断y是不是闰年
//		//1. 被4整除，不能被100整除是闰年
//		//2. 能被400整除是闰年
//		/*if (i % 4 == 0)
//		{
//			if (i % 100 != 0)
//			{
//				printf("%d年 ", i);
//			}
//		}
//		if (i % 400 == 0)
//		{
//			printf("%d年 ",i);
//		}*/
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//		{
//			printf("%d年  ", i);
//		}
//	}
//	return 0;
//}

//打印素数
//100-200之间的素数
//素数 -> 质数  只能被一和它本身整除

//
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 201; i++)
//	{
//		//判断i是否为素数
//		 //2-i-1之间的数字去试除i
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//
//	}	
//	return 0;
//}

#include <math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//
//	//m = a*b
//	//a和b中一定至少有一个数字是 <= 开平方m的
//	//16 = 2*8 = 4*4
//
//	//sqrt - 是开平方的函数 - math.h
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否为素数
//		//2->i-1之间的数字去试除i,看能不能整除
//		int j = 0;
//		int flag = 1;//假设i就是素数
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//不是素数
//				break;
//			}
//		}
//		//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);//素数
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = 1;
//	int c = 0;
//	c = b;
//	b = a;
//	a = c;
//	printf("%d %d", a, b);
//	return 0;
//}
//
//int main()
//{
//	int c = 3;
//	int b = 6;
//	c = c + b;
//	b = c - b;
//	c = b + b;
//	printf("%d %d", b, c);
//	return 0;
//}

//关机程序
//只要运行起来，电脑就在1分钟内关机，如果输入：我是猪，就取消关机!
//
//shutdown -s -t 60
//shutdown -a
//
#include <string.h>
#include <stdlib.h>
//
//int main()
//{
//	//关机
//	//C语言提供了一个函数：system()- 执行系统命令的
//
//	char input[20] = { 0 };//存放输入的信息
//	system("shutdown -s -t 60");//system - stdlib.h
//
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	//string.h
//	if (strcmp(input, "我是猪") == 0)//两个字符串比较是不能使用==的，应该使用strcmp() string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

int main()
{
	//关机
	//C语言提供了一个函数：system()- 执行系统命令的
	char input[20] = { 0 };//存放输入的信息
	system("shutdown -s -t 60");//system - stdlib.h
	while (1)
	{
		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
		scanf("%s", input);
		//string.h
		if (strcmp(input, "我是猪") == 0)//两个字符串比较是不能使用==的，应该使用strcmp() string compare
		{
			system("shutdown -a");
			break;
		}
	}

	return 0;
}


//goto 语句只能在一个函数范围内跳转，不能跨函数
//
//void test()
//{
//flag:
//	printf("test\h");
//}
//
//int main()
//{
//	goto flag;
//	return 0;
//}

