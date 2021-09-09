#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//输入一个字符，输出由这个字符组成等腰三角形
	//底为5个，高为3个。
	char a;
	scanf("%c", &a);
	printf("%3c\n", a);  //3可以用三个空格代替
	printf("%2c%c%c \n", a, a, a);//2可以用两个空格代替
	printf("%c%c%c%c%c", a, a, a, a, a);
	return 0;
}

//int main()
//{
//	//输入一个双精度浮点数，输出这个浮点数的%f结果、保留5位小数的结果、%e、%g格式的结果
//	double d;
//	scanf("%lf", &d);
//	printf("%f\n", d);
//	printf("%.5lf\n", d);
//	printf("%e\n", d);
//	printf("%g\n", d);
//	return 0;
//}

//int main()
//{
//	//输入一个字符，一个数字，一个单精度浮点数，一个双精度浮点数，按顺序输出它们四个
//	//且数字指定占4个字符宽靠右对齐，单精度浮点数保留2位小数，双精度保留12位小数，占一行输出、空格分隔
//	char c;
//	int i;
//	float f;
//	double b;
//	scanf("%c %d %f %lf", &c, &i, &f, &b);
//	printf("%c %4d %.2f %.12lf", c, i, f, b);
//	return 0;
//}

//int main()
//{
//	//输入一个双精度浮点数，保留12位小数输出
//	double i;
//	scanf("%lf", &i);
//	printf("%.12lf", i);
//	return 0;
//}

//int main()
//{
//	//输入一个单精度浮点数，输出保留三位小数输出
//	float i;
//	scanf("%f", &i);
//	printf("%.3f", i);
//	return 0;
//}

//int main()
//{
//	//依旧是输入三个整数，要求按照占8个字符的宽度，并且靠左对齐输出
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%-8d", a);
//	printf("%-8d", b);
//	printf("%-8d", c);
//	return 0;
//}

//int main()
//{
//	//练习输入输出，这里会输入三个整数，要求只输出第二个数字来
//	int a, b, c;
//	printf("输入三个整数");
//	scanf("%d %d %d", &a, &b, &c);
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
	//针对等额本金还款模式的客户，
	//写一个程序按顺序输入贷款总额（单位为万元）、月利率、贷款总月数，输出第一个月客户还款金额（单位为元，取整数）。
	//等额本金计算公式如下：
	//每月还款金额 = （贷款本金 / 还款总月数） + （本金 - 已归还本金累计额）×每月利率
//	int total;//总额
//	int month;//贷款总月数
//	double interest;//利息
//	int price;//每月还款金额
//	printf("输入贷款总额:");
//	scanf("%d", &total);
//	printf("输入贷款总月数:");
//	scanf("%d", &month);
//	printf("输入贷款月利息:");
//	scanf("%lf", &interest);
//	price = (total * 10000 / month) + (total * 10000) * interest;
//	printf("第一月还款金额:%d", price);
//	return 0;
//}

//int main()
//{
//	//全球通用户月租费50元，话费每分钟0.4元，输入用户当月通话分钟数，输出用户当月话费，小数点后留一位。
//	int i;//通话分钟数
//	printf("输入用户当月通话分钟数:");
//	scanf("%d", &i);
//	printf("当月话费:%.1f", (i * 0.4) + 50);
//	return 0;
//}

//int main()
//{
//	//输入一个长方形的长和宽（整数），输出该长方形的周长C和面积S，要求格式如例
//	int A;//长
//	int B;//宽
//	int C;//周长
//	int S;//面积
//	printf("输入一个长方形的长和宽:");
//	scanf("%d %d", &A, &B);
//	C = (A + B) * 2;
//	S = A * B;
//	printf("C:%d  S:%d\n", C, S);
//	return 0;
//}

//int main()
//{
//	//已知半径r，求一个圆的面积是多大,输出它对应的面积大小，保留两位小数
//	double r;//圆的半径
//	double s;//圆的面积
//	printf("请输入半径:");
//	scanf("%lf", &r);
//	s = (r * r) * 3.14;
//	printf("半径为:%.1lf圆的面积:%.2lf", r,s);
//	return 0;
//}

//int main()
//{
//	//输出任意一个数字的八进制、十进制、十六进制 
//	//八进制和十六进制有前缀
//	int i;
//	printf("输入一个数字:");
//	scanf("%d", &i);
//	printf("%#o\n", i);//有前缀八进制
//	printf("%#d\n", i);
//	printf("%#x\n", i);//有前缀小写十六进制
//	printf("%#X\n", i);//有前缀大写十六进制
//	return 0;
//}