#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 1; i <= 3; i++)
	{
		printf("请输入密码->");
		scanf("%s", &password);
		if (strcmp(password, "123456") == 0)//== 不能用来比较两个字符串是否相等，应该是用一个库函数-strcmp
		{
			printf("登录成功\n");
			break;
		}
		else
			printf(" 密码错误\n");
	}
	if (i == 3)
		printf("3次密码均错误,推出程序。");
	return 0;
}

//#include <string.h>
//#include <Windows.h>
//#include <stdlib.h>
//int main()
//{
//	//welcome to China!!!!!
//	//#####################
//	//we################!!
//	//wel##############!!!
//	//welc############!!!!
//	//...
//	//welcome to China!!!!!
//	char arr1[] = { "welcome to China!!!!!" };
//	char arr2[] = { "#####################" };
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1);
//	while (left <= right)
//	{
//		//停留一秒
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数-cls -清空屏幕
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}

//二分查找法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;
//	int right = sz - 1;
//
//	while(left <= right)
//	{ 
//		int mid = (left + right) / 2;
//		if(arr[mid] > k){ 
//			right = mid - 1;
//		}
//		else if (arr[mid] < k){
//			left = mid + 1;
//		}
//		else {
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到了");
//	return 0;
//}

//效率太低 而且是有序的
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//写一个代码，在arr[]数组中找到7
//	int i = 0;
//	int sz = sizeof(arr[]) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了,下标是:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("1!+2!+3!+....+10!=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int i = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n ; i++)
//		{
//			ret *= i;
//		}
//		//n的阶乘
//		sum += ret;
//	}
//	printf("1!+2!+3!+....+10!=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int i = 1;
//	printf("输入一个数字:");
//	scanf("%d", &n);
//	//for (i = 1; i <= n; i++)
//	//{
//	//	ret *= i;
//	//}
//	//while (i <= n)
//	//{
//	//	ret *= i;
//	//	i++;
//	//}
//	do
//	{
//		ret *= i;
//		i++;
//	} while (i <= n);
//	printf("n的阶乘:%d", ret);
//	return 0;
//}

//do...whlie
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	//循环0次
//	return 0;
//}
//for循环的初始化、调整、判断都可以省略
//但是
//for循环的判断部分如果被省略那条件:恒为真	
//int main()
//{
//	for (;;)
//	{
//		printf("hello\n");
//	}
//	return 0;
//}

//for循环循环变量取值采用“前闭后开”写法 建议  不是绝对
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0 ;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//不可在for循环体内改变循环变量
//int main()
//{
//	int i = ;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			continue;
//		printf("Hello,World!\n");
//	}
//	return 0;
//}

//for循环
//for
//while
//do...while
//break -->跳出循环
//continue-->跳出本次循环
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	/*
//	int ch = 0;
//	//Ctrl + Z
//	//EOF - end of file 文件结束标志  -> -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//	// 有啥用?
//	char password[20] = { 0 };
//	char ch = 0;
//	int ret = 0;
//	printf("请输入密码:>");
//	scanf("%s", &password);//输入密码并存放在password数组当中
//	//缓冲区还剩余一个'\n'
//	//读取一下'\n'
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();//Y/N
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	//printf("%d\n", '\n');
//	return 0;
//}

//int main()
//{
//	int ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}