#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Ұָ�벻��������ʹ��
//32λ��int����ռ4���ֽ� ָ��ռ4���ֽ� ����ϵͳ����ʹ�õ�����ڴ���2^32
//64λ: int����ռ4���ֽ� ָ��ռ8���ֽ� ����ϵͳ����ʹ�õ�����ڴ���2^64


//�����ʲô
//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    short* p = (short*)arr;
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        *(p + i) = 0;
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);//0 0 3 4 5
//    }
//    return 0;
//}

//int main()
//{
//	unsigned long arr[] = { 6,7,8,9,10 };
//	unsigned long* parr;
//	parr = arr;
//	*(parr + 3) += 3;//*(parr+3) = *(parr+3)+3; *(parr+3) = 9 + 3;
//	printf("%d,%d\n", *parr, *(parr + 3));//6 12
//	return 0;
//}

//struct stu
//{
//    int num;
//    char name[10];
//    int age;
//};
//void fun(struct stu* p)
//{
//    printf("%s\n", (*p).name);
//    return;
//}
//int main()
//{
//    struct stu students[3] = { {9801,"zhang",20},
//                              {9802,"wang",19},
//                              {9803,"zhao",18}
//    };
//    fun(students + 1);//wang
//    return 0;
//}

//�ṹ����ʳ�Ա�Ĳ����� . -> *�����ò�����   
//sizeof ���Ƿ��ʽṹ���Ա�Ĳ�����

//����ָ��Ҳ��ָ�룬���������һ��ָ��ĵ�ַ
//ָ����������ŵ�ַ�ı���

//ָ���ǵ�ַ ��ַ�иߵ�֮�� ���������Ƚϴ�С��
//����ָ������ò�������4���ֽ� char������һ���ֽ� short������2���ֽ�...

//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//
//	a.a = 99;
//	printf("%d\n", __________);
//	return 0;
//}
//��Ŀ���ݣ�
//A.a.a ok
//B. *p.a//err    .�����������ȼ���*��������
//C.p->a
//D.(*p).a
//void reverse(char* str)
//{
//	assert(str);
//
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";//fedcba
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}
#include <string.h>
#include <assert.h>
//дһ����������������һ���ַ���������
//void reverse(char* str,char* end)
//{
//	assert(str);//��ֹҰָ�� ����
//	while (str <= end)
//	{
//		char tmp = *end;
//		*end = *str;
//		*str = tmp;
//		str++;
//		end--;
//	}
//}
//int main()
//{
//	char ch[] = "abcdef";
//	char* end = ch + strlen(ch) - 1;
//	reverse(ch,end);
//	printf("%s\n", ch);
//	return 0;
//}

//��ӡ����ͼ��

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 7; i++)
//	{
//		for (j = 0; j <= 5 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i*2; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 6; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= 10-(2*i); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��
//	for (i = 0; i < line - 1; i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0; j <= i ; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ���ƿ��ˮ

int main()
{
	int money = 0;
	scanf("%d", &money);
	int total = 0;
	if (money > 0)
	{
		total = 2 * money - 1;
	}
	//int total = money;
	//int empty = money;
	////��ʼ�û�
	//while (empty >= 2)
	//{
	//	total += empty / 2;
	//	empty = empty / 2 + empty % 2;
	//}
	printf("%d", total);
	return 0;
}