#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ָ��Ľ���

//�ַ�ָ��
//int main()
//{
	//char ch = 'w';
	//char* pc = &ch;
	//�������ǰ�"hello world"����ַ��������ַ��ĵ�ַ�洢��ps��
//	char* ps = "hello world";
//	printf("%c\n", *ps);//h
//	printf("%s\n", ps);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char* str3  = "hello bit.";//�����ַ���
//	char* str4  = "hello bit.";
//	if (str1 == str2)//��������������Ԫ�صĵ�ַ 
//		printf("str1 and str2 are same\n");err
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");err
//	return 0;
//}

//ָ������
//������������ ֻ�Ǵ�ŵ���ָ��Ҳ���ǵ�ַ

//int main()
//{
	//int* arr[3];//�������ָ�������
	//int* arr[3];//�������ָ�������
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

//����ָ��
//��һ��ָ�� - ��ָ�������ָ��
// 
//����ָ�� - ��ָ�����ε�ָ��
//�ַ�ָ�� - ��ָ���ַ���ָ��
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
	int(*parr)[10] = &arr;*///ȡ������ĵ�ַ
	//parr ��һ������ָ��  ��ŵ���һ������ĵ�ַ
	//arr;//����������Ԫ�صĵ�ַ - arr[0]�ĵ�ַ
//	return 0;
//}

/*int main()
{
	int arr[10] = { 0 };
	int* p1 = arr;
	int (*p2) [10] = &arr;
	printf("%p\n", p1);
	printf("%p\n", p1+1);*///+1�������ĸ��ֽ�Ҳ����һ������
	//ָ�����;�����ָ�룫1���ף���
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);//+1������һ������
//	printf("%p\n",arr);//����������Ԫ�ص�ַ
//	printf("%p\n",&arr);//&��������ȡ����������ĵ�ַ �������ʼ��ַ����Ԫ�ص�ַ����ͬ��
//	return 0;
//}


//��������������Ԫ�صĵ�ַ
//������2�����⣺
//1. sizeof(������) - ��������ʾ�������飬����������������С����λ���ֽ�
//2. &������ - ��������ʾ�������飬ȡ��������������ĵ�ַ

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*pa) [10]= &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*((*pa) + i));//(*pa)�൱��������arr
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
////pa��һ������ָ��
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
//	print2(arr, 3, 5);//arr��������ʾ��Ԫ�ص�ַ
//	return 0;
//}


//һ��ָ�봫��

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
//	//p һ��ָ��
//	print(p,sz);
//	char ch = 'w';
//	char* p1 = &ch;
//	test(&ch);//char*
//	test(p1);
//	return 0;
//}

//����ָ�봫��

//void test(int** p2)
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//paһ��ָ��
//	int** ppa = &pa;//ppa����ָ��
//	//�Ѷ���ָ�봫��
//	test(ppa);
//	test(&pa);//��һ��ָ������ĵ�ַ
//	int* arr[10] = { 0 };
//	test(arr);
//	printf("%d\n", a);
//	return 0;
//}

//����ָ��  --> ָ������ָ��  ��ź�����ַ��ָ��

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
//	int(*parr)[10] = &arr;//ȡ������ĵ�ַ
	//parr��ָ�������ָ�� - ��ŵ�������ĵ�ַ

	//����ָ��  -- ��ź�����ַ��ָ��
	//&������   -- ȡ���ľ��Ǻ����ĵ�ַ 
	// ������ != &������
	// ������ == &������
	//pf����һ������ָ�����
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
	//pf��һ������ָ�����
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
//	(*(void(*)())0)();//����0��ַ���ĺ���
	//�ú����޲Σ�����������void
	//1.void(*)() - ����ָ������
	//2.(void(*)())0 - ��0����ǿ������ת����������Ϊһ�������ĵ�ַ
	//3.(*(void(*)())0) - ��0��ַ�����˽����ò���
	//4.(*(void(*)())0)(); - ����0��ַ���ĺ���
//	return 0;
//}

void (* signal(int, void(*)(int) ) )(int);
//typedef - �����ͽ����ض���

typedef void(*pfun_t)(int);//��void(*)(int)�ĺ���ָ������������Ϊpfun_t
//typedef unsigned int uint;

pfun_t  signal(int, pfun_t);

//1.signal �� ()��ϣ�˵��signal�Ǻ�����
//2.signal�����ĵ�һ������������int �ڶ�������������void(*)(int)����ָ������
//	�ú���ָ�룬ָ��һ������Ϊint������������void�ĺ���
//3.signal�����ķ�������Ҳ��һ������ָ�� 
// void(*)(int)
//	�ú���ָ�룬ָ��һ������Ϊint����������void�ĺ���
//signal��һ������������


//����ָ������	-- ��ź���ָ�������
//����ָ��   int*
//����ָ������ int* arr[10]
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
//	//������-�������ͱ����ļӡ������ˡ���
//	//a&b a|b a^b a>>b a<<b a>b
//	int input = 0;
//	int x = 0, y = 0, ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				printf("����������������:>");
//				scanf("%d %d", &x, &y);
//				ret = Add(x, y);
//				printf("ret = %d", ret);
//				break;
//			case 2:
//				printf("����������������:>");
//				scanf("%d %d", &x, &y);
//				ret = Sub(x, y);
//				printf("ret = %d", ret);
//				break;
//			case 3:
//				printf("����������������:>");
//				scanf("%d %d", &x, &y);
//				ret = mul(x, y);
//				printf("ret = %d", ret);
//				break;
//			case 4:
//				printf("����������������:>");
//				scanf("%d %d", &x, &y);
//				ret = div(x, y);
//				printf("ret = %d", ret);
//				break;
//			case 0:
//				printf("�˳�����!\n");
//				return;
//			default:
//				printf("��������!����������!\n");
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
//	//������-�������ͱ����ļӡ������ˡ���
//	//a&b a|b a^b a>>b a<<b a>b
//	int input = 0;
//	int x = 0, y = 0, ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		//pfarr -- ����ָ������
//		int(*pfarr[5])(int, int) ={NULL,Add,Sub,Mul,Div};
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = pfarr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("�˳�����!\n");
//			break;
//		}
//		else
//		{
//			printf("ѡ�����!������ѡ��!\n");
//		}
//	} while (input);
//	return 0;
//}

//����ָ������ -- ������������
//ȡ������ָ������ĵ�ַ
//����ָ������
//&����ָ������
//int(*p1)(int, int)  ����ָ��
//int(*p2[5])(int, int)  ����ָ������
//int(*(*p3)[5])(int, int) = &p2; ����ָ�������ָ��
//p3��ָ�򡾺���ָ�����顿��ָ�����

//��������
//int arr[5]
//int (*p)[5]=&arr   ����ָ��
//����ָ������
//int* arr[5]
//int* (*p)[5]=&arr  ����ָ��
//p��ָ������ָ�����顿��ָ��

//int main()
//{
//	int arr[10];
//	//����Ԫ������ -- int
//	//arr����������int [10]
//	return 0;
//}

//�ص�����  -- ͨ������ָ����õĺ���

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
//	printf("����������������:>");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}
//int main()
//{
//	//������-�������ͱ����ļӡ������ˡ���
//	//a&b a|b a^b a>>b a<<b a>b
//	int input = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
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
//			printf("�˳�����!\n");
//			return;
//		default:
//			printf("��������!����������!\n");
//			break;
//		}
//	} while (input);
//		return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	ð�����������
//	for (i = 0; i < sz-1; i++)
//	{
//		һ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			����
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
//	����
//	int arr[10] = { 8,3,4,5,1,2,6,7,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	bubble_sort(arr,sz);
//	print(arr, sz);
//	return 0;
//}

//qsort();//��������
//�������ݡ��ַ������ݡ��ṹ������ ����ʹ��qsort����	

//����Ҫдһ��ð���������������ַ���
//bubble_sort_str();
//�ַ����Ƚ���strcmp

//void qsort(void* base, //base�д�ŵ��Ǵ����������е�һ������ĵ�ַ
//			size_t num, //��������Ԫ�صĸ���
//			size_t size,//����������һ��Ԫ�صĴ�С����λ���ֽ�
//			int (*cmp)(const void* e1, const void* e2)//�������Ƚϴ����������е�2��Ԫ�صĺ���
//			);

//qsort ---> ͷ�ļ�
#include <stdlib.h>
#include <string.h>

//������������ 
//ʹ��qsort

//void print(int arr[], int sz)
//{
//	printf("�����:\n");
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
//	//������������
//	int arr[] = { 8,3,4,5,1,2,6,7,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����
//	qsort(arr,sz,sizeof(arr[0]),cmp_int );
//	//��ӡ
//	print(arr, sz);
//}

//�ṹ����������

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
//	printf("������������:\n");
//	int i = 0;
//	for (i = 0; i < sz; i++,s++)
//	{
//		printf("����:%-5s ����:%d\n", s->name, s->age);
//	}
//}
//int sort_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//} 
//void printname(struct Stu* s, int sz)
//{
//	printf("������������:\n");
//	int i = 0;
//	for (i = 0; i < sz; i++, s++)
//	{
//		printf("����:%-5s ����:%d\n", s->name, s->age);
//	}
//}
//void test2()
//{
//	//ʹ��qsort��������ṹ������
//	struct Stu s[] = { {"����",30} ,{"����",40},{"����",20}};
//	int sz = sizeof(s) / sizeof(s[0]);
//	//������������
//	qsort(s, sz, sizeof(s[0]), sort_age);
//	printage(s, sz);
//	//������������
//	//strcmp�Ƚ��ַ�����С
//	//abcq
//	//adc   �Ƚ϶�Ӧλ���ϵ�ASCII��ֵ  
//	qsort(s, sz, sizeof(s[0]), sort_name);
//	printname(s, sz);
//}
//
////���� ǰ��һ������ - ����һ������
////���� ����һ������ - ǰ��һ������
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
////ģ��qsortʵ��һ��ð������ͨ���㷨
//void bubble_sort(void* base,int sz,int width,int (*cmp)(const void* e1,const void* e2))
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//һ��ð������
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//����Ԫ�رȽ�
//			//arr[j] arr[j+1]
//			if (cmp((char*)base+j*width,(char *)base+(j+1)*width)>0)
//			{
//				//����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//void test3()
//{
//	//������������
//	int arr[] = { 8,3,4,5,1,2,6,7,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	//��ӡ
//	print(arr, sz);
//}
//void test4()
//{
//	//ʹ��qsort��������ṹ������
//	struct Stu s[] = { {"����",30} ,{"����",40},{"����",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//������������
//	bubble_sort(s, sz, sizeof(s[0]), sort_age);
//	printage(s, sz);
//	//������������
//	//strcmp�Ƚ��ַ�����С
//	//abcq
//	//adc   �Ƚ϶�Ӧλ���ϵ�ASCII��ֵ  
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

//sizeof(������) - ��������ʾ��������  ���������������Ĵ�С
//&������ - ��������ʾ��������  ȡ����������ĵ�ַ
//����֮�⣬���е�����������������Ԫ�صĵ�ַ

//int main()
//{
//	//һά����
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//��������Ĵ�С			16
//	printf("%d\n", sizeof(a + 0));//�����±�Ϊ0��Ԫ�ش�С 4/8		a + 0 �ǵ�һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*a));	  //*a������ĵ�һ��Ԫ�ؼ�����ǵ�ַ��С	4
//	printf("%d\n", sizeof(a + 1));//a+1�ǵڶ���Ԫ�صĵ�ַ������ǵ�ַ��С	4/8
//	printf("%d\n", sizeof(a[1]));//������ǵڶ���Ԫ�ش�С  4
//	printf("%d\n", sizeof(&a)); // 4/8  ȡ������ĵ�ַ   ��ַ�Ĵ�С4/8
//	printf("%d\n", sizeof(*&a));// 16   ȡ������ĵ�ַ�ٶ�������ò��� 
//	//&a  -- int(*p)[4] = &a;
//	printf("%d\n", sizeof(&a + 1));//4/8 ȡ������a�ĵ�ַ��+1 ȡ��������������֮�����һ��ռ����ʼ��ַ
//	printf("%d\n", sizeof(&a[0]));//4/8 ȡ����һ��Ԫ�صĵ�ַ ������ǵ�ַ�Ĵ�С
//	printf("%d\n", sizeof(&a[0] + 1));//4/8 ȡ����һ��Ԫ�صĵ�ַ��+1 Ҳ����ȡ���ڶ���Ԫ�صĵ�ַ ������ǵ�ַ�Ĵ�С
//	return 0;
//}

//int main()
//{
	//�ַ�����
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//��������Ĵ�С 
	//printf("%d\n", sizeof(arr + 0));//4/8
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4/8
	//printf("%d\n", sizeof(&arr + 1));//4/8
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8

	//printf("%d\n", strlen(arr));//���ֵ
	//printf("%d\n", strlen(arr + 0));//���ֵ
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//���ֵ
	//printf("%d\n", strlen(&arr + 1));//���ֵ-6
	//printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1

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
//	printf("%d\n", strlen(&arr + 1));//���ֵ
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
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5
//	return 0;
//}

//int main()
//{
	//��ά����
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//48
	//printf("%d\n", sizeof(a[0][0]));//4  a[0][0] - �ǵ�һ�е�һ��Ԫ��
	//printf("%d\n", sizeof(a[0]));//16  �����һ�еĴ�С  ������a[0]��������sizeof�ڲ�  ��ʾ����������һ��

//	printf("%d\n", sizeof(a[0] + 1));//4/8 -->? a[0]��Ϊ��������û�е�������sizeof�ڲ���Ҳû��ȡ��ַ 
									 //����arr[0]��ʾΪ��һ�е�һ��Ԫ�صĵ�ַ   arr[0]+1 --> ��һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1 )));//4  ��һ�еڶ���Ԫ�ؽ�����
//	printf("%d\n", sizeof(a + 1));//4/8   �ڶ��еĵ�ַ
	//a��Ϊ��ά����������� û��ȡ��ַҲû�е�������sizeof�ڲ�  a��ʾ��ά������Ԫ�صĵ�ַ ������һ�еĵ�ַ
//	printf("%d\n", sizeof(*(a + 1)));//16 *(a+1) -- > a[1]  
	//a+1�ǵڶ��еĵ�ַ  *(a+1)��ʾ�ڶ���  ������ǵڶ��еĴ�С
//	printf("%d\n", sizeof(&a[0] + 1));//4  
	//a[0]�ǵ�һ�е�������  &a[0]ȡ�����ǵ�һ�еĵ�ַ &a[0]+1 ����һ��ָ��ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
	//a[0]�ǵ�һ�е������� &a[0]ȡ�����ǵ�һ�еĵ�ַ &a[0]+1 ����һ��ָ��ڶ��еĵ�ַ
	//*(&a[0]+1)�Եڶ��н����õõ��ڶ��� ������ǵڶ��еĴ�С
//	printf("%d\n", sizeof(*a));//16 a������ ��ʾ��Ԫ�صĵ�ַ *a������ ��ʾ��һ�� ������ǵ�һ�еĴ�С
//	printf("%d\n", sizeof(a[3]));//16 a[3]��ʵ�ǵ����е�������(�����)
	//������ʵ�����ڣ�Ҳ��ͨ�����ͼ����С��
//	return 0;
//}

//	sizeof()�ڲ����ʽ�ǲ������!
//1. sizeof(������)���������������ʾ�������飬���������������Ĵ�С��
//2. & ���������������������ʾ�������飬ȡ��������������ĵ�ַ��
//3. ����֮�����е�����������ʾ��Ԫ�صĵ�ַ��

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
//    int* ptr = (int*)(&a + 1);//&aȡ������a�ĵ�ַ &a+1����������� ǿ������ת����int* 
//    printf("%d,%d", *(a + 1), *(ptr - 1));//*(a+1)  a+1��ʾ�ڶ���Ԫ�صĵ�ַ *(a+1)���ʵڶ���Ԫ��
	//*(ptr-1) ptr��ʾ�������ĩβ��ĵ�ַ ptr-1 ��ʾ�������һ��Ԫ�صĵ�ַ *(ptr-1)�����������һ��Ԫ��
//    return 0;
//}

//���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
//����p ��ֵΪ0x100000�� ���±��ʽ��ֵ�ֱ�Ϊ���٣�
//��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x100000+1   0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100000+4   0x100004
//	return 0;
//}
//ָ�����;�����ָ������㣡

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
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���ű��ʽ   1,3,5
//	int* p;
//	p = a[0];//��һ�и�ֵ��p����
//	printf("%d", p[0]);//��ӡ���ǵ�һ�е�һ��Ԫ��
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];//����ָ�� 
//	p = a;//��Ԫ�ص�ַ
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	//				  *(*(p+4)+2)  -4�Ե�ַ����ʽ��ӡ����             -4
	//��ַ�����ʾ�м��Ԫ�ظ��� ��Ϊ�ǵ͵�ַ-�ߵ�ַ ���Խ���Ǹ���
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
//	char** pa = a;//a��ʾ������Ԫ�صĵ�ַ 
//	pa++;//����char*a[0] ָ��char*a[1]
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