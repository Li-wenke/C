#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ṹ��
//- �ṹ�����͵�����
//- �ṹ���ʼ��
//- �ṹ���Ա����
//- �ṹ�崫��
//�ṹ�����͵�����
//�ṹ�Ļ���֪ʶ
//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı�����
	
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
////����
//struct Stu
//{
//	//�ṹ�ĳ�Ա����
//	struct B sb;
//	char name[20];//����
//	int age;//����
//	char id[20];//ѧ��
//}s1,s2;//s1��s2Ҳ�ǽṹ��ı���
//s1,s2��ȫ�ֱ���

//int main()
//{
	//s�Ǿֲ�����
//	struct Stu s = { {'W','20','3.14'},"����",20,"20210430" };//��������
	//. -> ���ʳ�Ա����
	//printf("%c\n", s.sb.c);
	//printf("%s\n", s.id);
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//	return 0;
//}

//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//����
//struct Stu
//{
//	//�ṹ�ĳ�Ա����
//	struct B sb;
//	char name[20];//����
//	int age;//����
//	char id[20];//ѧ��
//};
//void print1(struct Stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//void print2(struct Stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//int main()
//{
//	//s�Ǿֲ�����
//	struct Stu s = { {'W',20,3.14},"����",20,"20210430" };//��������
//	//дһ��������ӡs������
//	print1(s);//��ֵ����
//	print2(&s);//��ַ����
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = Add(a, b);
//	return 0;
//}


//	����

//void test()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		test();
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//���ö�ջ

//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//3
//	//1! + 2! + 3!
//	// 1   2   6 = 9
//	//1*2*..*n
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;0
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//0-9
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//����Խ����
//	//�������еĽ����ʲô��
//	//��ѭ����ӡ
//	return 0;
//}

//Ԥ����������
//ͨ������ļ��ɣ����ٴ���

//ģ��ʵ��strcpy
//strcpy - �ַ�������
#include <string.h>

//д�Ĳ���
//void my_strcpy(char* dest,char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//
//	//strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//ģ��ʵ��strcpy
//strcpy - �ַ�������
#include <assert.h>

//src ���ܵ��ڿ�ָ��
//��srcָ������ݿ����Ž�destָ��Ŀռ���
//�ӱ�����,ϣ��destָ������ݱ��޸�,srcָ������ݲ����޸�
// 
//
//char* my_strcpy(char* dest, const char* src)//constҲ�ɷ�ֹд��
//{
//	assert(src != NULL);//����
//	assert(dest != NULL);//����
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;//hello����
//	}
	//return dest;//err
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[] = "hello";
	//my_strcpy(arr1, arr2);//1.Ŀ��ռ����ʼ��ַ,2.Դ�ռ����ʼ��ַ

	//strcpy(arr1,arr2);//1.Ŀ��ռ����ʼ��ַ,2.Դ�ռ����ʼ��ַ
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ����
//	return 0;
//}

//int main()
//{
//	1.
//	int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf("%d\n", num);
//
//	2.
//	const���α���,�����������Ϊ�����������ܱ��޸ģ��������ϻ��Ǳ���
//	
//	const int num = 10;
//	num=20;//err
//	 int* const p = &num;
//	int n = 100;
//	int* p = &num;
//	const����ָ�������ʱ��
//	const�������*�ұ����ε���*p,��ʾָ��������ܱ��ı�
//	 	   ����ָ��ָ�������,���Ա��ı�
//	*p = 20;
//	p = &n;//err
//
//	const int num = 10;
//	num=20;//err
//	const int* p = &num;
//	int n = 100;
//	int* p = &num;
//	const����ָ�������ʱ��
//	const�������*������ε���*p,��ʾָ��ָ������ݣ��ǲ���ͨ��ָ�����ı��
//	 	   ����ָ����������ǿ����޸ĵ�
//	*p = 20;
//	p = &n;
//
//	printf("%d\n", num);
//	return 0;
//}

//strlen �����ַ������� ����\0
//my_strlen
//1.const
//2.assert
#include <assert.h>
//int my_strlen(const char* arr)
//{
//	assert(arr);
//	int count = 0;
//	while (*arr++)
//	{
//		count++;
//	}
//	return count;
//}
// size_t unsigned int
//size_t mystrlen(const char* arr)
//{
//	assert(arr);
//	size_t count = 0;
//	while (*arr++)
//	{
//		count++;
//	}
//	return count;
//}
//�����ⲿ����
extern size_t my_strlen(const char* str);
int main()
{
	char arr[] = "hello world";
	int sz = my_strlen(arr);
	printf("�ַ�������Ϊ:%d\n",sz);
	return 0;
}
//Ҫ��������žͲ�����
//Ҫ������д����
//�޷��������ⲿ���� _my_strlen������ _main �������˸÷���
