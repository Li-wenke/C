#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//写代码
//1.写出主函数(main函数)
//100-500 行代码
//如何执行呢? -C语言是从主函数的第一行开始执行的
//所以C语言代码得有main函数--入口
//main函数有且只有一个

//写个代码,在屏幕上打印:Hello World!
//printf	--库函数 -->在屏幕上打印信息的
//printf	的使用,也得打招呼(引用头文件stdio.h)

//include 
//#include <stdio.h>
//int main()
//{
//	printf("Hello World!\n");
//	return 0;
//}

//数据类型
//计算机语言  - 写程序 -解决生活问题
//必须有能力来描述生活中的问题
//购物商城 - 上架商品,  价格 - 15.6 -小数  1.56 * 10^1
//年龄 - 5岁
//C语言 - 浮点数
//		- 整型
//

//a
//'a' -字符a
//数据类型
//int main()
//{
//	//字符类型
//	char ch = 'a';
//	//整型
//	int age = 20;
//	//短整型
//	short num = 10;
//	//长整型 long
//	//长长整型 long long
//
//	//单精度浮点型
//	float price = 55.5;
//	//双精度浮点型
//	double rice = 78.977;
//	return 0;
//}
//为什么会有这么多类型
//为了空间利用率更高
//这些类型的大小

//int main()
//{
//	//printf("Hello,World!\n");
//	//printf("Hello,C!\n");
//	//printf("%d\n", 100);	//打印整数100 -%d
//	//sizeof -关键字 -操作符 -计算类型或者变量所占空间的大小  sizeof的单位是什么 --字节
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4    C标准: sizeof(long)>=sizeof(int)
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	//计算机中的单位
//	//bit -比特位           1bit位用来存放1个二进制位            计算机识别二进制 0|1 
//	//byte -字节 =8bit  1kb-1024byte   1mb-1024kb  1g-1024mb 1tb-1024gb
//	return 0;
//}

//变量和常量
//生活中有些数据:
//有些数据不能变:血型、性别、圆周率等
//有些可变:工资、年龄、体重

//C语言怎么描述:
//常量:-不能变的量
//变量:可以改变的量;	
//变量:全局变量和局部变量

//int main()
//{
//	//创建的一个变量
//	//类型  变量名 = 0;//推荐
//	//类型  变量名;//不推荐
//
//	//年龄变量
//	//体重变量
//	int age = 20;
//	double weight = 51.45;
//	weight -= 5;
//	age++;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//}
//
//%d ->整型
//%lf->double
//%f->float

//全局变量-->大括号外部定义{}
//int a = 100;

//int main()
//{
//	//局部变量-->大括号内部定义{}
//	//当局部变量和全局变量名字冲突的情况下,局部优先
//	//不建议把全局变量和局部变量的名字写成一样的
//	int a = 10;
//
//	printf("%d\n", a);//10
//	return 0;
//}

//写个代码来求两个数的和
//scanf()--->输入函数
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("%d\n", sum);
	return 0;
}