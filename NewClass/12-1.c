#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��̬�ڴ����
// 
//֮ǰѧ����֪ʶ�����ڴ��Ͽ��ٿռ䶼�������Ƶ�
//1. �ռ俪�ٴ�С�ǹ̶��ġ�
//2. ������������ʱ�򣬱���ָ������ĳ��ȣ�������Ҫ���ڴ��ڱ���ʱ����
//��ʱ�򿪱ٿռ���ˣ���ʱ�򿪱ٿռ�С��  ������Ҫһ�����Ըı俪�ٺ�Ŀռ��С���ֶ�  -->��̬�ڴ����
//��̬�ڴ濪��
//�ڴ��Ϊ ջ������������̬��(���ݶ�)
//ջ��   --> �ֲ������������β�    ���ٿռ�����
//����   --> ��̬�ڴ濪�� ���ٺ��� --> malloc  free  realloc  calloc  
//��̬�� --> ȫ�ֱ��� ��̬����

//��̬�ڴ濪��
//malloc --> ͷ�ļ�  stdlib.h
//void* malloc (size_t size);
//1. ������ٳɹ����򷵻�һ��ָ�򿪱ٺÿռ��ָ�롣
//2. �������ʧ�ܣ��򷵻�һ��NULLָ�룬���malloc�ķ���ֵһ��Ҫ����顣
//3. ����ֵ�������� void* ������malloc��������֪�����ٿռ�����ͣ�������ʹ�õ�ʱ��ʹ�����Լ���������
//4. ������� size Ϊ0��malloc����Ϊ�Ǳ�׼��δ����ģ�ȡ���ڱ�����
//free ��̬�ڴ���ͷźͻ��յ�
//void free(void* ptr);
//1. ������� ptr ָ��Ŀռ䲻�Ƕ�̬���ٵģ���free��������Ϊ��δ����ġ�
//2. ������� ptr ��NULLָ�룬����ʲô�¶�������
#include <stdlib.h>
//int main()
//{
//	//����10�����͵Ŀռ� -- 10 * sizeof(int)
//	//int arr[10];//��ŵ�ջ��
//	//��̬�ڴ濪��
//	int* p = (int*)malloc(1000000000000000 * sizeof(int));//mallocĬ�Ϸ���ֵ��void*
//	//ʹ����Щ�ռ��ʱ��
//	if (p == NULL)
//	{
//		perror("malloc���ٿռ�ʧ��");
//		return;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i+1;
//		printf("%d ", *(p + i));//p[i] == *( p + i);
//	}
//	//ʹ�������տռ�
//	free(p);
//	p = NULL;//�Լ��ֶ���ΪNULL
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);//err �����
//	return 0;
//}

// malloc �� free Ҫ�ɶԳ���

//calloc  -- ��̬�ڴ����
//void* calloc(size_t num, size_t size);
//1. �����Ĺ�����Ϊ num ����СΪ size ��Ԫ�ؿ���һ��ռ䣬���Ұѿռ��ÿ���ֽڳ�ʼ��Ϊ0��
//2. �뺯�� malloc ������ֻ���� calloc ���ڷ��ص�ַ֮ǰ������Ŀռ��ÿ���ֽڳ�ʼ��Ϊȫ0
//calloc��malloc����:
//1. ������ͬ
//2. calloc���ʼ�����ݶ�malloc����

//int main()
//{
//	//int*p = (int*)malloc(40);
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));//p[i] == *(p+i);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc  -- ��̬�ڴ����	realloc����ʹ��ʱҲ��ʵ��malloc��Ч��
//void* realloc (void* ptr, size_t size);
//1.realloc�����ĳ����ö�̬�ڴ���������
//2.��ʱ�����Ƿ��ֹ�ȥ����Ŀռ�̫С�ˣ���ʱ�������ֻ��������Ŀռ�����ˣ���Ϊ�˺����ʱ���ڴ棬
//  ����һ������ڴ�Ĵ�С�����ĵ������� realloc �����Ϳ��������Զ�̬�����ڴ��С�ĵ���

//realloc�ڵ����ڴ�ռ���Ǵ������������
//���1��ԭ�пռ�֮�����㹻��Ŀռ�
//���2��ԭ�пռ�֮��û���㹻��Ŀռ�
//�������1 ��ʱ��Ҫ��չ�ڴ��ֱ��ԭ���ڴ�֮��ֱ��׷�ӿռ䣬ԭ���ռ�����ݲ������仯
//�������2 ��ʱ��ԭ�пռ�֮��û���㹻��Ŀռ�ʱ��
//��չ�ķ����ǣ��ڶѿռ�������һ�����ʴ�С�������ռ���ʹ�á������������ص���һ���µ��ڴ��ַ

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 5;
//	}
//	//��Ҫpָ��Ŀռ����,��Ҫ20int�Ŀռ�
//	//realloc�����ռ�
//	int* pc = (int*)realloc(p, 20 * sizeof(int));
//	if (pc != NULL)
//	{
//		p = pc;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 5;
//	}
//	free(p);
//	pc = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)realloc(NULL, 40);//���﹦������malloc ����40���ֽڵĿռ�
//	return 0;
//}

//��̬�ڴ濪�ٳ�������
//1. ��NULLָ��Ľ����ò���
//2. �Զ�̬���ٿռ��Խ�����
//3. �ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//4. ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//5. ��ͬһ�鶯̬�ڴ����ͷ�
//6. ��̬�����ڴ������ͷ�(�ڴ�й©)
//�����ͷŲ���ʹ�õĶ�̬���ٵĿռ������ڴ�й©�� �мǣ� ��̬���ٵĿռ�һ��Ҫ�ͷţ�������ȷ�ͷ�

//1. ��NULLָ��Ľ����ò���
//int main()
//{
//	int* p = (int*)malloc(10000000000000000000);
//	//��malloc�����ķ���ֵҪ���пմ���
//	//�����������Ҫ�ж�һ��
//	//if (p == NULL)
//	//{
//	//	perror("malloc");
//	//	return;
//	//}
//	int  i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}

//2. �Զ�̬���ٿռ��Խ�����
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));//40���ֽ� 10������
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 40; i++)
//	{
//		*(p + i) = i;//����Խ�����
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//3. �ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//int main()
//{
//	int arr[10] = { 0 };//�����ջ����
//	int* p = &arr;
//	int* pc = (int*)malloc(10 * sizeof(int));
//	//ʹ��
//	if (pc == NULL)
//	{
//		peeror("malloc");
//		return;
//	}
//	free(p);//ָ��������
//	p = NULL;
//	return 0;
//}

//4. ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;
//	}
//	free(p); //p����ָ��̬�ڴ����ʼλ��
//	p=NULL:
//	return 0;
//}

//5. ��ͬһ�鶯̬�ڴ����ͷ�
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	//ʹ��
//	//�ͷ�
//	free(p);
//	p = NULL;//��Ϊ�վͲ�����ֶ�ͬһ�鶯̬�ڴ����ͷ�
//	free(p);//�ظ��ͷ�
//	return 0;
//}

//6. ��̬�����ڴ������ͷ�(�ڴ�й©)  
//	��̬���ٵĿռ���շ�ʽ  1.����free  2.�������
//void test()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return;
//	}
//	//ʹ��
//}
//int main()
//{
//	test();
//	//�������ĳ������
//	return 0;
//}
#include <string.h>
//  str����ʱ��ֵ���� ����GerMemory�����β���str����ʱ����
//	��GetMemory�����ж�̬�����ڴ�ĵ�ַ �Ǹ���p����  ����Ӱ���ⲿ��str
//	���Ե�GetMemory��������֮��str��Ȼ��NULL������strcpy��ʧ�� 
//  ��GetMemory��������֮���β�p������,���¶�̬���ٵ�100�ֽڿռ�����ڴ�й©�޷��ͷ�
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);//�ڴ�й©
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}
//�޸�
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	if(p==NULL)
//	{
//		return;
//	}
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//char* GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//	if (*p == NULL)
//	{
//		return;
//	}
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//  GetMemory�����ڲ�������������ջ���Ͽ��ٵ� 
//	���˺���p����Ŀռ�ͻ����˲���ϵͳ ���صĵ�ַ��û��ʵ�������
//	���ͨ�����صĵ�ַȥ�����ڴ���ǷǷ������ڴ�
//	����ջ�ռ��ַ������
//char* GetMemory(void)
//{
//	char p[] = "hello world";//�ֲ��������˺������Զ�������
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//	û��free�ͷ��ڴ� /*free(str);str = NULL;*/
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//	free�Ѿ��ͷŹ��ڴ���,����û����Ϊ��,���滹�����ָ�����
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	//str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}

//	��������
//C99 �У��ṹ�е����һ��Ԫ��������δ֪��С�����飬��ͽ������������须��Ա��

//struct S
//{
//	int n;
//	int arr[];//��С��δ֪��
//	//arr����������
//};
//struct N
//{
//	int n;
//	int arr[0];//��С��δ֪��
//	//arr����������
//};

//����������ص㣺
//�ṹ�е����������Աǰ���������һ��������Ա��
//sizeof ���ص����ֽṹ��С����������������ڴ档
//�������������Ա�Ľṹ��malloc()���������ڴ�Ķ�̬���䣬
//���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С

//struct N
//{
//	int n;
//	int arr[0];//��С��δ֪��
//	//arr����������
//};
//int main()
//{
//	//struct N s = { 0 };
//	//printf("%d\n", sizeof(s));//? sizeof ���ص����ֽṹ��С��������������Ĵ�С
//	//����arr�Ĵ�С��10������
//	struct N* p = (struct N*)malloc(sizeof(struct N) + 10 * sizeof(int));
//	if (p == NULL)
//	{
//		return;
//	}
//	//ʹ��
//	p->n = 10;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i + 1;
//	}
//	//����
//	struct N* str = (struct N*)realloc(p, sizeof(struct N) + 20 * sizeof(int));
//	if (str != NULL)
//	{
//		p = str;
//	}
//	//ʹ��
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//�Լ����������ַ�����
//struct S
//{
//	int n;
//	char arr[0];//��С��δ֪��
//	//arr����������
//}s;
//int main()
//{
//	struct S* p = (struct S*)malloc(sizeof(struct S) + 20 * sizeof(char));
//	if (p == NULL)
//	{
//		return;
//	}
//	//ʹ��
//	p->n = 10;
//	scanf("%s", p->arr);
//	printf("%s", p->arr);
//	free(p);
//	p = NULL;
//	return 0;
//}

//��������
//��һ���ô��ǣ������ڴ��ͷ�
//�ڶ����ô��ǣ����������ڷ����ٶ�

struct S
{
	int i;
	int* arr;
};
int main()
{
	struct S* p = (struct S*)malloc(sizeof(struct S));
	if (p == NULL)
	{
		perror("malloc");
		return;
	}
	p->i=10;
	//
	p->arr = (int*)malloc(10 * sizeof(int));
	if (p->arr == NULL )
	{
		return;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p->arr + i) = i + 1;
	}
	//����
	int* pc = (int*)realloc(p->arr, 20 * sizeof(int));
	if (pc != NULL)
	{
		p->arr = pc;
	}
	free(p->arr);
	p->arr = NULL;
	free(p);
	p = NULL;
	return 0;
}