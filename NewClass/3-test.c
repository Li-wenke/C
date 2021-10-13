#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//void test(int arr[])
//{
//	arr[0] = 1;
//	arr[1] = 2;
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//
//	return 0;
//}

//void test(int*p1, int *p2)
//{
//	*p1 = 1;
//	*p2 = 2;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//
//	return 0;
//}
//int a;
//int b;
//
//void test()
//{
//	a = 1;
//	b = 2;
//}
//
//
//int a = 0;
//int b = 0;
//
//int main()
//{
//	test();
//	//
//	return 0;
//}

//			函数可以嵌套调用但绝不能嵌套定义
//			函数的定义可以放在函数的使用
//			逗号表达式
//			exec( (vl，v2)，(v3，v4)，v5，v6 );


//void test()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);//err
//}
//
//
//int main()
//{
//	return 0;
//}

//实现一个函数判断一个数是不是素数
#include <math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if ( 0 == n % j)
//		{
//			return 0;
//		}
//	}
//	return n;
//
//}
//
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = is_prime(i);
//
//	if (ret == 0)
//	{
//		printf("%d不是素数\n", i);
//	}
//	else
//		printf("%d是素数", ret);
//	
//
//	return 0;
//}

//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (0 == n % j)
//		{
//			return 0;
//		}
//		return 1;
//	}
//}
//
//int main()
//{
//	int i = 100;
//	for (i = 100; i <= 200; i++)
//	{
//		if (1 == is_prime(i))
//		{
//			printf("%2d是素数 ", i);
//		}
//	}
//	return 0;
//}

//void temp(int *x, int* y)
//{
//	int tem = 0;
//	tem = *x;
//	*x = *y;
//	*y = tem;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	temp(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//循环做9*9乘法表 
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i ; j++)
//		{
//			printf("%d * %d = %-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//用函数形式
//
//void table(int x)
//{
//		 int n = 0;
//		 for (n = 1; n <= x; n++)
//		 {
//			 int m = 0;
//			 for (m = 1; m <= n; m++)
//			 {
//				 printf("%d * %d = %-2d ", n, m, n * m);
//			 }
//			 printf("\n");
//		 }
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	table(i);
//
//	return 0;
//}


//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
#include <stdio.h>

//
//void print_table(int n)
//{
//	int i = 0;
//	//行
//	for (i = 1; i <= n; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//9
//	//函数
//	print_table(n);
//	//函数的起名是非常关键，名字最好能提现函数的功能
//
//	return 0;
//}
//	
//int Fun(int n)
//{
//    if ( 5 == n)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
//
//int main()
//{
//    printf("%d\n", Fun(2));//16
//
//    return 0;
//}

//						内存是很大的区域
//						内存有3个区
//		堆栈-->还是栈区	栈区:	->	局部变量 函数参数 调用函数时返回值等临时变量
//						堆区:	->	动态内存分配
//						静态区:	->	全局变量  静态变量:static....



//	编写一个函数reverse_string(char* string)
//	实现:将参数字符串中的字符反向排序,不是逆序打印
//	my_strlen函数

//1.方法
//	用循环加两个函数实现 非递归
//int  my_strlen(char* str)
//{
//	int count = 0;
//	while ('\0' != *str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	int left = 0;
//	//求右下标用字符串长度-1 字符串长度用my_strlen函数
//	int right = my_strlen(str) - 1;
//
//	//循环条件 左下标要小于右下标 left=right是中间的那个字符 交不交换无所谓
//	while (left < right)
//	{
//		//交换第一个和最后一个字符
//		char temp = str[left];//char temp= *(str + left)//str[left]
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//	
//}

//2.递归
//	abcdef的逆序 可以转换 a和f的交换加上中间bcde的逆序  然后转换成b和e的交换加上cd的逆序..... 
//int  my_strlen(char* str)
//{
//	int count = 0;
//	while ('\0' != *str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	char tmep = *str;//1 把第一个字符拿出来
//	int len = my_strlen(str);//
//	*str =  *(str + len - 1);//2 然后把最后一个字符放到第一个字符的位置
////	首字符位		最后字符
//	*(str + len - 1) = '\0';//3 因为最后一个字符放到第一个字符的位置了 后面字符串需要逆序 所以给最后一个字符位置放个\0
//	//判断条件
//	//第1个字符后面的字符串长度如果小于2 那么就不用逆序了
//	if (my_strlen(str + 1)>=2 )
//	{
//		reverse_string(str + 1);//4  中间字符串的逆序
//	}
//	*(str + len - 1) = tmep;//5 最后把第一个字符放到最后一个字符的位置
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//数组名arr是数组arr首元素的地址
//	printf("%s\n", arr);//fedcba
//
//	return 0;
//}

//写一个递归函数DigitSum(n)输入一个非负数,返回组成他的数字之和
// 1729 
//DigitSum(172)+9
//DigitSum(17)+2+9
//DigitSum(1)+7+2+9

//int DigitSum(int n)
//{
//	if (9 < n)
//	{
//		return  DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//
//int main()
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//
//	return 0;
//}

//递归实现n的k次方
//double Pow(int x, int y)
//{
//	if (y == 0)
//	{
//		return 1.0;
//	}	
//	else if (y > 0)
//	{
//		return x * Pow(x, y - 1);
//	}
//	else
//	{
//		return 1.0 / (Pow(x, -y ));
//	}
//
//}
//
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//
//	return 0;
//}

//计算斐波那契数
// 1 1 2 3 5 8 13 21 34 55
//递归
int Fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}

}
//非递归
int Fib(int n)
{
	int i = 1;
	int j = 1;
	int c = 1;
	while (n > 2)
	{
		c = i + j;
		i = j;
		j = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d ", ret);
	return 0;
}