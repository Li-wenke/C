#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//结果是？
 
//这不就是斐波那契数列?
//1 1 2 3 5 8 13 21 34 55
//int cnt = 0;
//int fib(int n) {
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	fib(8);
//	printf("%d", cnt);
//	return 0;
//}


//结果是什么?
//int main()
//{
//	int x = 1;
//	do {
//		printf("%2d\n", x++);//死循环打印1
//	} while (x--);
 	//int i = 10;
	//int j = 20;
	//int k = 3;
	//k *= i + j;
	////k *= (i + j);
	//printf("%d\n", k);//90
//	return 0;
//}

//int a = 1;//全局变量
//void test() {
//    int a = 2;//局部变量
//    a += 1;
//}
//int main() {
//
//    test();
//    printf("%d\n", a);//1
//    return 0;
//}

//int main()
//{
//	//int a = 0, c = 0;
//	//do {
//	//	--c;//c = -1
//	//	a = a - 1;//a = -1
//	//} while (a > 0);c的值
//	//执行几次
//	//int x = 0;
//	//int y = 0;
//	//for (x = 0, y = 0; (y = 123) && (x < 4); x++)
//	//	;
//	//y=0 1 y=1 1 y=2 1 y=3 1 4次
//	int year = 1009, * p = &year;
//	//int year = 1009;
//	//int* p = &year;
//
//	return 0;
//}

//A和B最小公倍数

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	//最小公倍数
//	int t = m > n ? m : n;
//	int i = 0;
//	while (1)
//	{
//		if (t % m == 0 && t % n == 0)
//		{
//			printf("%d", t);
//			break;
//		}
//		t++;
//	}
//	for (i = 1;; i++)
//	{
//		if (m * i % n == 0)
//		{
//			printf("%d", m * i);
//			break;
//		}
//	}
//	return 0;
//}


//本末倒置 
//将字符串逆序
//I like beijing.
//beijing. like I
//三步翻转法
//1.字符串整体翻转
//.gnijieb ekil I
//2.每个单词逆序
//beijing. like I

#include <string.h>
void reverse_string(char* left,char* right)
{
	
	while (left<right)
	{
		char temp = 0;
		temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);//获取字符串
	int len = strlen(arr);
	//1.字符串整体翻转
	//.gnijieb ekil I
	reverse_string(arr,arr+len-1);
	//2.每个单词逆序
	//beijing. like I
	char* start = &arr;
	while (*start)
	{
		char* end = start;
		while (' ' != *end && '\0' != *end)
		{
			end++;
		}
		//逆序一个单词
		reverse_string(start, end - 1);
		if (' ' == *end)
		{
			start = end + 1;
		}
		else
		{
			start = end;
		}
	}
	printf("%s\n", arr);

	return 0;
}
