#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//		printf("%d ", i);
//	}
//	//�������ѭ����ӡ5
//	return 0;
//}

//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}
//int main()
//{
//    printf("%d\n", func(1));//0
//    return 0;
//} 
//F11 - �����
//F10 - �����

//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third"); //û��break ;  ����ӡhellothird
//	}
//	return 0;
//}

//д���뽫�������������Ӵ�С�����
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d%d%d", &a, &b, &c);
//	//����˳��
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	//��� - ��С
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//дһ�������ӡ1 - 100֮������3�ı���������
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if ( 0 == i % 3)
//		{
//			printf("%d\t",i);
//		}
//	}
// //	for (i = 3; i <= 100; i+=3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//���������������������������Լ��
//			ͬʱ����		24 18
//			���Լ�����ᳬ�����еĽ�Сֵ
//			���ҳ���Сֵ ���ܲ��������ϴ�ֵ ���ܾ͵ݼ� ֱ�����������ϴ�ֵ ����������������Լ��
//			շת�����
//			�ýϴ�ֵȥģ�Ͻ�Сֵȡ��Ϊ0�Ļ� ��Сֵ�������Լ�� ���� ��ģ��ȥģ������ֱ������Ϊ0 ģ����Ϊ���Լ��
//			��ģ�� % ģ�� = ����
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);//24 18 
//	int max = m > n ? m:n;//��Ԫ�����
//	//�������Լ������m �� n�Ľ�Сֵ
//	//while (1)
//	//{
//	//	if (m % max == 0 && n % max == 0)
//	//	{
//	//		printf("���Լ����:%d\n", max);
//	//		break;
//	//	}
//	//	max--;
//	//}
//	for (max; max > 0; max--)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			printf("���Լ������:%d\n", max);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);//24 18
//	int t = 0;
//
//	while (t=m%n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("���Լ����%d\n", n);
//
//	//��С������ = m*n/���Լ��;
//	//printf("%d\n", (m * n)/n);
//
//	return 0;
//}

//��ӡ����
//1000-2000��֮���

//int main()
//{
//	int i = 0;
//	for (i = 1000; i < 2001; i++)
//	{
//		//�ж�y�ǲ�������
//		//1. ��4���������ܱ�100����������
//		//2. �ܱ�400����������
//		/*if (i % 4 == 0)
//		{
//			if (i % 100 != 0)
//			{
//				printf("%d�� ", i);
//			}
//		}
//		if (i % 400 == 0)
//		{
//			printf("%d�� ",i);
//		}*/
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//		{
//			printf("%d��  ", i);
//		}
//	}
//	return 0;
//}

//��ӡ����
//100-200֮�������
//���� -> ����  ֻ�ܱ�һ������������

//
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 201; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		 //2-i-1֮�������ȥ�Գ�i
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//
//	}	
//	return 0;
//}

#include <math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//
//	//m = a*b
//	//a��b��һ��������һ�������� <= ��ƽ��m��
//	//16 = 2*8 = 4*4
//
//	//sqrt - �ǿ�ƽ���ĺ��� - math.h
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2->i-1֮�������ȥ�Գ�i,���ܲ�������
//		int j = 0;
//		int flag = 1;//����i��������
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//��������
//				break;
//			}
//		}
//		//
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);//����
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = 1;
//	int c = 0;
//	c = b;
//	b = a;
//	a = c;
//	printf("%d %d", a, b);
//	return 0;
//}
//
//int main()
//{
//	int c = 3;
//	int b = 6;
//	c = c + b;
//	b = c - b;
//	c = b + b;
//	printf("%d %d", b, c);
//	return 0;
//}

//�ػ�����
//ֻҪ�������������Ծ���1�����ڹػ���������룺��������ȡ���ػ�!
//
//shutdown -s -t 60
//shutdown -a
//
#include <string.h>
#include <stdlib.h>
//
//int main()
//{
//	//�ػ�
//	//C�����ṩ��һ��������system()- ִ��ϵͳ�����
//
//	char input[20] = { 0 };//����������Ϣ
//	system("shutdown -s -t 60");//system - stdlib.h
//
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	//string.h
//	if (strcmp(input, "������") == 0)//�����ַ����Ƚ��ǲ���ʹ��==�ģ�Ӧ��ʹ��strcmp() string compare
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	//�ػ�
//	//C�����ṩ��һ��������system()- ִ��ϵͳ�����
//	char input[20] = { 0 };//����������Ϣ
//	system("shutdown -s -t 60");//system - stdlib.h
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		//string.h
//		if (strcmp(input, "������") == 0)//�����ַ����Ƚ��ǲ���ʹ��==�ģ�Ӧ��ʹ��strcmp() string compare
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}


//goto ���ֻ����һ��������Χ����ת�����ܿ纯��
//
//void test()
//{
//flag:
//	printf("test\h");
//}
//
//int main()
//{
//	goto flag;
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	//0-9 10
//	for (i = 0; i < 10; i++)
//	{
//
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//9 19 29 39 49 59 69 79 89 99 
//90 91 92 93 94 95 96 97 98 

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 10 == 9)
//		{ 
//			printf("%d ", i);
//			count++;
//		}
//		else if (i / 10 == 9)
//		{ 
//			printf("%d ", i);
//			count++;
//		}
//			
//	}
//	printf("\n%d", count);
//
//	return 0;
//}

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����


//��ֻ�Ǽ�û�м�
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / i;
//	}
//	printf("%lf ", sum);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			sum -= 1.0 / i;
//		else
//			sum += 1.0 / i;
//	}
//	printf("%lf ", sum);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i; �Ӽ�����
//		flag = -flag;
//	}
//	printf("%lf ", sum);
//
//	return 0;
//}
// 
// 
// 
//��10 �����������ֵ

//int main()
//{
//  int arr[10] = { 1,2,3,4,5,6,7,8,9,20 };
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}

//����Ļ�����9*9�˷��ھ���
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...


int main()
{
	int i = 1;
	for (i = 1; i <= 9; i++)
	{
		//��ӡһ��
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			//printf("%d*%d=%-2d",i,j,(i*j));//��������ӡ��λ�����ո����
			printf("%d*%d=%d\t", i, j, (i * j));
		}
		printf("\n");
	}


	return 0;
}

void meun()
{
	printf("******************************************\n");
	printf("************    1. play    ***************\n");
	printf("************    0. exit    ***************\n");
	printf("******************************************\n");
}

//��������Ϸ
void game()
{
	int num = 0;//�û��µ�����
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("�������:->");
		scanf("%d", &num);
		if (num > ret)
		{
			printf("���ִ���");
		}
		else if (num < ret)
		{
			printf("����С��");
		}
		else
		{
			printf("�ҵ���");
			break;
		}
	}
}
#include <stdlib.h>
#include <time.h>
int main()
{

	int input = 0;//�����û�����ֵ
	srand((unsigned int)time(NULL)); //���������
	//��Ϊһ��ʼ��Ҫ����Ϸ,����ִ��һ��,������do..while�ṹ
	do
	{	
		//��Ϸһ��ʼ��Ҫһ���˵�
		meun();//��ӡ�˵�
		printf("��ѡ��:->");
		scanf("%d", &input);//�����û�����ֵ
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ");
				break;
			default:
				printf("ѡ�����,����ѡ��.\n");
				break;
		}


	} while (input);//��Ϊ��Ϸ�趨��ʼ��Ϸ��1�˳���Ϸ��0 ����do...while�ṹ����ѭ�����������û������ֵ �������ٻ�ִ��һ��



	return 0;
}


//���ֲ��ҷ�  ��������
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,11,13,15,17,19,21,23,25,27,29,31 };//����һ����������
	int k = 13;//Ҫ���ҵ���
	int sz = sizeof(arr) / sizeof(arr[0]);//��������ĸ���
	int left = 0;//��������±�
	int right = sz - 1;//��������±�
	while (left <= right)
	{
		int mid = (left + right) / 2;//�м�Ԫ�ص��±�
		if (arr[mid] > k)//����м����±�����Ӧ������ֵҪ�Ȳ��ҵ����ִ�
		{
			right = mid - 1;//���±��ֵ����м�����1
		}
		else if (arr[mid] < k) // ����м����±�����Ӧ������ֵҪ�Ȳ��ҵ�����С
		{
			left = mid + 1;	//���±��ֵ����м�����1 Ҳ��������һ��λ��
		}
		else//����м����±�����Ӧ������ֵҪ����ҵ��������
		{
			printf("�ҵ���,Ԫ���±���:%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���");
	}
	

	return 0;
}