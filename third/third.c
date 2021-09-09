#define _CRT_SECURE_NO_WARNINGS 1
// 加在源文件的第一行
// 不用scanf_s


#include <stdio.h>

// 4.枚举常量
// 枚举-- 一一列举
// 
// 
// 性别:男，女，保密
// 三元素:红，黄，蓝
// 周期：1、2、3、4、5、6、7
//
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//
//int main()
//{
//	enum Color color = BLUE;//color是变量
//	color = YELLOW;
//	//BLUE = 6; //不可行
//	return 0;
//}

// 枚举关键字 --- enum
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
// MALE、FEMALE、SECRET --枚举常量	
//int main()
//{
//	/*enum Sex s = MALE;
//	enum Sex m = FEMALE;*/
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}

//3.#define 定义的标识符常量
//#define Max 10
//int main()
//{
//	int arr[Max] = { 0 };
//	printf("%d\n",Max);
//	return 0;
//}

//int main()
//{
//	// int num1 = 0;
//	// int num2 = 0;
//	// int sum = 0;
//	// scanf是C语言提供的
//	// scanf_s不是标准C语言提供的是vs编译器提供的 不具有跨平台性/可移植性
//	// scanf("%d %d", &num1, &num2);
//	// scanf
//	// strcpy
//	// strlen
//	// strcat
//	// .....
//	// 不安全的
//	// strcpy_s
//	// .....
//	// sum = num1 + num2;
//	// printf("sum = %d\n", sum);
//
//	// 常量:生活中不可变的量 -->身份证号、血型
// 1.字面常量
//	// 字面常量:字面上的常量
//	//3;// 字面常量
//	//100;// 字面常量
//	//3.14;//字面常量
// 2.const 修饰的常变量
//	// const -- 常属性
//	// const修饰的常变量
//	//const int num = 4;
//	//printf("%d\n", num);
//	//num = 8;// 不能改变了
//	//printf("%d\n", num);
//	const int n = 10; // n是变量,但是又有常属性,所以n是常变量
//	int arr[n] = { 0 };
//	n = 20;
//	return 0;
//}