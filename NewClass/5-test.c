#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�����ʲô
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

//�������������в�ͬ�ĸ���

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
//	int ret = m ^ n;//��ͬΪ0��ͬΪ1 ͳ��һ��ret�Ķ��������м���1,��˵��m��n�Ķ�����λ�м���λ��ͬ
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

//��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�

//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	//��ȡn�Ķ������е�����λ��ż��λ
//	//��ӡż��λ
//	for (i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (n >> 1) & 1);
//	}
//	//��ӡ����λ
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> 1) & 1);
//	}
//	return 0;
//}


//дһ���������ز����������� 1 �ĸ���
//���磺 15       0000 1111       4 �� 1

//дһ�������ж�һ�������ǲ���2��n�η�
//2��n�η������֣�����ֻ��һ��1
//k&(k-1) == 0
//int main()
//{
//    int n = 63;
//    if ((n & (n - 1)) == 0)
//    {
//        printf("%d��2��x�η�\n", n);
//    }
//    else
//    {
//        printf("%d����2��x�η�\n",n);
//    }
//    return 0;
//}

//���Ͻ���

//дһ���������ز����������� 1 �ĸ���
//NumberOf1���Ǽ������n�Ķ����Ʋ������м���1
//ʮ��������Ҫȡÿһλ  ģ10�ٳ�10����
//123
//123%10 = 3
//123/10= 12
//12%10=2
//12/10=1
//1%10=1
//1/10=0
//��������   --- ģ2��2����
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
//����һ��������
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

//�������

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

//������������(��������ʱ����)
// ���
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


////�����д�
//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	return 0;
//}

//�����ʲô
//>

//int i;//ȫ�ֱ��� ����ʼ�� Ĭ����0
//int main()
//{
//	i--;//-1
//	//sizeof���������������Ľ����������unsigned int 
//	if (i > sizeof(i))//-1>4?  -1�������޷��Ž��� ����ǳ��������
//		printf(">\n");
//	else
//		printf("<\n");
//	return 0;
//}

//�������
//sn = a + aa + aaa + aaaa + aaaaa��ǰ����ͣ�����a��һ������
//2 + 22 + 222 + 2222 + 22222

//int main()
//{
	//int a = 0;
	//scanf("%d", &a);
	//��a��ɵ�ǰn��֮�� - ���������
//	int a = 0, n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int ret = 0;//һ��
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = 10 * ret + a;
//		//���һ��
//		sum += ret;	
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ��
//arr��һ������һά����

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
//	int* p = arr;//����������������Ԫ�صĵ�ַ
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

//��ӡˮ�ɻ���
//ˮ�ɻ��� ��ָһ��nλ�� ���λ���ֵ�n�η�֮�����õ��ڸ�������  153 = 1^3+5^3+3^3
#include <math.h>

int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//�ж�i�Ƿ�Ϊ������
		//1.����i��λ�� - n
		int n = 1;
		int tmp = i;
		while (tmp / 10)
		{
			n++;
			tmp /= 10;
		}
		//2.����i��ÿһλ��n�η�֮��
		tmp = i;
		int sum = 0;
		while (tmp)
		{
			//pow������һ������n�η���
			sum+=pow(tmp % 10,n);
			tmp /= 10;
		}
		//3.�ж�
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}