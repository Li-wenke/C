#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//int main()
//{
	//1.���ַ�������ʱ��������'\0'֮ǰ���ַ�������������'\0'  2.������Ҫ��'\0'�������ַ�������
	//char arr[] = "abcd";  
//	char arr[] = { 'a','b','c'};
//	int len = strlen(arr);
//	printf("strlen(arr) = %d\n", len);
//	return 0;
//}

//ģ��ʵ��strlen

//1.�������İ汾
//int my_strlen(const char* str)//ָ�뱻const������ ָ����ָ������ݲ��ܱ��ı���
//{
//	//����ʹ����ָ����������assert����
//	assert(str);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//2.�ݹ�汾
//int my_strlen(const char* str)
//{
//	assert(str);
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//3.ָ�� - ָ��汾 
//unsigned int my_strlen(const char* str)
//{
//	assert(str);
//	char* dst = str;
//	while (*dst != '\0')
//	{
//		dst++;
//	}
//	return  dst- str;
//}
//int main()
//{
//	char arr[] = "abcde";
//	int len = my_strlen(arr);
//	printf("my_strlen(arr) = %d\n", len);
//	return 0;
//}

//�ַ����Ѿ� '\0' ��Ϊ������־��strlen�������ص������ַ����� '\0' ǰ����ֵ��ַ������������� '\0' )��
//����ָ����ַ�������Ҫ�� '\0' ������
//ע�⺯���ķ���ֵΪsize_t�����޷��ŵģ� �״� ��

//strlen    �⺯��
//size_t strlen(const char* str);

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}


//strcpy

//char* strcpy(char* destination, const char* source);
//					  Ŀ�ĵ�                   Դͷ
//Դ�ַ��������� '\0' ������Դ�ַ����б������'\0'
//�ὫԴ�ַ����е� '\0' ������Ŀ��ռ䡣
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ�����
//Ŀ��ռ����ɱ䡣

//int main()
//{
//	char* str[] = "xxxxxxxxxxxxxxxxxxx";
	//char arr[5] = { 0 };
	//arr = "hello";//err   arr����Ԫ�ص�ַ ��ַ�Ǹ���ţ�Ҫ��hello�ŵ��������� ��϶����� ��������ָ��Ŀռ�ſ���
	//char* p = "hello";//�����ʵ�ǰ��ַ������ַ�'h'�ĵ�ַ�ŵ�pָ�������ȥ
	//strcpy(arr,"hello");//string copy   "hello"���δ���ȥ����'h'�ĵ�ַ
	//char arr2[] = { 'a','b','c' };//����ַ�������û��'\0' 
	//strcpy(arr, arr2);//����� ��Խ��ȥ��'\0'
	//char* p = "hello world";
	//strcpy(arr, p);�ᱨ�� ��ΪĿ��ռ��Դ�ַ���ҪС
	//strlen(str, p);//Ŀ��ռ䲻�ɸı����Գ���ᱨ��
	//printf("%s\n", str);
	//printf("arr = %s\n", arr);
//	return 0;
//}

//ģ��ʵ��strcpy

//my_strcpy( char* dst, const char* str)
//{
//	assert(dst);
//	assert(str);
//	while (*str != '\0')
//	{
//		*dst = *str;
//		dst++;
//		str++;
//	}
//	*dst = *str;
//}
 
//void my_strcpy(char* dst, const char* str)
//{
//	assert(dst);
//	assert(str);
//	while (*dst++ = *str++)
//	{
//		;
//	}
//}

//char* my_strcpy(char* dst, const char* str)
//{
//	assert(dst);
//	assert(str);
//	char* ret = dst;
//	while (*dst++ = *str++)
//	{
//		;
//	}
//	return ret;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	char* p = "helloworld";
//	//my_strcpy(arr, p);
//	printf("my_strcpy(arr,p) = %s\n", my_strcpy(arr, p));
//	return 0;
//}

//strcat

//char* strcat(char* destination, const char* source);
//						Ŀ�ĵ�					Դͷ

//Դ�ַ��������� '\0' ������
//Ŀ��ռ�������㹻�Ĵ���������Դ�ַ���������
//Ŀ��ռ�����ǿ��Ըı��

//char* my_strcat(char* dst,const char* src)
//{
//	assert(dst);
//	assert(src);
//	char* dest = dst;
//	do
//	{
//		dest++;
//	} while (*dest);
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	return dest;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	//1.�ҵ�Ŀ���ַ����е�'\0'
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.׷��Դ�ַ���
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}

//int main()
//{
//	char arr1[20] = "hello ";//׷��world
//	char arr2[] = "world";
	//strcat(arr1, arr2);//�ַ���׷�ӣ����ӣ�
	//printf("%s\n", strcat(arr1, arr2));
//	my_strcat(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr[20] = "abcd";
//	strcat(arr, arr);//?  no
//	printf("%s\n", arr);
//	return 0;
//}

//strcmp
//int strcmp(const char* str1, const char* str2);

//int main()
//{
//	char* p = "obc";
//	char* q = "abcdef";
//	if (p > q)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	//if ("obc" > "abcdef")
//	//{
//
//	//}
//	//strcmp - �ַ����Ƚϴ�С��
//	//int ret = strcmp("abbb", "abq");//<0
//	int ret = strcmp("aaa", "aaa");
//	printf("%d\n", ret);
//
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//1.�ȱȽϵ�һ���ַ���ASCII��ֵ
//	//2.�������Ǿͼ�������ȴ�С
//	while ((str1!='\0') &&(*str2 != '\0'))
//	{
//		if (*str1 > *str2)
//		{
//			return 1;
//		}
//		else if (*str1 < *str2)
//		{
//			return -1;
//		}
//		else
//		{
//			str1++;
//			str2++;
//		}
//	}
//	return 0;
//}

//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	char* p = "abr";
//	char* s = "abqdef";
//	//strcmp�Ƚ��ַ����Ĵ�С �ȵ��Ƕ�Ӧ�ַ�����Ӧ��ASCII��ֵ�Ĵ�С
//	int ret = my_strcmp(p, s);
//	if (ret > 0)
//	{
//		printf("p > q\n");
//	}
//	else if (ret < 0)
//	{
//		printf("p < q\n");
//	}
//	else
//	{
//		printf("p = q\n");
//	}
//	return 0;
//}

//���Ȳ������Ƶ��ַ�������
//strcpy
//strcat
//strcmp

//���������Ƶ��ַ�����������
//strncpy
//strncat
//strncmp

//strncpy
//char* strncpy(char* destination, const char* source, size_t num);
//����num���ַ���Դ�ַ�����Ŀ��ռ䡣
//���Դ�ַ����ĳ���С��num���򿽱���Դ�ַ���֮����Ŀ��ĺ��׷��0��ֱ��num��


//int main()
//{
//	char arr1[20] = "abcdefghi";
//	char arr2[] = "qwer";
//	strncpy(arr1, arr2, 2);
//	//strncpy(arr1, arr2, 6);
//	//strcpy(arr1, arr2);
//	printf("%s\n", arr1);//qwcdef
//	return 0;
//}

//strncat
//char * strncat ( char * destination, const char * source, size_t num );
//׷��n���ַ�	

//int  main()
//{
//	char arr1[20] = "hello ";
//	                //hello wor\0
//	char arr2[] = "world";
//	strncat(arr1, arr2, 10);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//strncmp
//int strncmp ( const char * str1, const char * str2, size_t num );
//�Ƚ�ǳn���ַ����Ĵ�С

//int main()
//{
//	char* p = "abcdef";
//	char* q = "abcqwert";
//	//int ret = strcmp(p, q);
//	int ret = strncmp(p, q,4);
//	printf("%d\n", ret);
//
//	return 0;
//}

//strstr
//char * strstr ( const char *, const char * );
//�ж�arr2�Ƿ�Ϊarr1���Ӵ�

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*cp != '\0')
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && (* s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "abcdeefg";
//	char arr2[] = "dee";
//	//��arr1�в����Ƿ����arr2����
//	//char* ret = strstr(arr1, arr2);
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ���-->%s\n",ret);
//	}
//	return 0;
//}

//KMP�㷨 -- �ַ����в����㷨

//zpw@bitedu.tech
//zpw 
//bitedu
//tech
//192.168.3.122
//192
//168
//3
//122

//strtok
//char * strtok ( char * str, const char * sep );
//sep�����Ǹ��ַ����������������ָ������ַ�����
//��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ�ı�ǡ�
//strtok�����ҵ�str�е���һ����ǣ��������� \0 ��β������һ��ָ�������ǵ�ָ�롣
//strtok������ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ġ�
//strtok�����ĵ�һ��������Ϊ NULL ���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ��
//strtok�����ĵ�һ������Ϊ NULL ����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����ǡ�

//zpw@bitedu.tech
//@.  �ָ���

//int main()
//{
//	char arr[] = "zpw@bitedu.tech";
//	char* p = "@.";
//	char arr2[20] = { 0 };
//	strcpy(arr2, arr);
//	//zpw\0bitedu\0tech\0	
//	char* ret = NULL;
//	for (ret = strtok(arr2, p); ret != NULL;ret = strtok(NULL,p))
//	{
//		printf("%s\t", ret);
//	}
	//ret = strtok(arr2, p);
	//printf("%s\n", ret);
	//ret = strtok(NULL, p);
	//printf("%s\n", ret);
	//ret = strtok(NULL, p);
	//printf("%s\n", ret);
//	return 0;
//}

//ʹ�ÿ⺯����ʱ��
//���ÿ⺯��ʧ�ܵ�ʱ�򣬶������ô�����
//ȫ�ֵĴ�����
//int errno;//5
//perror     -- ��ӡ������Ϣ    1.���ȰѴ�����ת���ɴ�����Ϣ��2.��ӡ������Ϣ(�����Զ������Ϣ)
//strrerror  -- �Ѵ�����ת���ɴ�����Ϣ
//char* strerror(int errnum);
//���ش����룬����Ӧ�Ĵ�����Ϣ
#include <errno.h>//--errno

//int main()
//{
	//printf("%s\n", strerror(0));
	//printf("%s\n", strerror(1));
	//printf("%s\n", strerror(2));
	//printf("%s\n", strerror(3));
	//printf("%s\n", strerror(4));
	//printf("%s\n", strerror(5));
	//printf("%s\n", strerror(6));
//	FILE* pf = fopen("test.txt", "r");
//	//���ļ�ʧ�ܵ�ʱ��,�ͻ᷵��NULL
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	//....���ļ�
// //�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�ַ���������  -- �����ַ�
//�ַ����ຯ����
//iscntrl --> �ж�һ���ַ��Ƿ�Ϊ�����ַ�
//isspace --> �ж�һ���ַ��Ƿ�Ϊ�հ��ַ�
//			�ո� ������ҳ��\f��������'\n'���س���\r�����Ʊ��'\t'���ߴ�ֱ�Ʊ��'\v'
//isdigit --> �ж�һ���ַ��Ƿ�Ϊʮ���������ַ� 0-9
//isxdigit --> �ж�һ���ַ��Ƿ�Ϊʮ�����������ַ�
//islower --> �ж�һ���ַ��Ƿ�ΪСд��ĸ
//isupper --> �ж�һ���ַ��Ƿ�Ϊ��д��ĸ
//isalpha --> �ж�һ���ַ��Ƿ�Ϊ��ĸ(������С)
//isalnum --> �ж�һ���ַ��Ƿ�Ϊ��ĸ(������С)����������
//ispunct --> �ж�һ���ַ��Ƿ�Ϊ�����ţ��κβ��������ֻ�����ĸ��ͼ���ַ�
//isgraph --> �ж�һ���ַ��Ƿ�Ϊ�κ�ͼ���ַ�
//isprint --> �ж�һ���ַ��Ƿ�Ϊ�κοɴ�ӡ�ַ�������Բ�κͿհ��ַ�

//�ַ�ת����
//int tolower(int c);תСд
//int toupper(int c);ת��д


#include <ctype.h>

//int main()
//{
	//char ch = 'A';
	//isdigit  ����������ַ����ط�0��ֵ��������������ַ�����0
	//int ret = isdigit(ch);
	//islower  �����Сд��ĸ���ط�0��ֵ���������Сд��ĸ����0
	//int ret = islower(ch); 
	//printf("%d\n", ret);
//	return 0;
//}

//��дתСд Сдת��д

//int main()
//{
//	char a[20] = { 0 };
//	scanf("%s", a);
//	int i = 0;
//	while (a[i] != '\0')
//	{
//		if (isupper(a[i]))
//		{
//			a[i] = tolower(a[i]);
//		}
//		else if (islower(a[i]))
//		{
//			a[i] = toupper(a[i]);
//		}
//		printf("%c ", a[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//01 00 00 00  02 00 00 00  03 00 00 00 04 00 00 00......
//	int arr2[20] = {0};
//	//��arr1������ݿ�����arr2ȥ  
//	//strcpy() ���е�
//	//char* strcpy(char* dest, const char* src)
//	return 0;
//}

//�ڴ��������
//memcpy
// ����memcpy��source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ�á�
//������������� '\0' ��ʱ�򲢲���ͣ������
//���source��destination���κε��ص������ƵĽ������δ�����
//memmove
//memmcmp
//memset

//memcpy -- �ڴ濽��

//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = {0};
//	char arr3[10] = { 'a','b','c','d','e','f','g','h' };
//	char arr4[10] = { 0 };
//	//��arr1������ݿ�����arr2ȥ  
//	memcpy(arr2, arr1, 20);
//	memcpy(arr4, arr3, 10);
//	return 0;
//}

//ģ��ʵ���ڴ濽��memcpy����
//memcpyӦ�ÿ������ص����ڴ�
//memmove�������Դ����ڴ��ص������

//memcpyֻҪʵ�ֲ��ص������Ϳ����ˣ���VS�е�ʵ�ּȿ��Կ������ص���Ҳ���Կ����ص��ڴ�

//void* my_memcpy(void* dst, const void* src, size_t num)
//{
//	assert(dst && src);
//	//��������
//	void* ret = dst;
//	while (num--)
//	{
//		*(char*)dst = *(char*)src;
//		dst = (char*)dst + 1;
//		src = (char*)src + 1;
//		//*((char*)dst)++ = *((char*)src)++;	
//	}
//	return ret;	
//}
// //int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//���԰�Դ����
//��ǰ���󿽱�  Ҳ���ԴӺ���ǰ����

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		//��ǰ��󿽱�
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src  = (char*)src  + 1;
//		}
//	}
//	else
//	{
//		//�Ӻ���ǰ����
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//				 1 2 1 2 3 4 5 8 9 10
//	//my_memmove(arr1+2, arr1, 20);
//	//my_memmove(arr1, arr1+2, 20);
//	memcpy(arr1 + 2, arr1, 20);
//	return 0;
//}

//memcmp -- �ڴ�Ƚ�  ��strcmp����


//int main()
//{
//	float arr1[] = { 1.1,1.2,1.3,1.4,2.0,2.1,2.2,2.3 };
//	float arr2[] = { 1.0,2.3 };
//	int ret = memcmp(arr1, arr2, 8);
//	//memcmp  - strcmp
//	printf("%d\n", ret);
//	return 0;
//}

//memset -- �ڴ�����
//���ֽ�Ϊ��λ�����ڴ�
int main()
{
	int arr[10] = { 0 };
	memset(arr, 1, 40);
	return 0;
}