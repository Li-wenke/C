#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//指针的进阶

//字符指针
//int main()
//{
	//char ch = 'w';
	//char* pc = &ch;
	//本质上是把"hello world"这个字符串的首字符的地址存储在ps中
//	char* ps = "hello world";
//	printf("%c\n", *ps);//h
//	printf("%s\n", ps);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char* str3  = "hello bit.";//常量字符串
//	char* str4  = "hello bit.";
//	if (str1 == str2)//数组名是数组首元素的地址 
//		printf("str1 and str2 are same\n");err
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");err
//	return 0;
//}

//指针数组
//本质上是数组 只是存放的是指针也就是地址

//int main()
//{
	//int* arr[3];//存放整型指针的数组
	//int* arr[3];//存放整形指针的数组
	//int a = 10;
	//int b = 20;
	//int c = 30;
	//int* arr[3] = {&a, &b, &c};
	//int i = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	printf("%d ", *(arr[i]));
	//}
	//	int a[5] = { 1,2,3,4,5 };
	//	int b[] = { 2,3,4,5,6 };
	//	int c[] = { 3,4,5,6,7 };
	//
	//	int* arr[3] = {a,b,c};
	//	int i = 0;
	//	for (i = 0; i < 3; i++)
	//	{
	//		int j = 0;
	//		for (j = 0; j < 5; j++)
	//		{
	//			//printf("%d ", *(arr[i] + j));
	//			printf("%d ", arr[i][j]);
	//		}
	//		printf("\n");
	//	}
	//return 0;
//}

//数组指针
//是一种指针 - 是指向数组的指针
// 
//整型指针 - 是指向整形的指针
//字符指着 - 是指向字符的指针
//int *p;

/*int main()
{
	int a = 10;
	int* pa = &a;
	char ch = 'w';
	char* pc = &ch;
	double* d[5];
	double* (*pd)[5] = &d;
	int arr[10] = { 1,2,3,4,5 };
	int(*parr)[10] = &arr;*///取出数组的地址
	//parr 是一个数组指针  存放的是一个数组的地址
	//arr;//数组名是首元素的地址 - arr[0]的地址
//	return 0;
//}

/*int main()
{
	int arr[10] = { 0 };
	int* p1 = arr;
	int (*p2) [10] = &arr;
	printf("%p\n", p1);
	printf("%p\n", p1+1);*///+1会跳过四个字节也就是一个整型
	//指针类型决定了指针＋1到底＋几
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);//+1会跳过一个数组
//	printf("%p\n",arr);//数组名是首元素地址
//	printf("%p\n",&arr);//&数组名是取出整个数组的地址 数组的起始地址跟首元素地址是相同的
//	return 0;
//}


//数组名是数组首元素的地址
//但是有2个例外：
//1. sizeof(数组名) - 数组名表示整个数组，计算的是整个数组大小，单位是字节
//2. &数组名 - 数组名表示整个数组，取出的是整个数组的地址

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*pa) [10]= &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*((*pa) + i));//(*pa)相当于数组名arr
//	}
//	return 0;
//}

//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////pa是一个数组指针
//print2(int(*pa)[5],int r,int c)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ",*(*(pa + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	//int a [5]
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7 } };
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);//arr数组名表示首元素地址
//	return 0;
//}


//一级指针传参

//void print(int* s,int sz)
//{
//	int i = 0;
//	for (i=0; i < sz; i++)
//	{
//		printf("%d ", *(s+i));
//	}
//}
//void test(char* p)
//{
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//p 一级指针
//	print(p,sz);
//	char ch = 'w';
//	char* p1 = &ch;
//	test(&ch);//char*
//	test(p1);
//	return 0;
//}

//二级指针传参

//void test(int** p2)
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa一级指针
//	int** ppa = &pa;//ppa二级指针
//	//把二级指针传承
//	test(ppa);
//	test(&pa);//传一级指针变量的地址
//	int* arr[10] = { 0 };
//	test(arr);
//	printf("%d\n", a);
//	return 0;
//}

//函数指针  --> 指向函数的指针  存放函数地址的指针

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = 'w';
//	char* pc = &ch;
//	
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;//取出数组的地址
	//parr是指向数组的指针 - 存放的是数组的地址

	//函数指针  -- 存放函数地址的指针
	//&函数名   -- 取到的就是函数的地址 
	// 数组名 != &数组名
	// 函数名 == &函数名
	//pf就是一个函数指针变量
//	int (* pf)(int,int) = &Add;
	//printf("%p\n", (&Add));
	//printf("%p\n",(Add));
//	return 0;
//}

//void test(char* str)
//{
//
//}
//int main()
//{
//	void(*pt)(char*) = &test;
//	printf("%p", pt);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
	//pf是一个函数指针变量
	//int(*pf)(int, int) = &Add;
	//int(*pf)(int, int) = Add;// Add === pf
	//int a = pf(3, 5);
	//int a = (*pf)(3, 5);//1
	//int a = pf(3, 5);//2
	//int a = Add(3, 5);//3
	//int ret = *pf(3, 5);//err
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	(*(void(*)())0)();//调用0地址处的函数
	//该函数无参，返回类型是void
	//1.void(*)() - 函数指针类型
	//2.(void(*)())0 - 对0进行强制类型转换，被解释为一个函数的地址
	//3.(*(void(*)())0) - 对0地址进行了解引用操作
	//4.(*(void(*)())0)(); - 调用0地址出的函数
//	return 0;
//}

void (* signal(int, void(*)(int) ) )(int);
//typedef - 对类型进行重定义

typedef void(*pfun_t)(int);//对void(*)(int)的函数指针类型重命名为pfun_t
//typedef unsigned int uint;

pfun_t  signal(int, pfun_t);

//1.signal 和 ()结合，说明signal是函数名
//2.signal函数的第一个参数类型是int 第二个参数类型是void(*)(int)函数指针类型
//	该函数指针，指向一个参数为int，返回类型是void的函数
//3.signal函数的返回类型也是一个函数指针 
// void(*)(int)
//	该函数指针，指向一个参数为int，返回类是void的函数
//signal是一个函数的声明


//函数指针数组	-- 存放函数指针的数组
//整型指针   int*
//整型指针数组 int* arr[10]
//

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	int(*pf1)(int, int) = Add;
//	int(*pf2)(int, int) = Sub; 
//	int(*pfarr[2])(int, int) ={Add,Sub};
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("********************************************************\n");
//	printf("******1.add\t\t2.sub***************************\n");
//	printf("******3.mul\t\t4.div***************************\n");
//	printf("******		0.exit       ***************************\n");
//	printf("********************************************************\n");
//}
//int main()
//{
//	//计算器-计算整型变量的加、减、乘、除
//	//a&b a|b a^b a>>b a<<b a>b
//	int input = 0;
//	int x = 0, y = 0, ret = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				printf("请输入两个操作数:>");
//				scanf("%d %d", &x, &y);
//				ret = Add(x, y);
//				printf("ret = %d", ret);
//				break;
//			case 2:
//				printf("请输入两个操作数:>");
//				scanf("%d %d", &x, &y);
//				ret = Sub(x, y);
//				printf("ret = %d", ret);
//				break;
//			case 3:
//				printf("请输入两个操作数:>");
//				scanf("%d %d", &x, &y);
//				ret = mul(x, y);
//				printf("ret = %d", ret);
//				break;
//			case 4:
//				printf("请输入两个操作数:>");
//				scanf("%d %d", &x, &y);
//				ret = div(x, y);
//				printf("ret = %d", ret);
//				break;
//			case 0:
//				printf("退出程序!\n");
//				return;
//			default:
//				printf("输入有误!请重新输入!\n");
//				break;
//			}
//		
//	} while (input);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("********************************************************\n");
//	printf("******1.add\t\t2.sub***************************\n");
//	printf("******3.mul\t\t4.div***************************\n");
//	printf("******		0.exit       ***************************\n");
//	printf("********************************************************\n");
//}
//int main()
//{
//	//计算器-计算整型变量的加、减、乘、除
//	//a&b a|b a^b a>>b a<<b a>b
//	int input = 0;
//	int x = 0, y = 0, ret = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		//pfarr -- 函数指针数组
//		int(*pfarr[5])(int, int) ={NULL,Add,Sub,Mul,Div};
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = pfarr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("退出程序!\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误!请重新选择!\n");
//		}
//	} while (input);
//	return 0;
//}

//函数指针数组 -- 本质上是数组
//取出函数指针数组的地址
//函数指针数组
//&函数指针数组
//int(*p1)(int, int)  函数指针
//int(*p2[5])(int, int)  函数指针数组
//int(*(*p3)[5])(int, int) = &p2; 函数指针数组的指针
//p3是指向【函数指针数组】的指针变量

//整型数组
//int arr[5]
//int (*p)[5]=&arr   数组指针
//整型指针数组
//int* arr[5]
//int* (*p)[5]=&arr  数组指针
//p是指向【整型指针数组】的指针

//int main()
//{
//	int arr[10];
//	//数组元素类型 -- int
//	//arr数组类型是int [10]
//	return 0;
//}

//回调函数  -- 通过函数指针调用的函数

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("********************************************************\n");
//	printf("******1.add\t\t2.sub***************************\n");
//	printf("******3.mul\t\t4.div***************************\n");
//	printf("******		0.exit       ***************************\n");
//	printf("********************************************************\n");
//}
//int Calc(int (*pf)(int, int))
//{
//	int x = 0, y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}
//int main()
//{
//	//计算器-计算整型变量的加、减、乘、除
//	//a&b a|b a^b a>>b a<<b a>b
//	int input = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			ret = Calc(Add);
//			printf("ret = %d", ret);
//			break;
//		case 2:
//			ret = Calc(Sub);
//			printf("ret = %d", ret);
//			break;
//		case 3:
//			ret = Calc(Mul);
//			printf("ret = %d", ret);
//			break;
//		case 4:
//			ret = Calc(Div);
//			printf("ret = %d", ret);
//			break;
//		case 0:
//			printf("退出程序!\n");
//			return;
//		default:
//			printf("输入有误!请重新输入!\n");
//			break;
//		}
//	} while (input);
//		return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	冒泡排序的趟数
//	for (i = 0; i < sz-1; i++)
//	{
//		一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			交换
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	升序
//	int arr[10] = { 8,3,4,5,1,2,6,7,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	bubble_sort(arr,sz);
//	print(arr, sz);
//	return 0;
//}

//qsort();//快速排序
//整型数据、字符串数据、结构体数据 都能使用qsort排序	

//假设要写一个冒泡排序函数，排序字符串
//bubble_sort_str();
//字符串比较用strcmp

//void qsort(void* base, //base中存放的是待排序数据中第一个对象的地址
//			size_t num, //排序数据元素的个数
//			size_t size,//排序数据中一个元素的大小，单位是字节
//			int (*cmp)(const void* e1, const void* e2)//是用来比较待排序数据中的2个元素的函数
//			);

//qsort ---> 头文件
#include <stdlib.h>
#include <string.h>

//整型数据排序 
//使用qsort

//void print(int arr[], int sz)
//{
//	printf("排序后:\n");
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	//整型数据排序
//	int arr[] = { 8,3,4,5,1,2,6,7,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//排序
//	qsort(arr,sz,sizeof(arr[0]),cmp_int );
//	//打印
//	print(arr, sz);
//}

//结构体数据排序

//struct Stu
//{
//	char name[20];
//	int age;
//};
//int sort_age(const void* e1,const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//void printage(struct Stu* s, int sz)
//{
//	printf("按照年龄排序:\n");
//	int i = 0;
//	for (i = 0; i < sz; i++,s++)
//	{
//		printf("姓名:%-5s 年龄:%d\n", s->name, s->age);
//	}
//}
//int sort_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//} 
//void printname(struct Stu* s, int sz)
//{
//	printf("按照姓名排序:\n");
//	int i = 0;
//	for (i = 0; i < sz; i++, s++)
//	{
//		printf("姓名:%-5s 年龄:%d\n", s->name, s->age);
//	}
//}
//void test2()
//{
//	//使用qsort函数排序结构体数据
//	struct Stu s[] = { {"张三",30} ,{"李四",40},{"王五",20}};
//	int sz = sizeof(s) / sizeof(s[0]);
//	//按照年龄排序
//	qsort(s, sz, sizeof(s[0]), sort_age);
//	printage(s, sz);
//	//按照姓名排序
//	//strcmp比较字符串大小
//	//abcq
//	//adc   比较对应位置上的ASCII码值  
//	qsort(s, sz, sizeof(s[0]), sort_name);
//	printname(s, sz);
//}
//
////升序： 前面一个数据 - 后面一个数据
////降序： 后面一个数据 - 前面一个数据
//
//Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
////模仿qsort实现一个冒泡排序通用算法
//void bubble_sort(void* base,int sz,int width,int (*cmp)(const void* e1,const void* e2))
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//一趟冒泡排序
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两个元素比较
//			//arr[j] arr[j+1]
//			if (cmp((char*)base+j*width,(char *)base+(j+1)*width)>0)
//			{
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//void test3()
//{
//	//整型数据排序
//	int arr[] = { 8,3,4,5,1,2,6,7,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//排序
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	//打印
//	print(arr, sz);
//}
//void test4()
//{
//	//使用qsort函数排序结构体数据
//	struct Stu s[] = { {"张三",30} ,{"李四",40},{"王五",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//按照年龄排序
//	bubble_sort(s, sz, sizeof(s[0]), sort_age);
//	printage(s, sz);
//	//按照姓名排序
//	//strcmp比较字符串大小
//	//abcq
//	//adc   比较对应位置上的ASCII码值  
//	qsort(s, sz, sizeof(s[0]), sort_name);
//	printname(s, sz);
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	test4();
//	return 0;
//}

//sizeof(数组名) - 数组名表示整个数组  计算的是整个数组的大小
//&数组名 - 数组名表示整个数组  取出整个数组的地址
//除此之外，所有的数组名都是数组首元素的地址

//int main()
//{
//	//一维数组
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//整个数组的大小			16
//	printf("%d\n", sizeof(a + 0));//数组下标为0的元素大小 4/8		a + 0 是第一个元素的地址
//	printf("%d\n", sizeof(*a));	  //*a是数组的第一个元素计算的是地址大小	4
//	printf("%d\n", sizeof(a + 1));//a+1是第二个元素的地址计算的是地址大小	4/8
//	printf("%d\n", sizeof(a[1]));//计算的是第二个元素大小  4
//	printf("%d\n", sizeof(&a)); // 4/8  取出数组的地址   地址的大小4/8
//	printf("%d\n", sizeof(*&a));// 16   取出数组的地址再对其解引用操作 
//	//&a  -- int(*p)[4] = &a;
//	printf("%d\n", sizeof(&a + 1));//4/8 取出数组a的地址再+1 取出跳过整个数组之后的下一块空间的起始地址
//	printf("%d\n", sizeof(&a[0]));//4/8 取出第一个元素的地址 计算的是地址的大小
//	printf("%d\n", sizeof(&a[0] + 1));//4/8 取出第一个元素的地址后+1 也就是取出第二个元素的地址 计算的是地址的大小
//	return 0;
//}

//int main()
//{
	//字符数组
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//计算数组的大小 
	//printf("%d\n", sizeof(arr + 0));//4/8
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4/8
	//printf("%d\n", sizeof(&arr + 1));//4/8
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8

	//printf("%d\n", strlen(arr));//随机值
	//printf("%d\n", strlen(arr + 0));//随机值
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr + 1));//随机值-6
	//printf("%d\n", strlen(&arr[0] + 1));//随机值-1

//	char arr[] = "abcdef";//[a b c d e f \0]
//	printf("%d\n", sizeof(arr));//7
//	printf("%d\n", sizeof(arr + 0));//4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr + 1));//4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	printf("%d\n", strlen(*arr));//err
//	printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
	//printf("%d\n", sizeof(p));//4/8
	//printf("%d\n", sizeof(p + 1));//4/8
	//printf("%d\n", sizeof(*p));//1
	//printf("%d\n", sizeof(p[0]));//1
	//printf("%d\n", sizeof(&p));//4/8
	//printf("%d\n", sizeof(&p + 1));//4/8
	//printf("%d\n", sizeof(&p[0] + 1));//4/8

//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//5
//	return 0;
//}

//int main()
//{
	//二维数组
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//48
	//printf("%d\n", sizeof(a[0][0]));//4  a[0][0] - 是第一行第一个元素
	//printf("%d\n", sizeof(a[0]));//16  数组第一行的大小  数组名a[0]单独放在sizeof内部  表示的是整个第一行

//	printf("%d\n", sizeof(a[0] + 1));//4/8 -->? a[0]作为数组名并没有单独放在sizeof内部，也没有取地址 
									 //所以arr[0]表示为第一行第一个元素的地址   arr[0]+1 --> 第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1 )));//4  第一行第二个元素解引用
//	printf("%d\n", sizeof(a + 1));//4/8   第二行的地址
	//a作为二维数组的数组名 没有取地址也没有单独放在sizeof内部  a表示二维数组首元素的地址 即：第一行的地址
//	printf("%d\n", sizeof(*(a + 1)));//16 *(a+1) -- > a[1]  
	//a+1是第二行的地址  *(a+1)表示第二行  计算的是第二行的大小
//	printf("%d\n", sizeof(&a[0] + 1));//4  
	//a[0]是第一行的数组名  &a[0]取出的是第一行的地址 &a[0]+1 跳过一行指向第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
	//a[0]是第一行的数组名 &a[0]取出的是第一行的地址 &a[0]+1 跳过一行指向第二行的地址
	//*(&a[0]+1)对第二行解引用得到第二行 计算的是第二行的大小
//	printf("%d\n", sizeof(*a));//16 a数组名 表示首元素的地址 *a解引用 表示第一行 计算的是第一行的大小
//	printf("%d\n", sizeof(a[3]));//16 a[3]其实是第四行的数组名(如果有)
	//所以其实不存在，也能通过类型计算大小的
//	return 0;
//}

//	sizeof()内部表达式是不计算的!
//1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
//2. & 数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
//3. 除此之外所有的数组名都表示首元素的地址。

//int main()
//{
//	short s = 6;
//	int a = 5;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);//&a取出数组a的地址 &a+1跳过这个数组 强制类型转换成int* 
//    printf("%d,%d", *(a + 1), *(ptr - 1));//*(a+1)  a+1表示第二个元素的地址 *(a+1)访问第二个元素
	//*(ptr-1) ptr表示这个数组末尾后的地址 ptr-1 表示数组最后一个元素的地址 *(ptr-1)访问数组最后一个元素
//    return 0;
//}

//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
//假设p 的值为0x100000。 如下表达式的值分别为多少？
//已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x100000+1   0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100000+4   0x100004
//	return 0;
//}
//指针类型决定了指针的运算！

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);//
//	int* ptr2 = (int*)((int)a + 1);//
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式   1,3,5
//	int* p;
//	p = a[0];//第一行赋值给p变量
//	printf("%d", p[0]);//打印的是第一行第一个元素
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];//数组指针 
//	p = a;//首元素地址
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	//				  *(*(p+4)+2)  -4以地址的形式打印出来             -4
	//地址相减表示中间的元素个数 因为是低地址-高地址 所以结果是复数
	//10000000 00000000 00000000 00000100
	//11111111 11111111 11111111 11111011
	//11111111 11111111 11111111 11111100
	//	FF		FF		  FF		FC
	//FFFFFFFC
//	return 0;
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10 5
//	return 0;
//} 

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;//a表示数组首元素的地址 
//	pa++;//跳过char*a[0] 指向char*a[1]
//	printf("%s\n", *pa);//at
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	//"FIRST","POINT","NEW","ENTER"
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *-- * ++cpp + 3);//ER  
//	printf("%s\n", *cpp[-2] + 3);//cpp[-2]--> *(cpp+(-2)) -->*(*(cpp-2)) + 3  ST
//	printf("%s\n", cpp[-1][-1] + 1);//*(*(cpp-1)-1)+1		EW
//	return 0;
//}