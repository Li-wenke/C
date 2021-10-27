#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//结构体
//- 结构体类型的声明
//- 结构体初始化
//- 结构体成员访问
//- 结构体传参
//结构体类型的声明
//结构的基础知识
//结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量。
	
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
////类型
//struct Stu
//{
//	//结构的成员变量
//	struct B sb;
//	char name[20];//名字
//	int age;//年龄
//	char id[20];//学号
//}s1,s2;//s1和s2也是结构体的变量
//s1,s2是全局变量

//int main()
//{
	//s是局部变量
//	struct Stu s = { {'W','20','3.14'},"张三",20,"20210430" };//创建对象
	//. -> 访问成员符号
	//printf("%c\n", s.sb.c);
	//printf("%s\n", s.id);
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//	return 0;
//}

//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//类型
//struct Stu
//{
//	//结构的成员变量
//	struct B sb;
//	char name[20];//名字
//	int age;//年龄
//	char id[20];//学号
//};
//void print1(struct Stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//void print2(struct Stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//int main()
//{
//	//s是局部变量
//	struct Stu s = { {'W',20,3.14},"张三",20,"20210430" };//创建对象
//	//写一个函数打印s的内容
//	print1(s);//传值调用
//	print2(&s);//传址调用
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = Add(a, b);
//	return 0;
//}


//	调试

//void test()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		test();
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//调用堆栈

//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//3
//	//1! + 2! + 3!
//	// 1   2   6 = 9
//	//1*2*..*n
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;0
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//0-9
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//代码越界了
//	//代码运行的结果是什么？
//	//死循环打印
//	return 0;
//}

//预防发生错误
//通过编码的技巧，减少错误

//模拟实现strcpy
//strcpy - 字符串拷贝
#include <string.h>

//写的不好
//void my_strcpy(char* dest,char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//
//	//strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//模拟实现strcpy
//strcpy - 字符串拷贝
#include <assert.h>

//src 不能等于空指针
//把src指向的内容拷贝放进dest指向的空间中
//从本质上,希望dest指向的内容被修改,src指向的内容不被修改
// 
//
//char* my_strcpy(char* dest, const char* src)//const也可防止写反
//{
//	assert(src != NULL);//断言
//	assert(dest != NULL);//断言
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;//hello拷贝
//	}
	//return dest;//err
//	return ret;//返回目标空间的起始地址
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[] = "hello";
	//my_strcpy(arr1, arr2);//1.目标空间的起始地址,2.源空间的起始地址

	//strcpy(arr1,arr2);//1.目标空间的起始地址,2.源空间的起始地址
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问
//	return 0;
//}

//int main()
//{
//	1.
//	int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf("%d\n", num);
//
//	2.
//	const修饰变量,这个变量被称为常变量，不能被修改，但本质上还是变量
//	
//	const int num = 10;
//	num=20;//err
//	 int* const p = &num;
//	int n = 100;
//	int* p = &num;
//	const修饰指针变量的时候
//	const如果放在*右边修饰的是*p,表示指针变量不能被改变
//	 	   但是指针指向的内容,可以被改变
//	*p = 20;
//	p = &n;//err
//
//	const int num = 10;
//	num=20;//err
//	const int* p = &num;
//	int n = 100;
//	int* p = &num;
//	const修饰指针变量的时候
//	const如果放在*左边修饰的是*p,表示指针指向的内容，是不能通过指针来改变的
//	 	   但是指针变量本身是可以修改的
//	*p = 20;
//	p = &n;
//
//	printf("%d\n", num);
//	return 0;
//}

//strlen 是求字符串长度 数到\0
//my_strlen
//1.const
//2.assert
#include <assert.h>
//int my_strlen(const char* arr)
//{
//	assert(arr);
//	int count = 0;
//	while (*arr++)
//	{
//		count++;
//	}
//	return count;
//}
// size_t unsigned int
//size_t mystrlen(const char* arr)
//{
//	assert(arr);
//	size_t count = 0;
//	while (*arr++)
//	{
//		count++;
//	}
//	return count;
//}
//声明外部符号
extern size_t my_strlen(const char* str);
int main()
{
	char arr[] = "hello world";
	int sz = my_strlen(arr);
	printf("字符串长度为:%d\n",sz);
	return 0;
}
//要不这个符号就不存在
//要不符号写错了
//无法解析的外部符号 _my_strlen，函数 _main 中引用了该符号
