#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//代码1
int main()
{
	int ch = 0;
	//Ctrl + Z
	//EOF - end of file -> -1
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}
//
//代码2
//int main()
//{
//	int ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);
//	return 0;
//}

//循环语句
//while
//int main()
//{
	//while循环
	//while 语法结构
	//while (表达式)
	//循环语句；
	//while (1)
	//{
	//	printf("hello\n");
	//}
	//int i = 1;
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		continue; //continue在while循环中的作用就是：
	//				  //continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，而是直接
	//				  //跳转到while语句的判断部分。进行下一次循环的入口判断
	//	printf("%d\n", i);
	//	i++;
	//}
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		break;--break在while循环中的作用：
	//	其实在循环中只要遇到break，就停止后期的所有的循环，直接终止循环。 所以：while中的
	//	break是用于永久终止循环的。
	//	printf("%d\n", i);
	//	i++;
	//}
//	return 0;
//}

//练习
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}

//int main()
//{
//switch语句也是一种分支语句。 常常用于多分支的情况。
//编程好习惯
//在每个 switch 语句中都放一条default子句是个好习惯，甚至可以在后边再加一个 break
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		if (n == 1)
//			printf("hh\n");
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default://可有可无
//		printf("输入错误\n");
//		break;
//	}

	//switch (day)
	//{
	//case 1:
	//	printf("星期一\n");
	//	break;
	//case 2:
	//	printf("星期二\n");
	//	break;
	//case 3:
	//	printf("星期三\n");
	//	break;
	//case 4:
	//	printf("星期四\n");
	//	break;
	//case 5:
	//	printf("星期五\n");
	//	break;
	//case 6:
	//	printf("星期六\n");
	//	break;
	//case 7:
	//	printf("星期天\n");
	//	break;
	//}
	//if (day == 1)
	//	printf("星期一");
	//else if (day == 2)
	//	printf("星期二");
	//else if (day == 3)
	//	printf("星期三");
	//else if (day == 4)
	//	printf("星期四");
	//...
//	return 0;
//}

//int main()
//{
//	//练习
//	//1. 判断一个数是否为奇数
//	int i = 0;
//	printf("请输入一个数字:\n");
//	scanf("%d", &i);
//	if (i % 2 == 1)
//	{
//		printf("该数字是奇数!\n");
//	}
//	else
//		printf("不是奇数!\n");
//	//2. 输出1 - 100之间的奇数
//	int j = 0;
//	while (j <= 100)
//	{
//		if (j % 2 != 0)
//		{
//			printf("%d是奇数\n", j);
//		}
//		j++;
//	}
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//	//if (num == 5)//= 赋值  == 判断相等
//	//{
//	//	printf("hehe\n");
//	//}
//	return 0;
//}

//int main()
//{
	//分支语句（选择结构）
	//if语句
	//语法结构：
	//	if (表达式)
	//		语句;
	// 
	//if (表达式)
	//	语句1;
	//else
	//	语句2;
	//多分支    
	//if (表达式1)
	//	语句1;
	//else if (表达式2)
	//	语句2;
	//else
	//	语句3;
	//if (表达式)
	//{ 
	//	语句1;
	//}
	//else
	//{
	//	语句2;
	//}
	//int a = 0;
	//int b = 2;
	//if(a == 1)
	//	if (b == 2)
	//	printf("hehe\n");
	//	else//else和它里的最近的位 if匹配
	//	printf("haha\n");

	//int age = 10;
	//if (age < 18)
	//{ 
	//	printf("未成年\n");
	//	printf("不能谈恋爱\n");
	//}
	//else
	//{
	//	if (age >= 18 && age < 28)
	//		printf("青年\n");
	//	else if (age >= 28 && age < 50)
	//		printf("壮年\n");
	//	else if (age >= 50 && age < 90)
	//		printf("老年\n");
	//	else
	//		printf("老不死\n");
	//}
		
	//int age = 20;
	//
	//if (age < 18)
	//	printf("未成年\n");
	//else if (age >= 18 && age < 28)
	//	printf("青年\n");
	//else if (age >= 28 && age < 50)
	//	printf("壮年\n");
	//else if (age >= 50 && age < 90)
	//	printf("老年\n");
	//else
	//	printf("老不死\n");

//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");

//	if (age < 18)
//		printf("未成年\n");
//	return 0;
//}

//C语言是一门 结构化的程序设计语言
//1.顺序结构
//2.选择结构
//3.循环结构
//int main()
//{
//	//C语言中由一个分号 ; 隔开的就是一条语句。
//	int a = 0;
//	;//也是语句-->空语句
//	return 0;
//}