#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//int main()
//{
	//1.求字符串长度时，数的是'\0'之前的字符个数，不包含'\0'  2.它必须要有'\0'才能求字符串长度
	//char arr[] = "abcd";  
//	char arr[] = { 'a','b','c'};
//	int len = strlen(arr);
//	printf("strlen(arr) = %d\n", len);
//	return 0;
//}

//模拟实现strlen

//1.计数器的版本
//int my_strlen(const char* str)//指针被const修饰了 指针所指向的内容不能被改变了
//{
//	//这里使用了指针所以引用assert断言
//	assert(str);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//2.递归版本
//int my_strlen(const char* str)
//{
//	assert(str);
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//3.指针 - 指针版本 
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

//字符串已经 '\0' 作为结束标志，strlen函数返回的是在字符串中 '\0' 前面出现的字符个数（不包含 '\0' )。
//参数指向的字符串必须要以 '\0' 结束。
//注意函数的返回值为size_t，是无符号的（ 易错 ）

//strlen    库函数
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
//					  目的地                   源头
//源字符串必须以 '\0' 结束。源字符串中必须包含'\0'
//会将源字符串中的 '\0' 拷贝到目标空间。
//目标空间必须足够大，以确保能存放源字符串。
//目标空间必须可变。

//int main()
//{
//	char* str[] = "xxxxxxxxxxxxxxxxxxx";
	//char arr[5] = { 0 };
	//arr = "hello";//err   arr是首元素地址 地址是个编号，要把hello放到编号上面嘛？ 这肯定不行 放在它所指向的空间才可以
	//char* p = "hello";//这个其实是把字符串首字符'h'的地址放到p指针变量中去
	//strcpy(arr,"hello");//string copy   "hello"传参传过去的是'h'的地址
	//char arr2[] = { 'a','b','c' };//这个字符数组中没有'\0' 
	//strcpy(arr, arr2);//会出错 会越界去找'\0'
	//char* p = "hello world";
	//strcpy(arr, p);会报错 因为目标空间比源字符串要小
	//strlen(str, p);//目标空间不可改变所以程序会报错
	//printf("%s\n", str);
	//printf("arr = %s\n", arr);
//	return 0;
//}

//模拟实现strcpy

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
//						目的地					源头

//源字符串必须以 '\0' 结束。
//目标空间必须有足够的大，能容纳下源字符串的内容
//目标空间必须是可以改变的

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
//	//1.找到目标字符串中的'\0'
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.追加源字符串
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}

//int main()
//{
//	char arr1[20] = "hello ";//追加world
//	char arr2[] = "world";
	//strcat(arr1, arr2);//字符串追加（连接）
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
//	//strcmp - 字符串比较大小的
//	//int ret = strcmp("abbb", "abq");//<0
//	int ret = strcmp("aaa", "aaa");
//	printf("%d\n", ret);
//
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//1.先比较第一个字符的ASCII码值
//	//2.如果相等那就继续往后比大小
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
//	//strcmp比较字符串的大小 比的是对应字符所对应的ASCII码值的大小
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

//长度不受限制的字符串函数
//strcpy
//strcat
//strcmp

//长度受限制的字符串函数介绍
//strncpy
//strncat
//strncmp

//strncpy
//char* strncpy(char* destination, const char* source, size_t num);
//拷贝num个字符从源字符串到目标空间。
//如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加0，直到num个


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
//追加n个字符	

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
//比较浅n个字符串的大小

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
//判断arr2是否为arr1的子串

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
//	//在arr1中查找是否包含arr2数组
//	//char* ret = strstr(arr1, arr2);
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了-->%s\n",ret);
//	}
//	return 0;
//}

//KMP算法 -- 字符串中查找算法

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
//sep参数是个字符串，定义了用作分隔符的字符集合
//第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记。
//strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。
//strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。
//strtok函数的第一个参数不为 NULL ，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置
//strtok函数的第一个参数为 NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标记。

//zpw@bitedu.tech
//@.  分隔符

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

//使用库函数的时候
//调用库函数失败的时候，都会设置错误码
//全局的错误码
//int errno;//5
//perror     -- 打印错误信息    1.首先把错误码转换成错误信息。2.打印错误信息(包括自定义的信息)
//strrerror  -- 把错误码转换成错误信息
//char* strerror(int errnum);
//返回错误码，所对应的错误信息
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
//	//打开文件失败的时候,就会返回NULL
//	if (pf == NULL)
//	{
//		printf("%s\n",strerror(errno));
//		perror("fopen");
//		return 1;
//	}
//	//....读文件
// //关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//字符操作函数  -- 操作字符
//字符分类函数：
//iscntrl --> 判断一个字符是否为控制字符
//isspace --> 判断一个字符是否为空白字符
//			空格‘ ’，换页‘\f’，换行'\n'，回车‘\r’，制表符'\t'或者垂直制表符'\v'
//isdigit --> 判断一个字符是否为十进制数字字符 0-9
//isxdigit --> 判断一个字符是否为十六进制数字字符
//islower --> 判断一个字符是否为小写字母
//isupper --> 判断一个字符是否为大写字母
//isalpha --> 判断一个字符是否为字母(包括大小)
//isalnum --> 判断一个字符是否为字母(包括大小)或者是数字
//ispunct --> 判断一个字符是否为标点符号，任何不属于数字或者字母的图形字符
//isgraph --> 判断一个字符是否为任何图形字符
//isprint --> 判断一个字符是否为任何可打印字符，包括圆形和空白字符

//字符转换：
//int tolower(int c);转小写
//int toupper(int c);转大写


#include <ctype.h>

//int main()
//{
	//char ch = 'A';
	//isdigit  如果是数字字符返回非0的值，如果不是数字字符返回0
	//int ret = isdigit(ch);
	//islower  如果是小写字母返回非0的值，如果不是小写字母返回0
	//int ret = islower(ch); 
	//printf("%d\n", ret);
//	return 0;
//}

//大写转小写 小写转大写

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
//	//把arr1里的内容拷贝到arr2去  
//	//strcpy() 不行的
//	//char* strcpy(char* dest, const char* src)
//	return 0;
//}

//内存操作函数
//memcpy
// 函数memcpy从source的位置开始向后复制num个字节的数据到destination的内存位置。
//这个函数在遇到 '\0' 的时候并不会停下来。
//如果source和destination有任何的重叠，复制的结果都是未定义的
//memmove
//memmcmp
//memset

//memcpy -- 内存拷贝

//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = {0};
//	char arr3[10] = { 'a','b','c','d','e','f','g','h' };
//	char arr4[10] = { 0 };
//	//把arr1里的内容拷贝到arr2去  
//	memcpy(arr2, arr1, 20);
//	memcpy(arr4, arr3, 10);
//	return 0;
//}

//模拟实现内存拷贝memcpy函数
//memcpy应该拷贝不重叠的内存
//memmove函数可以处理内存重叠的情况

//memcpy只要实现不重叠拷贝就可以了，而VS中的实现既可以拷贝不重叠，也可以拷贝重叠内存

//void* my_memcpy(void* dst, const void* src, size_t num)
//{
//	assert(dst && src);
//	//拷贝数据
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

//可以把源数据
//从前往后拷贝  也可以从后往前拷贝

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		//从前向后拷贝
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src  = (char*)src  + 1;
//		}
//	}
//	else
//	{
//		//从后向前拷贝
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

//memcmp -- 内存比较  跟strcmp类似


//int main()
//{
//	float arr1[] = { 1.1,1.2,1.3,1.4,2.0,2.1,2.2,2.3 };
//	float arr2[] = { 1.0,2.3 };
//	int ret = memcmp(arr1, arr2, 8);
//	//memcmp  - strcmp
//	printf("%d\n", ret);
//	return 0;
//}

//memset -- 内存设置
//以字节为单位设置内存
int main()
{
	int arr[10] = { 0 };
	memset(arr, 1, 40);
	return 0;
}