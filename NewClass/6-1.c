#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ָ��
//�ڼ������ѧ�У�ָ�루Pointer���Ǳ�������е�һ���������õ�ַ������ֱֵ��ָ��
//��points to�����ڵ��Դ洢������һ���ط���ֵ������ͨ����ַ���ҵ�����ı�����Ԫ������
//˵����ַָ��ñ�����Ԫ����ˣ�����ַ���󻯵ĳ�Ϊ��ָ�롱����˼��ͨ�������ҵ�����Ϊ��ַ
//���ڴ浥Ԫ��

//ָ��
//ָ���Ǹ�����������ڴ浥Ԫ�ĵ�ַ����ţ���

//int main()
//{
//	int a = 10;//aռ4���ֽ� -
//	int *pa = &a;//�õ�����a��4���ֽ��е�һ���ֽڵĵ�ַ
//	*pa = 20;//ͨ���ҵ�a�ĵ�ַ�ҵ�aȻ���ֵ pa��ָ�����
//	return 0;
//}
//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
	//ָ���С
//	printf("%d\n", sizeof(pa));//4
//	printf("%d\n", sizeof(pc));//4
//	printf("%d\n", sizeof(pf));//4
//	return 0;
//}

//ָ�����͵�����
//1. ָ�����;����ˣ�ָ������õ�Ȩ���ж��
//2. ָ�����;����ˣ�ָ����һ�������߶�Զ��������

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
	//0 1 2 3 4 5 6 7 8 9 a b c d e f
	//11111111
	//    8421
	//
	//int a = 0x11223344;
	//char* pc = &a;
	//*pc = 0;
	/*int* pa = &a;
	*pa = 0;*/
//	return 0;
//}

//ϣ��һ���ֽ�һ���ֽڷ��� ������char���͵�ָ��
//һ������һ�����ͷ��� ������int���͵�ָ��
//����double���ͷ��ʿ�����double���͵�ָ��
//int main()
//{
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i)=1;//��ʵ���±�Ϊi�ĵ�ַ
//	}
//	return 0;
//}

//Ұָ��
//Ұָ�����ָ��ָ���λ���ǲ���֪�ģ�����ġ�����ȷ�ġ�û����ȷ���Ƶ�)

//Ұָ�����

//1. ָ��δ��ʼ��

//int main()
//{
	//p -> Ұָ��
//	int* p;//p��һ���ֲ���ָ�����, �ֲ���������ʼ���Ļ�,Ĭ�������ֵ
//	*p = 20;//�Ƿ������ڴ�
	//ʹ����δ��ʼ���ľֲ����� p
	//ʹ��δ��ʼ�����ڴ� p
	//err
//	return 0;
//}

//2.ָ��Խ�����

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//		*p = i;
//		p++;
//	}
//	return 0;
//}

//3.ָ��ָ��Ŀռ��ͷ�

//int* test()
//{
//	int a = 10;//�������ú����a������
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

//��ι��Ұָ��
//1. ָ���ʼ��
//2. С��ָ��Խ��
//3. ָ��ָ��ռ��ͷż�ʱ��NULL
//4. ָ��ʹ��֮ǰ�����Ч��

//1. ָ���ʼ��
//int main()
//{
//	//��ǰ��֪��pӦ�ó�ʼ��Ϊʲô��ַ��ʱ��ֱ�ӳ�ʼ��ΪNULL
//	//int* p = NULL;//NULL -> stdio.h   �������Ϊ��ָ����?
//	#ifndef NULL
//	#ifdef __cplusplus
//	#define NULL 0
//	#else
//	#define NULL ((void *)0)
//	#endif
//	//��ȷ֪����ʼ����ֵ
//	//int a = 10;
//	//int* ptr = &a;
//	//C���Ա����ǲ��������ݵ�Խ����Ϊ��
//	int* p = NULL;
//
//	if(p != NULL)
//		*p = 10;
//
//	return 0;
//}

//ָ������

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}

//ָ��Ĺ�ϵ����

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char c[5];
//	//ָ���ָ�������ǰ�᣺
//	//����ָ��ָ��ͬһ��ռ�
//	printf("%d\n", &arr[9] - &c[0]);//err �ӡ�char *������int *�������Ͳ�����
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}

#include <string.h>
//������
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
// �ݹ�
//int my_strlen(char* str)
//{
//	if ('\0' != *str)
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//ָ��-ָ��
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	//strlen(); - ���ַ�������
//	//�ݹ�
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//
//	return 0;
//}

//ָ�������

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n",arr);//��������������Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p <==> %p\n", &arr[i], p + i);
		//*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//������
	//[ ]�ǲ�����  2��arr������������
//	printf("%d \n", 2[arr]);
//	printf("%d \n", arr[2]);
//	printf("%d \n", 2[p]);//p[2] --> *(p+2)
	//arr[2] --> *(arr+2) --> *(2+arr) --> 2[arr]
	//arr[2]<==> *(arr+2) <==> *(p+2) <==> *(2+p) <==> *(2+arr) == 2[arr]
	//2[arr] <==> *(2+arr)
//	return 0;
//}

//	����ָ��

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��ָ�����,һ��ָ��
	//pa;//paҲ�Ǳ���,&paȡ��pa���ڴ�����ʼ��ַ
//	int** ppa = &pa;//����ָ�����
//	return 0;
//}

//ָ������

int main()
{
	int arr[10];//�������� - ������ε����������������
	char ch[5];//�ַ����� - ��ŵ����ַ�
	//ָ������ - ���ָ�������
	int* parr[5];//����ָ�������
	char* pch[5];
	return 0;
}