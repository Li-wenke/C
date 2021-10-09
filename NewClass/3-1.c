#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//函数 1.库函数 2.自定义函数
//库函数
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);//打印arr1这个字符串 %s - 以字符串的格式打印
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "hello world";
//	memset(arr1, 'x', 5);
//	printf("%s", arr1);
//	return 0;
//}

//2.自定义函数
//	ret_type fun_name(para1,*  )
//	{
//		statement;//语句项
//	}
//ret_type 函数返回类型
//fun_name 函数名
//para1    函数参数

//自定义函数的声明
//int  get_max(int x, int y)
//{
//	return (x > y) ? x : y;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 30;
//	//函数的调用
//	int max = get_max(a,b);
//	printf("%d", max);
//	return 0;
//}

//函数返回类型的地方写出:void 表示这个函数不返回任何值,也不需要返回
//void Swap(int x, int y)
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//写一个函数 - 交换2个整型变量的值
//	 
//	//出错	没有交换  值是传过去了 但是内存地址却不一样
//	printf("前:a = %d b = %d\n", a, b);
//	Swap(a, b);
//	printf("后:a = %d b = %d\n", a, b);
//
//
//	return 0;
//}

//void Swap(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int* pa = &a;//pa是一个指针变量
//	//*pa = 20;
//	//printf("%d", a);
//
//
//	printf("前:a = %d b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("后:a = %d b = %d\n", a, b);
//	return 0;
//}

// 写一个函数可以判断一个数是不是素数
//int is_prime(int n)
//{
//	2-n-1 之间数字去试除n
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
#include <math.h>
//int is_prime(int n)
//{
//	// 
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if ( 0 == n % j )
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	//100-200之间的素数
//	int i = 0;
//	for (i = 100; i < 201; i++)
//	{
//		//判断i是否为素数
//		if (1 == is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//is_leap_year
//如果判断是闰年返回1
//不是闰年，返回0
//1.
//int is_leap_year(int n)
//{
//	if (( 0 == n % 4  && 0 != n % 100 ) || ( 0 == n % 400))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
// 2.
//int is_leap_year(int n)
//{
//	if (0 == n % 4 && 0 != n % 100)
//	{
//		return 1;
//	}
//	else if (0 == n % 400)
//	{
//		return 1;
//	}
//	else
//	{ 
//		return 0;
//	}
//}
//int is_leap_year(int n)
//{
//	return ((0 == n % 4) && (0 != n % 100) || (0 == n % 400));
//}
//int main()
//{
//	//闰年
//	int y = 0;
//	for (y = 1000; y < 2001; y++)
//	{
//		if (1 == is_leap_year(y))
//		{
//			printf("%d ", y);
//		}
//	}
//
//	return 0;
//}

//	binary_search(int* a,int x)
//int binary_search(int acc[],int x,int y)
//{
//	int left = 0;
//	int right = y - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (acc[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else if (acc[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//		return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,13,15,16,17,19,20,22 };
//	int k = 13;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了就返回找到位置的下标
//	//找不到就返回-1  0->是第一个元素的下标
//	//数组arr传参实际上传递的不是数组本身
//	//只是传过去了数组首元素的地址
//	int ret = binary_search(arr,k,sz);
//	if (-1 == ret)
//	{
//		printf("找不到");
//	}
//	else
//	{ 
//		printf("找到了,元素下标为:%d ", ret); 
//	}
//
//	return 0;
//}

//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	//每调用一次函数  num+1
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	Add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}

// 函数内部想改变外部变量用传址


// 函数的嵌套和链式访问
// 函数不能嵌套定义
//void test3()
//{
//	printf("hehe\n");
//}
//
//int test2()
//{
//	test3();
//	return 0;
//}
//
//int main()
//{
//	test2();
//	return 0;
//}
//链式访问
//把一个函数的返回值作为另外一个函数的参数。
#include <string.h>
//int main()
//{
//	//int len =  strlen("abc");
//	//printf("%d\n", len);
//
//	////链式访问   把strlen("abc")函数的返回值作为printf的参数
//	//printf("%d\n", strlen("abc"));
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);
//	printf("%s\n", strcpy(arr1, arr2));
//	//printf("%s\n", arr1);
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}
//函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//	return 0;
//}
//
//函数声明：
//1. 告诉编译器有一个函数叫什么，参数是什么，返回类型是什么。但是具体是不是存在，无关
//紧要。
//2. 函数的声明一般出现在函数的使用之前。要满足先声明后使用。
//3. 函数的声明一般要放在头文件中的。
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//函数声明一下 - 告知
//	int Add(int x, int y);
//
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//	return 0;
//}
////函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}
//“Add”未定义；假设外部返回 int

//E

//#include "add.h"
//#include "sub.h"
////
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int c = Add(a, b);
//
//	int c = Sub(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}

//函数递归  -->函数自己调用自己    递归的主要思考方式在于：把大事化小

//int main()
//{
//	printf("Hello\n");
//	main();
//
//	return 0;
//}

//递归的两个必要条件
//存在限制条件，当满足这个限制条件的时候，递归便不再继续。
//每次递归调用之后越来越接近这个限制条件

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
////接受一个整型值（无符号），按照顺序打印它的每一位。 例如： 输入：1234，输出 1 2 3 4
//int main()
//{
//	unsigned int  num = 0;
//	scanf("%u", &num);//1234
//	//函数递归  -->函数自己调用自己
//	print(num);//print函数可以打印参数部分数字的每一位
//	//printf("%u", num);
//
//	return 0;
//}

//void test(int  n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//	printf("%d\n", n);
//}
//
//int main()
//{
//	test(1);
//
//	return 0;
//}

//写递归
//1.不能死递归,都有跳出条件,每次递归逼近跳出条件
//2.递归层次不能太深


//编写函数不允许创建临时变量，求字符串的长度。

//普通函数 这里需要用递归函数
//int my_strlen(char* str)
//{
//	int count = 0;//临时变量   题目要求是不可以创建临时变量
//	while ('\0' != *str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	if ('\0' != *str)
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char ch[] = "bit";
//	//['b'] ['i'] ['t'] ['\0']
//
//	//模拟实现strlen函数
//	printf("%d\n", my_strlen(ch));//3
//
//	return 0;
//}

//递归与迭代
//求n的阶乘。（不考虑溢出）
//n<=1   n的阶乘就是1
//n>1    n的阶乘就是 n * (n-1)
//

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	//迭代
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d", ret);
//
//	return 0;
//}
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//
//	printf("%d", ret);
//
//	return 0;
//}

//有些功能:可以使用迭代的方式实现 也可以使用递归

//求第n个斐波那契数。（不考虑溢出）
// 1 1 2 3 5 8 13 21 34  55  89 .....
// n <= 2    1
// n > 2   (n-1)+(n-2)
//前两个数之和等于第3个数

//int count = 0;
//int Fib(int  n)
//{
//	//统计第3个斐波那契数的计算次数
//	if (3 == n)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("%d", count);
//
//	return 0;
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2);
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//
//	printf("%d", ret);
//}


//青蛙跳台阶  n层台阶有几种跳法
//1 | 2  -->跳法
//1层台阶  1		[1]
//2层台阶  2   [1,1]  [2]
//3层台阶  3   [1,1,1] [1,2] [2,1]
//4层台阶  5  [1,1,1,1] [1,1,2] [1,2,1] [2,2] [2,1,1]    
//5层台阶  8  [1, 1, 1, 1, 1], [1, 1, 1, 2], [1, 1, 2, 1], [1, 2, 1, 1], [2, 1, 1, 1], [2, 2, 1], [2, 1, 2], [1, 2, 2]
// ....
//斐波那契数列

//int jump(int n)
//{
//	if (0 == n)
//		return 0;
//	if (1 == n)
//		return 1;
//	if (2 == n)
//		return 2;
//
//	return jump(n - 1) + jump(n - 2);
//}
// 
//int jump(int n)
//{
//	if (0 == n)
//		return 0;
//	if (1 == n)
//		return 1;
//	if (2 == n)
//		return 2;
//
//	int a = 2;
//	int b = 3;
//	int c = 0;
//	while (n > 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;//定义青蛙跳n台阶
//	scanf("%d", &n);
//	int ret = jump(n);
//	printf("%d", ret);
//
//	return 0;
//}

