#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//�ṹ��
//char int double .....
//�� = 3.14 ?  'w' ?
//����+���+���֤����......
//�� -->���Ӷ���
//����+����+������+����+���.....
//���Ӷ���  -->�ṹ�� -->�Լ����������һ������

//����һ���ṹ������
#include <string.h>
struct Book
{
	char name[20];//C���Գ������
	short price;//55
};
int main()
{
	//���ýṹ������-����һ�������͵Ľṹ�����
	struct Book b1 = {"C���Գ������",55	};
	struct Book* pb = &b1;
	
	strcpy(b1.name,"Java�������");//strcpy-string copy-�ַ�������-�⺯��-string.h  //= "C++";
	b1.price = 15;//������ֱ�Ӹ�ֵ
	printf("%s\n", b1.name);

	//����pb��ӡ�ҵ������ͼ۸���?
	//.Ӧ�õ��ṹ�����.��Ա
	//->�ṹ��ָ��    ->��Ա


	/*printf("%s\n", pb->name);
	printf("%d\n", pb->price);*/

	/*printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);*/

	/*printf("����:%s\n", b1.name);
	printf("�۸�:%dԪ\n", b1.price);
	b1.name = "C����";
	b1.price = 15;
	printf("�޸ĺ������:%s\n", b1.name);
	printf("�޸ĺ�ļ۸�:%dԪ\n", b1.price);*/
	return 0;
}

//int main()
//{
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(short*));
	//double d = 3.14;
	//double* pd = &d;//32-4   64-8
	//printf("%d\n", sizeof(pd));//4
	/*
	*pd;
	printf("%lf\n", d);
	printf("%lf\n", *pd);
	*/

	//int a = 10;//���ڴ�����4���ֽڵĿռ�
	//int* p = &a;//p��һ������-->ָ�����
	//printf("%p\n", &a);
	//printf("%p\n",p);
	//*p = 2;//*-->�����ò�����/��ӷ��ʲ�����
	//printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));//4���ֽ�
//	//*pc = 'a';
//	//printf("%c\n", ch);
//	return 0;
//}

//ָ��
//��β�����ַ
// �����λ��
// 32λ 
// 32����ַ��/������
// ����͸���֮��
// 1		0
// 000000000000000000000000
// 000000000000000000000001
// 000000000000000000000010
// ....
// 011111111111111111111111
// 100000000000000000000000
// 100000000000000000000010
// ...
// 111111111111111111111111
// 64λ
// 64����ַ��/������
//int main()
//{
//	int a = 10;//4���ֽ� 
//	int* p = &a;//ȡa�ĵ�ַ
//	printf("%p\n",&a);//0033FD68 ��ַ 1100111111110101101000
//	printf("%p\n", p);
//	*p = 20;//*--->�����ò�����
//	printf("%d\n", a);
//
//	//��һ�ֱ�����������ŵ�ַ��-->ָ�����
//	
//	return 0;
//}

//#define �����ʶ������
//#define MAX 1000
//#define ���Զ����-������
//�����ķ�ʽ
// int Max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
////�궨��
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
//	int a = 10;
//	int b = 20;
//	//����
//	int max = Max(a, b);	
//	printf("max = %d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	//max = (a,b) (a>b?a:b);
//	printf("max = %d\n", max);
//	return 0;
//}
//1.static���ξֲ�����
//�ֲ��������������ڱ�ɳ�
// ������	����	˵��	��Ŀ	�ļ�	��	��ֹ��ʾ״̬
// ����	LNK2001	�޷��������ⲿ���� _g_val	
//2.static ����ȫ�ֱ��� --�ı���������
//�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//����Դ�ļ���û����ʹ����
// 3.static���κ���
// Ҳ�Ǹı��˺�����������--��׼ȷ
// static���κ����ı��˺�������������
// �ⲿ�������� -> �ڲ���������
//// �����ⲿ����
//extern int Add(int��int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("����֮��Ϊ:%d\n", sum);
//	return 0;
//}
// 
//int main()
//{
//	//extern --�����ⲿ����
//	extern int  g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

//void test()
//{
//	static int a = 0;//a��һ����̬�ľֲ�����
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int  i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//typedef--���Ͷ���-�����ض���
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}
//int
//float�ؼ���
// �����  �洢����
// �Ĵ���	register
// ���ٻ���
// �ڴ�
// Ӳ��
// 

//int main()
//{
//	//register int a = 10;//�����a����ɼĴ�������
//	int a = 10;
//	a = -2;
//	//int ����ı������з��ŵ�
//	//signed int;
//	unsigned int num = 1;
	//struct -->�ṹ��ؼ���
	//union -->������/������
//	return 0;
//}
//int main()
//{
//	//auto int a = 10;//�ֲ�����ǰ�涼���и�auto-->�Զ�����
//	return 0;
//}

//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
// ֻҪ������,�ڴ��д洢�Ķ��Ƕ����ƵĲ���
// ����---ԭ�롢���롢���붼��ͬ
// ����:  ����ǲ���
// ԭ��					-->����					-->����
// ֱ�Ӱ�������			ԭ��ķ���λ����			����+1
// д���Ķ���������		����λ��λȡ���õ�
// -2
// 1000000000000000000000000000000010--ԭ��
// 1111111111111111111111111111111101--����
// 1111111111111111111111111111111110--����
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];//[]-->�±����ò�����
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()-->�������ò�����
//	return 0;
//}
// & * . ->
//int main()
//{
//	//���������Ľϴ�ֵ
//	int num1 = 10;
//	int num2 = 20;
//	int MAX = 0;
//
//	//����������--->��Ŀ������
//	MAX = (num1 > num2 ? num1 : num2)
//	if (num1 > num2)
//	{
//		MAX = num1;
//	}
//	else
//	{
//		MAX = num2;
//	}
//	return 0;
//}