#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void test()
//{
//	int b = 0;
//}
//
//int main()
//{
//	int a = 10;
//	return 0;
//}

//#include <stdio.h>
//int num = 10;
//int main()
//{
//    int num = 1;
//    //局部变量优先
//    printf("num = %d\n", num);//1
//    return 0;
//}
//

#include <stdio.h>
#include <string.h>

//int main()
//{
//    char arr[] = { 'b', 'i', 't' };
//    printf("%d\n", strlen(arr));//随机值
//    return 0;
//}

//C99 标准中引用一个概念：变长数组
//支持数组创建的时候，用变量指定大小的，但是这个数组不能初始化
//VS2019 不支持C99中变长数组的

//int main()
//{
//	int n = 10;
//	//int arr[n] = { 0 };
//	int arr[n];
//	return 0;
//}

//int main()
//{
//    printf("%d\n", strlen("c:\test\121"));
//    return 0;
//}

//int Add(int x, int y)  整型求和函数
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 20;//定义求和的变量
//	int b = 40;
//	int sum = Add(a, b);//调用求和函数
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("请输入需要求和的数:");
//	scanf("%d %d", &a, &b);
//	sum = Add(a, b);
//	printf("和为:%d\n", sum);
//
//	return 0;
//}

//求两个数的较大值
//MAX - 一般不建议把函数的名字写成全大写

//int Max(int x, int y)//定义比较较大值函数
//{
//	if (x > y) {
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int a = 0;//定义比较值变量
//	int b = 0;//定义比较值变量
//	int max = 0;//定义较大值变量
//	printf("请输入两个数字:");
//	scanf("%d %d", &a, &b);//输入用来比较的值
//	max = Max(a, b);//调用比较函数
//	printf("两个整型数字的较大值为:%d\n", max);
//
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	
//	int m = Max(a, b);
//	printf("%d\n", m);
//
//	return 0;
//}



//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));//8,10,12,14,16
//    }
//
//    return 0;
//}

//int main()
//{
//	int a = 0;
//	//printf("请输入一个数:");
//	scanf("%d", &a);
//	if (a % 5 == 0)
//	{
//		printf("该数能被5整除!\n");
//	}
//	else {
//		printf("该数不能被5整除!\n");
//	}
//
//	return 0;
//}

//int main()
//{
//    //输入
//    int m = 0;
//    printf("请输入一个整数:");
//    scanf("%d", &m);
//
//    //判断并输出
//    if (m % 5 == 0)
//        printf("YES\n");
//    else
//        printf("NO\n");
//
//    return 0;
//}

