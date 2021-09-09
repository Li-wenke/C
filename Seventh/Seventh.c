#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//结构体
//char int double .....
//人 = 3.14 ?  'w' ?
//名字+身高+身份证号码......
//书 -->复杂对象
//书名+作者+出版社+定价+书号.....
//复杂对象  -->结构体 -->自己创造出来的一种类型

//创造一个结构体类型
#include <string.h>
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};
int main()
{
	//利用结构体类型-创建一个该类型的结构体变量
	struct Book b1 = {"C语言程序设计",55	};
	struct Book* pb = &b1;
	
	strcpy(b1.name,"Java程序设计");//strcpy-string copy-字符串拷贝-库函数-string.h  //= "C++";
	b1.price = 15;//变量可直接赋值
	printf("%s\n", b1.name);

	//利用pb打印我的书名和价格呢?
	//.应用到结构体变量.成员
	//->结构体指针    ->成员


	/*printf("%s\n", pb->name);
	printf("%d\n", pb->price);*/

	/*printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);*/

	/*printf("书名:%s\n", b1.name);
	printf("价格:%d元\n", b1.price);
	b1.name = "C语言";
	b1.price = 15;
	printf("修改后的名字:%s\n", b1.name);
	printf("修改后的价格:%d元\n", b1.price);*/
	return 0;
}

//int main()
//{
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(short*));
	//double d = 3.14;
	//double* pd = &d;//32-4   64-8
	//printf("%d\n", sizeof(pd));//4
	/*
	*pd;
	printf("%lf\n", d);
	printf("%lf\n", *pd);
	*/

	//int a = 10;//向内存申请4个字节的空间
	//int* p = &a;//p是一个变量-->指针变量
	//printf("%p\n", &a);
	//printf("%p\n",p);
	//*p = 2;//*-->解引用操作符/间接访问操作符
	//printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));//4个字节
//	//*pc = 'a';
//	//printf("%c\n", ch);
//	return 0;
//}

//指针
//如何产生地址
// 计算机位数
// 32位 
// 32根地址线/数据线
// 正电和负电之分
// 1		0
// 000000000000000000000000
// 000000000000000000000001
// 000000000000000000000010
// ....
// 011111111111111111111111
// 100000000000000000000000
// 100000000000000000000010
// ...
// 111111111111111111111111
// 64位
// 64根地址线/数据线
//int main()
//{
//	int a = 10;//4个字节 
//	int* p = &a;//取a的地址
//	printf("%p\n",&a);//0033FD68 地址 1100111111110101101000
//	printf("%p\n", p);
//	*p = 20;//*--->解引用操作符
//	printf("%d\n", a);
//
//	//有一种变量是用来存放地址的-->指针变量
//	
//	return 0;
//}

//#define 定义标识符常量
//#define MAX 1000
//#define 可以定义宏-带参数
//函数的方式
// int Max(int x, int y)
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
////宏定义
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);	
//	printf("max = %d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	//max = (a,b) (a>b?a:b);
//	printf("max = %d\n", max);
//	return 0;
//}
//1.static修饰局部变量
//局部变量的生命周期变成长
// 严重性	代码	说明	项目	文件	行	禁止显示状态
// 错误	LNK2001	无法解析的外部符号 _g_val	
//2.static 修饰全局变量 --改变其作用域
//让静态的全局变量只能在自己所在的源文件内部使用
//出了源文件就没法再使用了
// 3.static修饰函数
// 也是改变了函数的作用域--不准确
// static修饰函数改变了函数的连接属性
// 外部链接属性 -> 内部链接属性
//// 声明外部函数
//extern int Add(int，int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("两数之和为:%d\n", sum);
//	return 0;
//}
// 
//int main()
//{
//	//extern --声明外部符号
//	extern int  g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

//void test()
//{
//	static int a = 0;//a是一个静态的局部变量
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int  i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//typedef--类型定义-类型重定义
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}
//int
//float关键字
// 计算机  存储数据
// 寄存器	register
// 高速缓存
// 内存
// 硬盘
// 

//int main()
//{
//	//register int a = 10;//建议把a定义成寄存器变量
//	int a = 10;
//	a = -2;
//	//int 定义的变量是有符号的
//	//signed int;
//	unsigned int num = 1;
	//struct -->结构体关键字
	//union -->联合体/共用体
//	return 0;
//}
//int main()
//{
//	//auto int a = 10;//局部变量前面都会有个auto-->自动变量
//	return 0;
//}

//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
// 只要是整数,内存中存储的都是二进制的补码
// 正数---原码、反码、补码都相同
// 负数:  存的是补码
// 原码					-->反码					-->补码
// 直接按照正负			原码的符号位不变			反码+1
// 写出的二进制序列		其他位按位取反得到
// -2
// 1000000000000000000000000000000010--原码
// 1111111111111111111111111111111101--反码
// 1111111111111111111111111111111110--补码
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];//[]-->下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()-->函数调用操作符
//	return 0;
//}
// & * . ->
//int main()
//{
//	//求两个数的较大值
//	int num1 = 10;
//	int num2 = 20;
//	int MAX = 0;
//
//	//条件操作符--->三目操作符
//	MAX = (num1 > num2 ? num1 : num2)
//	if (num1 > num2)
//	{
//		MAX = num1;
//	}
//	else
//	{
//		MAX = num2;
//	}
//	return 0;
//}