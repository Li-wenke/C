#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Ԥ����
//Ԥ�������  ��Ԥ����׶α�������Ѿ�����õķ���  ��Щ���ſ���ֱ������ʹ��
//__FILE__ //���б����Դ�ļ�
//__LINE__ //�ļ���ǰ���к�
//__DATE__ //�ļ������������
//__TIME__ //�ļ��������ʱ��
//__STDC__ //�����������ѭANSI C����ֵΪ1������δ����

//int main()
//{
//	printf("%s\n", __FILE__);//�ļ���
//	printf("%d\n", __LINE__);//�����к�
//	printf("%s\n", __DATE__);//����
//	printf("%s\n", __TIME__);//ʱ��
//	printf("%s\n", __FUNCTION__);//main
//	//printf("%d\n", __STDC__);//��֧��
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	FILE* pf = fopen("log.txt", "a+");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "%s %d %s %s %d", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#define 
//#define  -- ��ʶ��
//#define M 1000
//#define reg register //�ؼ��������
//#define do_forever for(;;) 
//#define MAX 1000
//#define reg register //Ϊ register����ؼ��֣�����һ����̵�����
//#define do_forever for(;;) //�ø�����ķ������滻һ��ʵ��
//#define CASE break;case //��дcase����ʱ���Զ��� breakд�ϡ�
// �������� stuff���������Էֳɼ���д���������һ���⣬ÿ�еĺ��涼��һ����б��(���з�)��
//#define DEBUG_PRINT printf("file:%s\tline:%d\t \
//							date:%s\ttime:%s\n" ,\
//							__FILE__,__LINE__ , \
//							__DATE__,__TIME__ )


//int main()
//{
//	reg int num = 0;
//	do_forever;
//	int m = M;
//	printf("%d\n", m);
//	return 0;
//}
//#define CASE break;case
//int main()
//{
//	int n = 0;
//	switch (n)
//	{
//	case 1:
//	CASE 2:
//	CASE 3:
//	}
//	return 0;
//}

//�������ʱ�����ü�;
//#define M 1000
//int main()
//{
//	//int m = M;
//	int a = 10;
//	int b = 0;
//	if (a > 10)
//		b = M;
//	else
//		b = -M;
//	return 0;
//}

//#define �����
// ���ź���Ҫ
//#define ���ư�����һ���涨������Ѳ����滻���ı��У�����ʵ��ͨ����Ϊ�꣨macro������꣨define macro����
//#define name( parament-list ) stuff  name������� (����)����
// �����б�������ű�����name���ڡ�

//#define SQUARE(X) X*X
////#define SQUARE(X) (X)*(X)
//#define DOUBLE(x) (x)+(x)
////#define DOUBLE(x) ((x)+(x))
//
//int main()
//{
//	printf("%d\n", SQUARE(3));//9
//	printf("%d\n", SQUARE(3 + 1));//3 + 1 * 3 + 1 
//	printf("%d\n", 3 + 1 * 3 + 1);
//	printf("%d\n", 10 * DOUBLE(4));//44
//	printf("%d\n", 10 * (4)+(4));//44
//	//printf("%d\n", 3 * 3);
//	return 0;
//}

//#define �滻����
//�ڳ�������չ#define������źͺ�ʱ����Ҫ�漰�������衣
//1. �ڵ��ú�ʱ�����ȶԲ������м�飬�����Ƿ�����κ���#define����ķ��š�����ǣ��������ȱ��滻��
//2. �滻�ı���󱻲��뵽������ԭ���ı���λ�á����ں꣬�����������ǵ�ֵ�滻��
//3. ����ٴζԽ���ļ�����ɨ�裬�������Ƿ�����κ���#define����ķ��š�����ǣ����ظ�����������̡�
//ע�⣺
//1. �������#define �����п��Գ�������#define����ı��������Ƕ��ں꣬���ܳ��ֵݹ顣
//2. ��Ԥ����������#define����ķ��ŵ�ʱ���ַ������������ݲ�����������

//#define M 100
//#define MAX(X,Y) ((X>Y)?(X):(Y))
//int main()
//{
//	int max = MAX(101, M);
//	//1.int max = MAX(101, 100);
//	//2.int max = (101,100) ((101>100)?(101):(100));
//	printf("M = %d\n", M);
//	return 0;
//}

//#��##
//#���԰Ѳ������뵽�ַ�����  ��һ���������ɶ�Ӧ���ַ���
//void print(int x)
//{
//	printf("the value of is %d\n", x);
//}

//#define print(x,FORMAT) printf("the value of "#x" is "FORMAT"\n",x);
//int main()
//{
//	//printf("hello world\n");
//	//printf("hello " "world\n");
//	int a = 10;
//	print(a,"%d");
//	printf("the value of ""a"" is %d\n", a);
//	//the value of a is 10
//	int b = 20;
//	print(b,"%d");
//	printf("the value of ""b"" is %d\n", b);
//	//the value of b is 20
//	int c = 30;
//	print(c,"%d");
//	printf("the value of ""c"" is %d\n", c);
//	//the value of c is 30
//	float f = 5.5f;
//	//the value of f is 5.5f
//	print(f, "%f");
//	printf("the value of " "f" " is " "%f" "\n", f);
//	return 0;
//}

//##  ���԰�λ�������ߵķ��źϳ�һ�����š� ������궨��ӷ�����ı�Ƭ�δ�����ʶ��
//#define CAT(X,Y) X##Y
//int main()
//{
//	int class171 = 100;
//	printf("%d\n", CAT(class,171));
//	printf("%d\n", class171);//�������źϳ�һ������
//	return 0;
//}


//�������õĺ����  �����þ��Ǳ��ʽ��ֵ��ʱ����ֵ�������Ч��
//#define MAX(X,Y) ((X) > (Y) ? X : Y )
//int main()
//{
//	int a = 5;
//	int b = 9;
//	int m = MAX(a++, b++);
//	//  m = ((a++)>(b++)? a++:b++)
//	printf("%d\n", m);
//	return 0;
//}

//��ͺ���
// �ŵ�:
//���ڵ��ú����ʹӺ������صĴ�����ܱ�ʵ��ִ�����С�ͼ��㹤������Ҫ��ʱ����ࡣ
//���Ժ�Ⱥ����ڳ���Ĺ�ģ���ٶȷ����ʤһ��
//��Ϊ��Ҫ���Ǻ����Ĳ�����������Ϊ�ض������͡����Ժ���ֻ�������ͺ��ʵı��ʽ��ʹ�á�
//��֮��������������������Ρ������͡������͵ȿ������� > ���Ƚϵ����͡����������޹ص�
//ȱ��:
//��Ȼ�ͺ���Ⱥ���Ҳ�����Ƶĵط���
//1. ÿ��ʹ�ú��ʱ��һ�ݺ궨��Ĵ��뽫���뵽�����С����Ǻ�Ƚ϶̣�������ܴ�������ӳ���ĳ��ȡ�
//2. ����û�����Եġ�
//3. �����������޹أ�Ҳ�Ͳ����Ͻ���
//4. ����ܻ������������ȼ������⣬���³����׳��ִ�
// 
//����ʱ����������������������顣���磺��Ĳ������Գ������ͣ����Ǻ���������
// 
//����Լ��
//һ�����������ĺ��ʹ���﷨�����ơ��������Ա���û�����������ֶ��ߡ� ������ƽʱ��һ��ϰ���ǣ�
//�Ѻ���ȫ����д ��������Ҫȫ����д
//#define MAX(a, b) ((a)>(b)?(a):(b))
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 5;
//	int b = 8;
//	int m = MAX(a, b);
//	//int m = ((a)>(b)?(a):(b));
//	m = Max(a, b);
//	return 0;
//}

//����ʱ����������������������顣���磺��Ĳ������Գ������ͣ����Ǻ���������
//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	//malloc(10 * sizeof(int));
//	//malloc(10, int);
//	int* p = MALLOC(10, int);// --> (int*)malloc(10*sizeof(int))
//	return 0;
//}

//#undef
//����ָ�������Ƴ�һ���궨��
//#define M 100
//int main()
//{
//	int a = M;
//#undef M
//	printf("%d\n", M);
//	return 0;
//}

//��������
//���������ͱ���
//�ڱ���һ�������ʱ���������Ҫ��һ����䣨һ����䣩������߷����Ǻܷ���ġ���Ϊ��������������ָ��

//#define PRINT
//int main()
//{
//#ifdef PRINT
//		printf("hello world\n");
//#endif // PRINT
//	return 0;
//}

//#if �������ʽ
//	//...
//#endif
////�������ʽ��Ԥ��������ֵ��
//�磺
//#define __DEBUG__ 1
//#if __DEBUG__
//		//..
//#endif
//2.�����֧����������
//#if �������ʽ
//		//...
//#elif �������ʽ
//		//...
//#else
//		//...
//#endif
//3.�ж��Ƿ񱻶���
//#if defined(symbol)
//#ifdef symbol
//#if !defined(symbol)
//#ifndef symbol
//4.Ƕ��ָ��
//#if defined(OS_UNIX)
//		#ifdef OPTION1
//			unix_version_option1();
//#endif
//		#ifdef OPTION2
//			unix_version_option2();
//		#endif
//#elif defined(OS_MSDOS)
//			#ifdef OPTION2
//				msdos_version_option2();
//			#endif
//#endif

#if 0

#define PRINT 1
int main()
{
#if PRINT
	printf("hello world\n");
#endif
	return 0;
}
#endif

//int main()
//{
//#if 1==2
//	printf("hehe\n");
//#elif 2==2
//	printf("haha\n");
//#else
//	printf("heihei\n");
//#endif
//	return 0;
//}

//#define TEST 
//#define HEHE
//int main()
//{
//	//���TEST���������������붨��
//	//1
//#ifdef TEST
//	printf("test\n");
//#endif
//	//2
//#if defined(TEST)
//	printf("TEST\n");
//#endif
//	//���HEHE������ ����������
//	//3
//#ifndef HEHE
//	printf("HEHE\n");
//#endif
//	//4
//#if !defined(HEHE)
//	printf("hehe\n");
//#endif
//	return 0;
//}

//�ļ�����
//���ļ�����		<>
//�����ļ�����	""	
//""-->����Դ�ļ�����Ŀ¼�²��ң������ͷ�ļ�δ�ҵ���
//������������ҿ⺯��ͷ�ļ�һ���ڱ�׼λ�ò���ͷ�ļ��� ����Ҳ�������ʾ�������
//	<> �� "" ����ͷ�ļ��ı���������:���Ҳ��Ե�����
//Ƕ���ļ�����
//Ϊ�˽��ͷ�ļ��ظ�:��������
//��ÿ��ͷ�ļ���ͷд:
//#ifndef __TEST_H__
//#define __TEST_H__
////ͷ�ļ�������
//#endif //__TEST_H__
//����	#pragma once
//����Ԥ����ָ��
//#include  #define #if #endif #ifdef #ifndef  #else #elif #undef #error #pragma #line
//		#pragma	pack()ȡ��������	 #pragma pack(4)�ı�Ĭ�϶����� #pragma comment()
int main()
{

	return 0;
}