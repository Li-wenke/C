#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//C语言中表示真假
	//真 -- 非0
	//假 -- 0
	//&& -- 逻辑与
	//|| -- 逻辑或
	int a = 0;
	int b = 5;
	//int c = a && b;
	int c = a || b;
	printf("c = %d\n", c);
	return 0;
}

//int main()
//{
//	int a = (int)3.14;//强制类型转换 double -->int
//	return 0;
//}

//int main()
//{
//	int a = 10;
	//int b = a++;//后置++，先赋值，再++
	//int c = ++a;//前置++，先++ 再赋值
	//printf("a = %d b = %d c = %d\n", a, b,c);//a=11 b=10 c= 12
	//int b = a--;//后置--，先赋值，再--
//	int b = --a;//前置--，先-- 再赋值
//	printf("a = %d b = %d \n", a, b);//a = 9(9) b = 10(9)
//	return 0;
//}

//int main()
//{
//	int a = 0;//4个字节
//	int b = ~a;//b是有符号的整型
	 // ~ -- 按(2进制)位取反
	//0000000000000000000000000000000
	//1111111111111111111111111111111--最高位是符号
	//原码，反码，补码
	//原码符号位不变其他位取反得到反码，反码加一等于补码	
	//负数在内存中 存储的时候是二进制的补码
	//1111111111111111111111111111111--补码
	//1111111111111111111111111111110--反码
	//1000000000000000000000000000001--原码
//	printf("%d\n", b);//使用的，打印的是这个数的原码
//	return 0;
//}

// int MAX(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = MAX(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	//求两个数的较大值
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//	{
//		printf("较大值是:%d\n", num1);
//	}
//	else
//	{
//		printf("较大值是:%d\n", num2);
//	}
//	return 0;
//}

//int main()
//{
	//字符串的结束标志:'\0'
	//'\0'--转义字符-0
	//0->数字0
	//'0'-> 48
	//'a','b','c'字母字符'0','1','2','3' 数字字符
//	retrun 0;
//}