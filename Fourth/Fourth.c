#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int arr[10] = { 0 };//10个整型数组的数组
	int sz = 0;
	// 10*sizeof(int) = 40
	printf("%d\n", sizeof(arr));
	// 计算数组的元素个数
	// 个数 = 数组总大小/每个元素的大小
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	int a = 10;
	//sizeof的计算变量/类型所占空间的大小,单位是字节
	printf("%d\n", sizeof(a));//4
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof a);//4
	printf("%d\n", sizeof(int));//4
	return 0;
}

// 单目操作符
// 双目操作符
// 三目操作符
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//双目操作符
//	//c语言中表示真假
//	//0-假
//	//非0-真
//	//int a = 0;
//	int a = -2;
//	int b = -a;
//	int c = -3;//+正号都会sheng'l
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}

// 赋值操作符
// = += -= *= /= &= ^=  |=    >>=   <<=
//int main()
//{
//	int a = 10;
//	a = 20;// =赋值   == 判断相等
//	a = a + 10;
//	a += 10;
//	a -= 10;
//	a = a & 2;
//	a &= 2;
//	return 0;
//}

// 位操作
// & ^ |
//int main()
//{
//	// (2进制)位操作
//	// &按位与 与-->并且 一假则假 
//	// |按位或 或-->或者 一真则真
//	// ^按位异或  异或--> 对应的二进制相同为0 不同则为1
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	// 011
//	// 101
//	// 001 
//	// 111
//	// 110
//	printf("%d\n", c);
//	printf("%d\n", a | b);
//	printf("%d\n", a ^ b);
//	return 0;
//}

// 移位操作符
// >>  <<
//int main()
//{
//	// 移(2进制)位 操作符
//	// << 左移
//	// >> 右移
//	int a = 1;
//	// 整型1占4个字节-32bit位
//	// 	   0000000000000000000000000000001
//	// 01 -->1
//	int  b =  a << 2 ;
//	// b = a + 1;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}

// 算术操作符
// + - * / %               %-->取余数
//int main()
//{
//	int a = 5 % 2;//5除以2的余数取模
//	printf("%d\n", a);
//	return 0;
//}

// 数组 --->一组相同类型元素的集合
//int main()
//{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//int d = 10;
	//int e = 24;
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10}; // 定义一个存放10个整型数字的数组
	//int i = 0;
	//while (i < 10)
	//{
	//	printf("%d\n", arr[i]);
	//	i++;
	//}
	// printf("%d\n", arr[4]);//5   用下标的形式访问元素
	// arr[下标]

	//char ch[20]; // 字符型数组
	//float arr[5]; // 浮点型数组
//	return 0;
//}

// 函数 -->简化代码,代码复用
// printf 也是函数
// scanf  函数 -->属于库函数
//f(x) = 2 * x + 1;
//f(x, y) = x + y;
//int Add(int x, int y) // 自定义函数
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	// sum = num1 + num2;  
//	sum = Add(num1, num2);
//	// sum = a + b;
//	sum = Add(a, b);
//	sum = Add(2, 3);
//	printf("sum = %d\n", sum);
//	return 0;
//}

// 循环语句
//int main()
//{
//	int line = 0;
//	printf("进入学校\n");
//	while (line <= 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("好Offer!");
//	}
//	return 0;
//}

// 选择语句
//int main()
//{
//	int input = 0;
//	printf("进入学校\n");
//	printf("你要好好学习吗?(1/0)\n");
//	scanf("%d", &input);//1/0
//	if (input == 1) {
//		printf("好Offer!\n");
//	}
//	else {
//		printf("回家种地吧!\n");
//	}
//	return 0;
//}

// 注释 
// 代码中有些比较难懂，可以加一下注释文字

///*
//int main()
//{ 
//	// /* .... */ --->C语言注释风格  不能嵌套
//	//  //....   --> C++注释风格
//	/*
//	int a = 10;
//	*/
//	return 0;
//}
//*/