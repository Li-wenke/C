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

//			��������Ƕ�׵��õ�������Ƕ�׶���
//			�����Ķ�����Է��ں�����ʹ��
//			���ű��ʽ
//			exec( (vl��v2)��(v3��v4)��v5��v6 );


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

//ʵ��һ�������ж�һ�����ǲ�������
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
//		printf("%d��������\n", i);
//	}
//	else
//		printf("%d������", ret);
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
//			printf("%2d������ ", i);
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

//ѭ����9*9�˷��� 
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

//�ú�����ʽ
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
//	//��
//	for (i = 1; i <= n; i++)
//	{
//		//��ӡһ��
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
//	//����
//	print_table(n);
//	//�����������Ƿǳ��ؼ���������������ֺ����Ĺ���
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

//						�ڴ��Ǻܴ������
//						�ڴ���3����
//		��ջ-->����ջ��	ջ��:	->	�ֲ����� �������� ���ú���ʱ����ֵ����ʱ����
//						����:	->	��̬�ڴ����
//						��̬��:	->	ȫ�ֱ���  ��̬����:static....



//	��дһ������reverse_string(char* string)
//	ʵ��:�������ַ����е��ַ���������,���������ӡ
//	my_strlen����

//1.����
//	��ѭ������������ʵ�� �ǵݹ�
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
//	//�����±����ַ�������-1 �ַ���������my_strlen����
//	int right = my_strlen(str) - 1;
//
//	//ѭ������ ���±�ҪС�����±� left=right���м���Ǹ��ַ� ������������ν
//	while (left < right)
//	{
//		//������һ�������һ���ַ�
//		char temp = str[left];//char temp= *(str + left)//str[left]
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//	
//}

//2.�ݹ�
//	abcdef������ ����ת�� a��f�Ľ��������м�bcde������  Ȼ��ת����b��e�Ľ�������cd������..... 
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
//	char tmep = *str;//1 �ѵ�һ���ַ��ó���
//	int len = my_strlen(str);//
//	*str =  *(str + len - 1);//2 Ȼ������һ���ַ��ŵ���һ���ַ���λ��
////	���ַ�λ		����ַ�
//	*(str + len - 1) = '\0';//3 ��Ϊ���һ���ַ��ŵ���һ���ַ���λ���� �����ַ�����Ҫ���� ���Ը����һ���ַ�λ�÷Ÿ�\0
//	//�ж�����
//	//��1���ַ�������ַ����������С��2 ��ô�Ͳ���������
//	if (my_strlen(str + 1)>=2 )
//	{
//		reverse_string(str + 1);//4  �м��ַ���������
//	}
//	*(str + len - 1) = tmep;//5 ���ѵ�һ���ַ��ŵ����һ���ַ���λ��
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//������arr������arr��Ԫ�صĵ�ַ
//	printf("%s\n", arr);//fedcba
//
//	return 0;
//}

//дһ���ݹ麯��DigitSum(n)����һ���Ǹ���,���������������֮��
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

//�ݹ�ʵ��n��k�η�
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

//����쳲�������
// 1 1 2 3 5 8 13 21 34 55
//�ݹ�
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
//�ǵݹ�
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