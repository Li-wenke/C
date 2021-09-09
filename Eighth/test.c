#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	////刚刚学习了printf，来试着打印一个三角图案吧
	////  *
	//	 * *
	//	*****
	printf("  *\n");
	printf(" * *\n");
	printf("*****\n");
	return 0;
}

//int main()
//{
	//输入一个华氏温度，要求输出摄氏温度。公式为 c=5(F-32)/9，取位2小数。
//	double h,c;
//	printf("输入一个华氏温度:");
//	scanf("%lf", &h);
//	c = 5 * (h - 32) / 9;
//	printf("摄氏温度:%0.2lf\n", c);
//	return 0;
//}

//int main()
//{
		//要将"China"译成密码，译码规律是：用原来字母后面的第4个字母代替原来的字母．
		//例如，字母"A"后面第4个字母是"E"．"E"代替"A"。因此，"China"应译为"Glmre"。
		//请编一程序，用赋初值的方法使cl、c2、c3、c4、c5五个变量的值分别为，
		//’C’、’h’、’i’、’n’、’a’，经过运算，
		//使c1、c2、c3、c4、c5分别变为’G’、’l’、’m’、’r’、’e’，并输出。
//	char ch1, ch2, ch3, ch4, ch5;
//	scanf("%c", &ch1);
//	scanf("%c", &ch2);
//	scanf("%c", &ch3);
//	scanf("%c", &ch4);
//	scanf("%c", &ch5);
//	printf("%c%c%c%c%c", ch1 + 4, ch2 + 4, ch3 + 4, ch4 + 4, ch5 + 4);
//	return 0;
//}

//int main()
//{
//		//**************************
//		//Hello World!
//		//**************************
//		//Hello与World之间有一个空格
//		//* 也是输出的一部分，别光打印Hello World！
//	printf("**************************\n");
//	printf("Hello World!\n");
//	printf("**************************\n");
//	return 0;
//}