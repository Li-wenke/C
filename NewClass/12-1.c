#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//动态内存管理
// 
//之前学过的知识，在内存上开辟空间都是有限制的
//1. 空间开辟大小是固定的。
//2. 数组在申明的时候，必须指定数组的长度，它所需要的内存在编译时分配
//有时候开辟空间大了，有时候开辟空间小了  所以需要一个可以改变开辟后的空间大小的手段  -->动态内存分配
//动态内存开辟
//内存分为 栈区、堆区、静态区(数据段)
//栈区   --> 局部变量、函数形参    开辟空间有限
//堆区   --> 动态内存开辟 开辟函数 --> malloc  free  realloc  calloc  
//静态区 --> 全局变量 静态变量

//动态内存开辟
//malloc --> 头文件  stdlib.h
//void* malloc (size_t size);
//1. 如果开辟成功，则返回一个指向开辟好空间的指针。
//2. 如果开辟失败，则返回一个NULL指针，因此malloc的返回值一定要做检查。
//3. 返回值的类型是 void* ，所以malloc函数并不知道开辟空间的类型，具体在使用的时候使用者自己来决定。
//4. 如果参数 size 为0，malloc的行为是标准是未定义的，取决于编译器
//free 动态内存的释放和回收的
//void free(void* ptr);
//1. 如果参数 ptr 指向的空间不是动态开辟的，那free函数的行为是未定义的。
//2. 如果参数 ptr 是NULL指针，则函数什么事都不做。
#include <stdlib.h>
//int main()
//{
//	//开辟10个整型的空间 -- 10 * sizeof(int)
//	//int arr[10];//存放到栈区
//	//动态内存开辟
//	int* p = (int*)malloc(1000000000000000 * sizeof(int));//malloc默认返回值是void*
//	//使用这些空间的时候
//	if (p == NULL)
//	{
//		perror("malloc开辟空间失败");
//		return;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i+1;
//		printf("%d ", *(p + i));//p[i] == *( p + i);
//	}
//	//使用完后回收空间
//	free(p);
//	p = NULL;//自己手动置为NULL
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);//err 错误的
//	return 0;
//}

// malloc 和 free 要成对出现

//calloc  -- 动态内存分配
//void* calloc(size_t num, size_t size);
//1. 函数的功能是为 num 个大小为 size 的元素开辟一块空间，并且把空间的每个字节初始化为0。
//2. 与函数 malloc 的区别只在于 calloc 会在返回地址之前把申请的空间的每个字节初始化为全0
//calloc和malloc区别:
//1. 参数不同
//2. calloc会初始化数据而malloc不会

//int main()
//{
//	//int*p = (int*)malloc(40);
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));//p[i] == *(p+i);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc  -- 动态内存管理	realloc单独使用时也能实现malloc的效果
//void* realloc (void* ptr, size_t size);
//1.realloc函数的出现让动态内存管理更加灵活。
//2.有时会我们发现过去申请的空间太小了，有时候我们又会觉得申请的空间过大了，那为了合理的时候内存，
//  我们一定会对内存的大小做灵活的调整。那 realloc 函数就可以做到对动态开辟内存大小的调整

//realloc在调整内存空间的是存在两种情况：
//情况1：原有空间之后有足够大的空间
//情况2：原有空间之后没有足够大的空间
//当是情况1 的时候，要扩展内存就直接原有内存之后直接追加空间，原来空间的数据不发生变化
//当是情况2 的时候，原有空间之后没有足够多的空间时，
//扩展的方法是：在堆空间上另找一个合适大小的连续空间来使用。这样函数返回的是一个新的内存地址

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 5;
//	}
//	//需要p指向的空间更大,需要20int的空间
//	//realloc调整空间
//	int* pc = (int*)realloc(p, 20 * sizeof(int));
//	if (pc != NULL)
//	{
//		p = pc;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 5;
//	}
//	free(p);
//	pc = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)realloc(NULL, 40);//这里功能类似malloc 开辟40个字节的空间
//	return 0;
//}

//动态内存开辟常见错误
//1. 对NULL指针的解引用操作
//2. 对动态开辟空间的越界访问
//3. 对非动态开辟内存使用free释放
//4. 使用free释放一块动态开辟内存的一部分
//5. 对同一块动态内存多次释放
//6. 动态开辟内存忘记释放(内存泄漏)
//忘记释放不再使用的动态开辟的空间会造成内存泄漏。 切记： 动态开辟的空间一定要释放，并且正确释放

//1. 对NULL指针的解引用操作
//int main()
//{
//	int* p = (int*)malloc(10000000000000000000);
//	//对malloc函数的返回值要做判空处理
//	//正常情况下是要判断一下
//	//if (p == NULL)
//	//{
//	//	perror("malloc");
//	//	return;
//	//}
//	int  i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}

//2. 对动态开辟空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));//40个字节 10个整型
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 40; i++)
//	{
//		*(p + i) = i;//存在越界访问
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3. 对非动态开辟内存使用free释放
//int main()
//{
//	int arr[10] = { 0 };//存放在栈区上
//	int* p = &arr;
//	int* pc = (int*)malloc(10 * sizeof(int));
//	//使用
//	if (pc == NULL)
//	{
//		peeror("malloc");
//		return;
//	}
//	free(p);//指针搞混淆了
//	p = NULL;
//	return 0;
//}

//4. 使用free释放一块动态开辟内存的一部分
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;
//	}
//	free(p); //p不再指向动态内存的起始位置
//	p=NULL:
//	return 0;
//}

//5. 对同一块动态内存多次释放
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	//使用
//	//释放
//	free(p);
//	p = NULL;//置为空就不会出现对同一块动态内存多次释放
//	free(p);//重复释放
//	return 0;
//}

//6. 动态开辟内存忘记释放(内存泄漏)  
//	动态开辟的空间回收方式  1.主动free  2.程序结束
//void test()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return;
//	}
//	//使用
//}
//int main()
//{
//	test();
//	//接下来的程序代码
//	return 0;
//}
#include <string.h>
//  str传参时是值传递 所以GerMemory函数形参是str的临时拷贝
//	在GetMemory函数中动态开辟内存的地址 是赋给p变量  不会影响外部的str
//	所以当GetMemory函数返回之后str依然是NULL。所以strcpy会失败 
//  当GetMemory函数返回之后，形参p会销毁,导致动态开辟的100字节空间存在内存泄漏无法释放
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);//内存泄漏
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//修改
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	if(p==NULL)
//	{
//		return;
//	}
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//char* GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//	if (*p == NULL)
//	{
//		return;
//	}
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//  GetMemory函数内部创建数组是在栈区上开辟的 
//	出了函数p数组的空间就还给了操作系统 返回的地址是没有实际意义的
//	如果通过返回的地址去访问内存就是非法访问内存
//	返回栈空间地址的问题
//char* GetMemory(void)
//{
//	char p[] = "hello world";//局部变量出了函数就自动销毁了
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//	没有free释放内存 /*free(str);str = NULL;*/
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//	free已经释放过内存了,而且没有置为空,后面还对这个指针操作
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	//str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}

//	柔性数组
//C99 中，结构中的最后一个元素允许是未知大小的数组，这就叫做『柔性数组』成员。

//struct S
//{
//	int n;
//	int arr[];//大小是未知的
//	//arr是柔性数组
//};
//struct N
//{
//	int n;
//	int arr[0];//大小是未知的
//	//arr是柔性数组
//};

//柔性数组的特点：
//结构中的柔性数组成员前面必须至少一个其他成员。
//sizeof 返回的这种结构大小不包括柔性数组的内存。
//包含柔性数组成员的结构用malloc()函数进行内存的动态分配，
//并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小

//struct N
//{
//	int n;
//	int arr[0];//大小是未知的
//	//arr是柔性数组
//};
//int main()
//{
//	//struct N s = { 0 };
//	//printf("%d\n", sizeof(s));//? sizeof 返回的这种结构大小不包括柔性数组的大小
//	//期望arr的大小是10个整型
//	struct N* p = (struct N*)malloc(sizeof(struct N) + 10 * sizeof(int));
//	if (p == NULL)
//	{
//		return;
//	}
//	//使用
//	p->n = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i + 1;
//	}
//	//增容
//	struct N* str = (struct N*)realloc(p, sizeof(struct N) + 20 * sizeof(int));
//	if (str != NULL)
//	{
//		p = str;
//	}
//	//使用
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}

//自己用来测试字符数组
//struct S
//{
//	int n;
//	char arr[0];//大小是未知的
//	//arr是柔性数组
//}s;
//int main()
//{
//	struct S* p = (struct S*)malloc(sizeof(struct S) + 20 * sizeof(char));
//	if (p == NULL)
//	{
//		return;
//	}
//	//使用
//	p->n = 10;
//	scanf("%s", p->arr);
//	printf("%s", p->arr);
//	free(p);
//	p = NULL;
//	return 0;
//}

//柔性数组
//第一个好处是：方便内存释放
//第二个好处是：这样有利于访问速度

struct S
{
	int i;
	int* arr;
};
int main()
{
	struct S* p = (struct S*)malloc(sizeof(struct S));
	if (p == NULL)
	{
		perror("malloc");
		return;
	}
	p->i=10;
	//
	p->arr = (int*)malloc(10 * sizeof(int));
	if (p->arr == NULL )
	{
		return;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p->arr + i) = i + 1;
	}
	//增容
	int* pc = (int*)realloc(p->arr, 20 * sizeof(int));
	if (pc != NULL)
	{
		p->arr = pc;
	}
	free(p->arr);
	p->arr = NULL;
	free(p);
	p = NULL;
	return 0;
}