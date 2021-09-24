#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//				单目操作符:
//							!           逻辑反操作
//							-			负值
//							+			正值
//							&			取地址
//							sizeof      操作数的类型长度（以字节为单位）
//							~			对一个数的二进制按位取反
//							--          前置、后置--
//							++			前置、后置++
//							*			间接访问操作符(解引用操作符)
//							(类型)		强制类型转换

//int main()
//{
//	int a = 1;
	//a 二进制数  0--> 00000000000000000000000000000000 
	//				   11111111111111111111111111111111
	//数据在内存中储存的是补码
	//一个整数的二进制表示有3种
	// 	    正整数原码反码补码相同
	//		负数
	//原码   -1-->100000000000000000000000000000001
	//反码	 -1-->111111111111111111111111111111110
	//补码	 -1-->111111111111111111111111111111111
//	printf("%d\n", ~a);//对一个数的二进制按位取反
//	
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);

	//int a = 10;
	//int b = ++a;//前置++  先++ 后赋值 
	//int c = a++;//后置++  先赋值 后++	
	
//	printf("%d\n", c);//10
	//printf("%d\n", b);11
//	printf("%d\n", a);//11
	

//	return 0;
//}

//int main()
//{
//	//强制类型转换
//	int a = (int)3.14;
//
//	printf("%d\n", a);
//	return 0;
//}

//			关系操作符:
//						>
//						>=
//						<
//						<=
//						!=		用于测试“不相等”
//						==		用于测试“相等”

//			逻辑操作符
//						&&     逻辑与
//						|| 逻辑或
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = a || b;
//
//	printf("%d\n", c);
//	/*int a = 3;
//	int b = 5;
//	int c = a && b;
//
//	printf("%d\n", c);*/
//
//	//if (a && b) {
//
//	//}
//
//	return 0;
//}

//			条件操作符(三目操作符):exp1 ? exp2 : exp3
//								exp1成立 exp2计算 整个表达式的结果是:exp2的结果
//								exp1不成立 exp3计算 整个表达式的结果是:exp3的结果
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//	//if (a > b) {
//	//	max = a;
//	//}
//	//else {
//	//	max = b;
//	//}
//	max =  a > b ? a : b; 
//	printf("%d\n", max);
//
//	return 0;
//}

//	逗号表达式:逗号隔开的一串表达式		-->		exp1, exp2, exp3, …expN
//int main()
//{
//	int a = 2;
//	int b = 5;
//	int c = 7;
//			// a = 7   c = 14  b = 17
//	int d = (a = b + 2, c = a + 7, b = c + 3);
//	//逗号表达式,是从左至右依次计算
//	//整个表达式的结果是最后一个表达式的结果
//	printf("%d\n", d);
//
//	return 0;
//}

//			下标引用、函数调用和结构成员
//			[]			()		.		->
//int main()
//{
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("%d\n",	arr[5]);

	//调用函数的时候，函数后面的() 就是函数调用操作符
	//printf("Hello,World!\n");
	//printf("%d\n", 100);

//	return 0;
//}

//常见的关键字: auto  break   case  char  const   continue  default  do   double else  enum 
//				extern float  for   goto  if   int   long  register    return   short  signed
//				sizeof   static struct  switch  typedef union  unsigned   void  volatile  while
//1.C语言提供的,不可自己创建使用
//2.关键字不能做变量名 
//			extern是用来声明外部符号的   register 寄存器关键字	

//int main()
//{
	//int char;
	//{
	//	int a = 10;//自动创建,自动销毁的 --自动变量
	//	//auto 省略掉了
	//	//auto  新的C语言语法中也有其他用法 暂不考虑
	//}
	//大量/频繁被使用的数据,想发在寄存器中,提高效率
	//register int num = 100;//建议num的值存放在寄存器中
//	return 0;
//}

//typedef -->类型重定义
//typedef unsigned int  u_int;
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 200;
//	return 0;
//}

//static - 静态的  本质上是将变量或函数的链接属性改变
//1.static 修饰局部变量 
//2.static 修饰全局变量 使得这个全局变量只能在自己所在的源文件内部可以使用  不能在其他源文件生效
//3.static 修饰函数		使得这个函数只能在自己所在的源文件内部可以使用 不能在其他源文件生效
//static修饰局部变量改变了变量的生命周期，让静态局部变量出了作用域依然存在，到程序结束，生命周期才结束
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}

//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
// 
////extern声明外部符号
//extern int g_val;
//声明函数
//extern int Add(int x,int y);
//int main()
//{
//	//printf("%d\n", g_val);
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//#define 定义常量和宏
//define 是一个预处理指令
//1.define 定义符号

#define MAX 1000

//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//2.define 定义宏
#define ADD(x, y) ((x)+(y))
//int main()
//{
//	printf("%d\n", 4 * ADD(2, 3));
//	return 0;
//}

//			指针	-->	地址

//int main()
//{
//	int a = 10;//a在内存中要分配空间 - 4个字节
//	printf("%p\n", &a);//%p专门用来打印地址的
//
//	int* pa = &a;//pa是用来存放地址的,在C语言中叫是指针变量
//	//* 说明pa是指针变量
//	//int 说明pa执行的对象是int 类型
//	printf("%d\n", *pa);
//
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%p\n", &ch);
//	printf("%c\n", *pc);
//
//	return 0;
//}

//int main()
//{
//	int* pa = &pa;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20;//	* 解引用操作 *pa就是通过pa里面的地址找到a
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(long*));//4
//	printf("%d\n", sizeof(long long*));//4
//	printf("%d\n", sizeof(float*));//4
//	printf("%d\n", sizeof(double*));//4
//	//指针的大小是相同的
//	//指针是用来存放地址的
//	//指针空间需要多大 取决于地址存储需要多大空间
//	return 0;
//}

//		结构体       可以让C语言创建新的类型出来
//		创建一个学生

struct Stu
{
	char name[20];//成员变量
	int age;
	double score;
};

//创建一个书的类型

struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = { "张三",20,89.9 };//结构体的创建和初始化
	printf("%s %d %lf\n", s.name, s.age, s.score);//结构体变量 .成员变量
	struct Stu *ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("3: %s %d %lf", ps->name, ps->age, ps->score); //  结构体指针  -> 成员变量名    

	return 0;
}