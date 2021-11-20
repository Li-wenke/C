#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//结果是什么
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//c=6 a=6
//	b = ++c, c++, ++a, a++;//7,7,7,7   c=8 a=8 b=7
//	b += a++ + c;//b= b + a++ +c;   7 + 8++ + 8; a = 9 b = 23 c = 8
//	printf("a = %d b = %d c= %d\n:", a, b, c);
//
//	return 0;
//}

//求两个二进制中不同的个数

//2.
//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	while(n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d %d", &m, &n);
//	int ret = m ^ n;//相同为0不同为1 统计一下ret的二进制中有几个1,就说明m和n的二进制位中几个位不同
//	count = NumberOf1(ret);
	//1.
	//for (i = 0; i < 32; i++)
	//{
	//	if (((m >> i) & 1) != ((n >> i) & 1))
	//	{
	//		count++;
	//	}
	//}
//	printf("%d\n", count);
//	return 0;
//}

//获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。

//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	//获取n的二进制中的奇数位和偶数位
//	//打印偶数位
//	for (i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (n >> 1) & 1);
//	}
//	//打印奇数位
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> 1) & 1);
//	}
//	return 0;
//}


//写一个函数返回参数二进制中 1 的个数
//比如： 15       0000 1111       4 个 1

//写一个代码判断一个数字是不是2的n次方
//2的n次方的数字，其中只有一个1
//k&(k-1) == 0
//int main()
//{
//    int n = 63;
//    if ((n & (n - 1)) == 0)
//    {
//        printf("%d是2的x次方\n", n);
//    }
//    else
//    {
//        printf("%d不是2的x次方\n",n);
//    }
//    return 0;
//}

//网上讲解

//写一个函数返回参数二进制中 1 的个数
//NumberOf1就是计算参数n的二进制补码中有几个1
//十进制数想要取每一位  模10再除10即可
//123
//123%10 = 3
//123/10= 12
//12%10=2
//12/10=1
//1%10=1
//1/10=0
//二进制数   --- 模2除2即可
//15 - 00001111
//15%2=1
//15/2=7 - 00000111
//7%2=1
//7/2=3 -- 00000011
//3%2=1 -- 00000001
//3/2=1 -- 00000001
//1%2=1 -- 00000001
//1/2=0 -- 00000000
//14 - 00001110
//14%2=0
//14/2=7-00000111
//..............
//存在一定的问题
//int NumberOf1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//00000000000000000000000000000001
//	//00000000000000000000000000000001
//	
//	int ret = NumberOf1(n);
//
//	printf("ret = %d\n", ret);
//	return 0;
//}
//n = n&(n-1)
//n=15
//1111 n
//1110 n-1
//1110 n
//1101 n-1
//1100 n
//1011 n-1
//1000 n
//0111 n-1
//0000 n
//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	while(n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}

//个人理解

//int  count_one_bits(int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((a >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int  a = 15;
//	printf("%d ",count_one_bits(a));
//	return 0;
//}

//交换两个变量(不创建临时变量)
// 异或
// a ^ a = 0
// a ^ 0 = a

//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d", a, b);
	/*a = a + b;
	b = a - b;
	a = a - b;*/
	//printf("\n");
	//printf("a=%d b=%d", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}


////程序有错
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	return 0;
//}

//结果是什么
//>

//int i;//全局变量 不初始化 默认是0
//int main()
//{
//	i--;//-1
//	//sizeof这个操作符，算出的结果的类型是unsigned int 
//	if (i > sizeof(i))//-1>4?  -1被当作无符号解析 结果是超大的整数
//		printf(">\n");
//	else
//		printf("<\n");
//	return 0;
//}

//计算求和
//sn = a + aa + aaa + aaaa + aaaaa的前五项和，其中a是一个数字
//2 + 22 + 222 + 2222 + 22222

//int main()
//{
	//int a = 0;
	//scanf("%d", &a);
	//由a组成的前n项之和 - 不考虑溢出
//	int a = 0, n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int ret = 0;//一项
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = 10 * ret + a;
//		//算出一项
//		sum += ret;	
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//写一个函数打印arr数组的内容，不使用数组下标，使用指针
//arr是一个整型一维数组

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;//数组名就是数组首元素的地址
//	int* pend = arr + sz - 1;
//	while (p <= pend)
//	{
//		printf("%d ", *(p));
//		p++;
//	}
	//print(p, sz);
	//int i = 0;
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", *(p + i));
	//}
//	return 0;
//}

//打印水仙花数
//水仙花数 是指一个n位数 其各位数字的n次方之和正好等于该数本身  153 = 1^3+5^3+3^3
#include <math.h>

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//判断i是否为自幂数
		//1.计算i的位数 - n
		int n = 1;
		int tmp = i;
		while (tmp / 10)
		{
			n++;
			tmp /= 10;
		}
		//2.计算i的每一位的n次方之和
		tmp = i;
		int sum = 0;
		while (tmp)
		{
			//pow用来求一个数的n次方数
			sum+=pow(tmp % 10,n);
			tmp /= 10;
		}
		//3.判断
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}