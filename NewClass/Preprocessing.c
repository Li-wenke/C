#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//预处理
//预定义符号  在预处理阶段被处理的已经定义好的符号  这些符号可以直接拿来使用
//__FILE__ //进行编译的源文件
//__LINE__ //文件当前的行号
//__DATE__ //文件被编译的日期
//__TIME__ //文件被编译的时间
//__STDC__ //如果编译器遵循ANSI C，其值为1，否则未定义

//int main()
//{
//	printf("%s\n", __FILE__);//文件名
//	printf("%d\n", __LINE__);//所在行号
//	printf("%s\n", __DATE__);//日期
//	printf("%s\n", __TIME__);//时间
//	printf("%s\n", __FUNCTION__);//main
//	//printf("%d\n", __STDC__);//不支持
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	FILE* pf = fopen("log.txt", "a+");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "%s %d %s %s %d", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#define 
//#define  -- 标识符
//#define M 1000
//#define reg register //关键字起别名
//#define do_forever for(;;) 
//#define MAX 1000
//#define reg register //为 register这个关键字，创建一个简短的名字
//#define do_forever for(;;) //用更形象的符号来替换一种实现
//#define CASE break;case //在写case语句的时候自动把 break写上。
// 如果定义的 stuff过长，可以分成几行写，除了最后一行外，每行的后面都加一个反斜杠(续行符)。
//#define DEBUG_PRINT printf("file:%s\tline:%d\t \
//							date:%s\ttime:%s\n" ,\
//							__FILE__,__LINE__ , \
//							__DATE__,__TIME__ )


//int main()
//{
//	reg int num = 0;
//	do_forever;
//	int m = M;
//	printf("%d\n", m);
//	return 0;
//}
//#define CASE break;case
//int main()
//{
//	int n = 0;
//	switch (n)
//	{
//	case 1:
//	CASE 2:
//	CASE 3:
//	}
//	return 0;
//}

//定义符号时，不用加;
//#define M 1000
//int main()
//{
//	//int m = M;
//	int a = 10;
//	int b = 0;
//	if (a > 10)
//		b = M;
//	else
//		b = -M;
//	return 0;
//}

//#define 定义宏
// 括号很重要
//#define 机制包括了一个规定，允许把参数替换到文本中，这种实现通常称为宏（macro）或定义宏（define macro）。
//#define name( parament-list ) stuff  name宏的名字 (参数)内容
// 参数列表的左括号必须与name紧邻。

//#define SQUARE(X) X*X
////#define SQUARE(X) (X)*(X)
//#define DOUBLE(x) (x)+(x)
////#define DOUBLE(x) ((x)+(x))
//
//int main()
//{
//	printf("%d\n", SQUARE(3));//9
//	printf("%d\n", SQUARE(3 + 1));//3 + 1 * 3 + 1 
//	printf("%d\n", 3 + 1 * 3 + 1);
//	printf("%d\n", 10 * DOUBLE(4));//44
//	printf("%d\n", 10 * (4)+(4));//44
//	//printf("%d\n", 3 * 3);
//	return 0;
//}

//#define 替换规则
//在程序中扩展#define定义符号和宏时，需要涉及几个步骤。
//1. 在调用宏时，首先对参数进行检查，看看是否包含任何由#define定义的符号。如果是，它们首先被替换。
//2. 替换文本随后被插入到程序中原来文本的位置。对于宏，参数名被他们的值替换。
//3. 最后，再次对结果文件进行扫描，看看它是否包含任何由#define定义的符号。如果是，就重复上述处理过程。
//注意：
//1. 宏参数和#define 定义中可以出现其他#define定义的变量。但是对于宏，不能出现递归。
//2. 当预处理器搜索#define定义的符号的时候，字符串常量的内容并不被搜索。

//#define M 100
//#define MAX(X,Y) ((X>Y)?(X):(Y))
//int main()
//{
//	int max = MAX(101, M);
//	//1.int max = MAX(101, 100);
//	//2.int max = (101,100) ((101>100)?(101):(100));
//	printf("M = %d\n", M);
//	return 0;
//}

//#和##
//#可以把参数插入到字符串中  把一个宏参数变成对应的字符串
//void print(int x)
//{
//	printf("the value of is %d\n", x);
//}

//#define print(x,FORMAT) printf("the value of "#x" is "FORMAT"\n",x);
//int main()
//{
//	//printf("hello world\n");
//	//printf("hello " "world\n");
//	int a = 10;
//	print(a,"%d");
//	printf("the value of ""a"" is %d\n", a);
//	//the value of a is 10
//	int b = 20;
//	print(b,"%d");
//	printf("the value of ""b"" is %d\n", b);
//	//the value of b is 20
//	int c = 30;
//	print(c,"%d");
//	printf("the value of ""c"" is %d\n", c);
//	//the value of c is 30
//	float f = 5.5f;
//	//the value of f is 5.5f
//	print(f, "%f");
//	printf("the value of " "f" " is " "%f" "\n", f);
//	return 0;
//}

//##  可以把位于它两边的符号合成一个符号。 它允许宏定义从分离的文本片段创建标识符
//#define CAT(X,Y) X##Y
//int main()
//{
//	int class171 = 100;
//	printf("%d\n", CAT(class,171));
//	printf("%d\n", class171);//两个符号合成一个符号
//	return 0;
//}


//带副作用的宏参数  副作用就是表达式求值的时候出现的永久性效果
//#define MAX(X,Y) ((X) > (Y) ? X : Y )
//int main()
//{
//	int a = 5;
//	int b = 9;
//	int m = MAX(a++, b++);
//	//  m = ((a++)>(b++)? a++:b++)
//	printf("%d\n", m);
//	return 0;
//}

//宏和函数
// 优点:
//用于调用函数和从函数返回的代码可能比实际执行这个小型计算工作所需要的时间更多。
//所以宏比函数在程序的规模和速度方面更胜一筹
//更为重要的是函数的参数必须声明为特定的类型。所以函数只能在类型合适的表达式上使用。
//反之这个宏怎可以适用于整形、长整型、浮点型等可以用于 > 来比较的类型。宏是类型无关的
//缺点:
//当然和宏相比函数也有劣势的地方：
//1. 每次使用宏的时候，一份宏定义的代码将插入到程序中。除非宏比较短，否则可能大幅度增加程序的长度。
//2. 宏是没法调试的。
//3. 宏由于类型无关，也就不够严谨。
//4. 宏可能会带来运算符优先级的问题，导致程容易出现错
// 
//宏有时候可以做函数做不到的事情。比如：宏的参数可以出现类型，但是函数做不到
// 
//命名约定
//一般来讲函数的宏的使用语法很相似。所以语言本身没法帮我们区分二者。 那我们平时的一个习惯是：
//把宏名全部大写 函数名不要全部大写
//#define MAX(a, b) ((a)>(b)?(a):(b))
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 5;
//	int b = 8;
//	int m = MAX(a, b);
//	//int m = ((a)>(b)?(a):(b));
//	m = Max(a, b);
//	return 0;
//}

//宏有时候可以做函数做不到的事情。比如：宏的参数可以出现类型，但是函数做不到
//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	//malloc(10 * sizeof(int));
//	//malloc(10, int);
//	int* p = MALLOC(10, int);// --> (int*)malloc(10*sizeof(int))
//	return 0;
//}

//#undef
//这条指令用于移除一个宏定义
//#define M 100
//int main()
//{
//	int a = M;
//#undef M
//	printf("%d\n", M);
//	return 0;
//}

//条件编译
//满足条件就编译
//在编译一个程序的时候我们如果要将一条语句（一组语句）编译或者放弃是很方便的。因为我们有条件编译指令

//#define PRINT
//int main()
//{
//#ifdef PRINT
//		printf("hello world\n");
//#endif // PRINT
//	return 0;
//}

//#if 常量表达式
//	//...
//#endif
////常量表达式由预处理器求值。
//如：
//#define __DEBUG__ 1
//#if __DEBUG__
//		//..
//#endif
//2.多个分支的条件编译
//#if 常量表达式
//		//...
//#elif 常量表达式
//		//...
//#else
//		//...
//#endif
//3.判断是否被定义
//#if defined(symbol)
//#ifdef symbol
//#if !defined(symbol)
//#ifndef symbol
//4.嵌套指令
//#if defined(OS_UNIX)
//		#ifdef OPTION1
//			unix_version_option1();
//#endif
//		#ifdef OPTION2
//			unix_version_option2();
//		#endif
//#elif defined(OS_MSDOS)
//			#ifdef OPTION2
//				msdos_version_option2();
//			#endif
//#endif

#if 0

#define PRINT 1
int main()
{
#if PRINT
	printf("hello world\n");
#endif
	return 0;
}
#endif

//int main()
//{
//#if 1==2
//	printf("hehe\n");
//#elif 2==2
//	printf("haha\n");
//#else
//	printf("heihei\n");
//#endif
//	return 0;
//}

//#define TEST 
//#define HEHE
//int main()
//{
//	//如果TEST定义了下面代码参与定义
//	//1
//#ifdef TEST
//	printf("test\n");
//#endif
//	//2
//#if defined(TEST)
//	printf("TEST\n");
//#endif
//	//如果HEHE不定义 下面参与编译
//	//3
//#ifndef HEHE
//	printf("HEHE\n");
//#endif
//	//4
//#if !defined(HEHE)
//	printf("hehe\n");
//#endif
//	return 0;
//}

//文件包含
//库文件包含		<>
//本地文件包含	""	
//""-->先在源文件所在目录下查找，如果该头文件未找到，
//编译器就像查找库函数头文件一样在标准位置查找头文件。 如果找不到就提示编译错误
//	<> 和 "" 包含头文件的本质区别是:查找策略的区别
//嵌套文件包含
//为了解决头文件重复:条件编译
//在每个头文件开头写:
//#ifndef __TEST_H__
//#define __TEST_H__
////头文件的内容
//#endif //__TEST_H__
//或者	#pragma once
//其他预处理指令
//#include  #define #if #endif #ifdef #ifndef  #else #elif #undef #error #pragma #line
//		#pragma	pack()取消对齐数	 #pragma pack(4)改变默认对齐数 #pragma comment()
int main()
{

	return 0;
}