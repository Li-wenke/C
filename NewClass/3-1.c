#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//���� 1.�⺯�� 2.�Զ��庯��
//�⺯��
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);//��ӡarr1����ַ��� %s - ���ַ����ĸ�ʽ��ӡ
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

//2.�Զ��庯��
//	ret_type fun_name(para1,*  )
//	{
//		statement;//�����
//	}
//ret_type ������������
//fun_name ������
//para1    ��������

//�Զ��庯��������
//int  get_max(int x, int y)
//{
//	return (x > y) ? x : y;
//}
//
//int main()
//{
//	int a = 20;
//	int b = 30;
//	//�����ĵ���
//	int max = get_max(a,b);
//	printf("%d", max);
//	return 0;
//}

//�����������͵ĵط�д��:void ��ʾ��������������κ�ֵ,Ҳ����Ҫ����
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
//	//дһ������ - ����2�����ͱ�����ֵ
//	 
//	//����	û�н���  ֵ�Ǵ���ȥ�� �����ڴ��ַȴ��һ��
//	printf("ǰ:a = %d b = %d\n", a, b);
//	Swap(a, b);
//	printf("��:a = %d b = %d\n", a, b);
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
//	//int* pa = &a;//pa��һ��ָ�����
//	//*pa = 20;
//	//printf("%d", a);
//
//
//	printf("ǰ:a = %d b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("��:a = %d b = %d\n", a, b);
//	return 0;
//}

// дһ�����������ж�һ�����ǲ�������
//int is_prime(int n)
//{
//	2-n-1 ֮������ȥ�Գ�n
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
//	//100-200֮�������
//	int i = 0;
//	for (i = 100; i < 201; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (1 == is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//is_leap_year
//����ж������귵��1
//�������꣬����0
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
//	//����
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
//	//�ҵ��˾ͷ����ҵ�λ�õ��±�
//	//�Ҳ����ͷ���-1  0->�ǵ�һ��Ԫ�ص��±�
//	//����arr����ʵ���ϴ��ݵĲ������鱾��
//	//ֻ�Ǵ���ȥ��������Ԫ�صĵ�ַ
//	int ret = binary_search(arr,k,sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{ 
//		printf("�ҵ���,Ԫ���±�Ϊ:%d ", ret); 
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
//	//ÿ����һ�κ���  num+1
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

// �����ڲ���ı��ⲿ�����ô�ַ


// ������Ƕ�׺���ʽ����
// ��������Ƕ�׶���
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
//��ʽ����
//��һ�������ķ���ֵ��Ϊ����һ�������Ĳ�����
#include <string.h>
//int main()
//{
//	//int len =  strlen("abc");
//	//printf("%d\n", len);
//
//	////��ʽ����   ��strlen("abc")�����ķ���ֵ��Ϊprintf�Ĳ���
//	//printf("%d\n", strlen("abc"));
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);
//	printf("%s\n", strcpy(arr1, arr2));
//	//printf("%s\n", arr1);
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}
//�����Ķ���
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
//����������
//1. ���߱�������һ��������ʲô��������ʲô������������ʲô�����Ǿ����ǲ��Ǵ��ڣ��޹�
//��Ҫ��
//2. ����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ�á�
//3. ����������һ��Ҫ����ͷ�ļ��еġ�
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//��������һ�� - ��֪
//	int Add(int x, int y);
//
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//	return 0;
//}
////�����Ķ���
//int Add(int x, int y)
//{
//	return x + y;
//}
//��Add��δ���壻�����ⲿ���� int

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

//�����ݹ�  -->�����Լ������Լ�    �ݹ����Ҫ˼����ʽ���ڣ��Ѵ��»�С

//int main()
//{
//	printf("Hello\n");
//	main();
//
//	return 0;
//}

//�ݹ��������Ҫ����
//���������������������������������ʱ�򣬵ݹ�㲻�ټ�����
//ÿ�εݹ����֮��Խ��Խ�ӽ������������

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
////����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�� ���磺 ���룺1234����� 1 2 3 4
//int main()
//{
//	unsigned int  num = 0;
//	scanf("%u", &num);//1234
//	//�����ݹ�  -->�����Լ������Լ�
//	print(num);//print�������Դ�ӡ�����������ֵ�ÿһλ
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

//д�ݹ�
//1.�������ݹ�,������������,ÿ�εݹ�ƽ���������
//2.�ݹ��β���̫��


//��д��������������ʱ���������ַ����ĳ��ȡ�

//��ͨ���� ������Ҫ�õݹ麯��
//int my_strlen(char* str)
//{
//	int count = 0;//��ʱ����   ��ĿҪ���ǲ����Դ�����ʱ����
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
//	//ģ��ʵ��strlen����
//	printf("%d\n", my_strlen(ch));//3
//
//	return 0;
//}

//�ݹ������
//��n�Ľ׳ˡ��������������
//n<=1   n�Ľ׳˾���1
//n>1    n�Ľ׳˾��� n * (n-1)
//

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	//����
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

//��Щ����:����ʹ�õ����ķ�ʽʵ�� Ҳ����ʹ�õݹ�

//���n��쳲����������������������
// 1 1 2 3 5 8 13 21 34  55  89 .....
// n <= 2    1
// n > 2   (n-1)+(n-2)
//ǰ������֮�͵��ڵ�3����

//int count = 0;
//int Fib(int  n)
//{
//	//ͳ�Ƶ�3��쳲��������ļ������
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


//������̨��  n��̨���м�������
//1 | 2  -->����
//1��̨��  1		[1]
//2��̨��  2   [1,1]  [2]
//3��̨��  3   [1,1,1] [1,2] [2,1]
//4��̨��  5  [1,1,1,1] [1,1,2] [1,2,1] [2,2] [2,1,1]    
//5��̨��  8  [1, 1, 1, 1, 1], [1, 1, 1, 2], [1, 1, 2, 1], [1, 2, 1, 1], [2, 1, 1, 1], [2, 2, 1], [2, 1, 2], [1, 2, 2]
// ....
//쳲���������

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
//	int n = 0;//����������n̨��
//	scanf("%d", &n);
//	int ret = jump(n);
//	printf("%d", ret);
//
//	return 0;
//}

