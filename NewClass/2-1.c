#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//		分支与循环

//		分支语句
//		if
//		switch

//		循环语句
//		while
//		do while
//		for

//什么是语句？
//C语言中由一个分号; 隔开的就是一条语句。
//
//int main()
//{
//	printf("hehe\n");
//	3 + 5;
//	;//空语句
//	return 0;
//}

//分支语句（选择结构）

//int main()
//{
//	int age = 10;
	//if (age >= 18) {
	//	printf("成年\n");
	//}
	//else {
	//	printf("未成年\n");
	//}
	
	//	/*if (age >= 18)
//	{ 
//		printf("成年\n");
//	}
//	else
//	{ 
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}*/
//	/*if (age >= 18)
//		printf("成年\n");*/
//
//	if (age < 18)
//		printf("少年\n");
//	else if (age >= 18 && age < 26)
//		printf("青年\n");
//	else if (age >= 26 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age <= 100)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//
//	return 0;
//}

//代码风格 - 
//<高质量C/C++编程>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//		else
//		{
//			printf("haha\n");
//		}
//	}
// else
//		printf("haha\n");
//	return 0;
//}

//int test()
//{
//	if (0)
//		return 0;
//	return 1;
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int num = 3;
//
//	//if (num == 5)
//	if(5 == num)
//		printf("hehe\n");
//
//
//	return 0;
//}

//1. 判断一个数是否为奇数

//int main()
//{
//	int a = 10;
//	if (a % 2 == 1) {
//		printf("奇数\n");
//	}
//	else {
//		printf("不是奇数\n");
//	}
//	return 0;
//}
// 
//2. 输出1 - 100之间的奇数

//int main()
//{
//	int i = 0;
//	while (i <= 100) {
//		if (i % 2 == 1) {
//			printf("%d是奇数\n", i);
//		}
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	//C++
//	//c99支持了这样写
//	//for (int i = 1; i <= 100; i++)
//	//{
//	//	if (i % 2 == 1)
//	//		printf("%d ", i);
//	//}
//
//	for (int i = 1; i <= 100; i+=2)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//	switch语句

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//			printf("星期一\n");
//			break;
//		case 2:
//			printf("星期二\n");
//			break;
//		case 3:
//			printf("星期三\n");
//			break;
//		case 4:
//			printf("星期四\n");
//			break;
//		case 5:
//			printf("星期五\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期日\n");
//			break;
//	}
//
//	return 0;
//}

//1-5 工作日
//6-7 休息日

//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    case 3:
//        switch (n)
//        {//switch允许嵌套使用
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//
//	return 0;
//}

//		循环结构
//		1.while(表达式为真循环执行)
//		2.do...while
//		3.for

//int main()
//{
//	while (1)//死循环
//		printf("hehe\n");
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\t", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	//在while循环中，break用于永久的终止循环
//	// 
//	//在while循环中，continue的作用是跳过本次循环continue后边的代码
//	//直接去判断部分，看是否进行下一次循环
//
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//
//	/*while (i <= 10)
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		i++;
//	}*/
//
//	return 0;
//}

//getchar

//EOF - end of file - 文件结束标志

//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);//输出一个字符
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//ctrl+z - getchar 就读取结束
//
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", &password);
//	printf("请确认密码(Y/N):>");//没有确认就结束了
//	int ch = getchar();
//	if ('Y' == ch)
//	{
//		printf("确认成功!\n");
//	}
//	else
//	{
//		printf("确认失败!\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", &password);
//	printf("请确认密码(Y/N):>");
//	//清理缓存区
//	//getchar();//处理'\n'
//	//清理缓存区的多个字符
//	int tmp = 0;
//	while ((tmp = getchar() != '\n'))
//	{
//			;
//	}
//	int ch = getchar();
//	if ('Y' == ch)
//	{
//		printf("确认成功!\n");
//	}
//	else
//	{
//		printf("确认失败!\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//
//		putchar(ch);
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 1;//初始化
//
//	while (i <= 10)//判断部分
//	{
//		printf("%d ", i);
//		i++;//调整部分
//	}
//
//		for循环
//		for(表达式1；表达式2；表达式3)
//		循环语句；
//		表达式1 表达式1为初始化部分，用于初始化循环变量的。 表达式2 表达式2为条件判断部分，用于判断
//		循环时候终止。 表达式3 表达式3为调整部分，用于循环条件的调整。
//		1. 不可在for 循环体内修改循环变量，防止 for 循环失去控制。
//		2. 建议for语句的循环控制变量的取值采用“前闭后开区间”写法。

//int main()
//{
//	int i = 0;
//	//实现相同的功能，使用while
//	i = 1;//初始化部分
//	while (i <= 10)//判断部分
//	{
//		printf("hehe\n");
//		i = i + 1;//调整部分
//	}
//	//实现相同的功能，使用while
//	for (i = 1; i <= 10; i++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
	//int i = 0;
	////for(i=1/*初始化*/; i<=10/*判断部分*/; i++/*调整部分*/)
	//for (i = 1; i <= 10; i++)
	//{
	//	/*if (5 == i)
	//		break;*/
	//	if (5 == i)
	//		continue;

	//	printf("%d ", i);
	//}
//
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//		int j = 0;
//		for (j = 0; j < 10; i++)
//		{
//			printf("hehe\n");
//		}
//	}
//	
//	return 0;
//}
//int main()
//{
//	printf("%d\n", 'a');
//	printf("%d\n", 'A');
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//判断部分的省略 - 判断部分恒为真
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("HeHe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	//请问循环要循环多少次? 0次
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//
//	printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	//计算n的阶乘
//	// n * (n - 1) * (n - 2) * (n - 3) ..... * 1
//	// 1 * .... - n
//	// 1*2*3*4*5
//	//循环
//
//	int n = 0;
//	int i = 0;
//	int arg = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		arg *= i ;//累乘
//	}
//	printf("%d\n", arg);
//	return 0;
//}


//int main()
//{
//	//1!+2!+3!+....+10!
//	//3! = 3*2*1 = 3 * 2!
//	//2! = 2*1
//	int n = 10;
//	int sum = 0;
//	int arg = 1;
//	for (n = 1; n <= 10; n++)
//	{
//		//3! = 3*2*1 = 3 * 2!
//		//2! = 2*1
//		arg *= n;
//		sum += arg;
//	}
	// int i = 0
	// for (n = 1; n <= 10; n++)
	//{
	//	arg = 1;//计算n的阶乘之前把arg初始化为1
	//	for (i = 1; i <= n; i++)
	//	{
	//		arg *= i ;//累乘
	//	}
	//	sum += arg;
	//}
//	printf("%d\n", sum);
//
//	return 0;
//}


//在一个有序数组中查找具体的某个数字n。
//int main()
//{
//	//在一个有序数组中查找具体的某个数字n。 二分查找法
//	//1 2 3 4 5 6 7 8 9 10
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 10;//要查找的数字
//	//在arr这个有序的数组中查到k的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数,数组的总大小除以数组的单个元素的大小
//
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//中间数
//		if (arr[mid] < k)//如果中间数下标所对应的数组值要比查找的数字小
//		{
//			left = mid + 1;//左下标的值变成中间数加1 也就是右移一个位置
//
//		}
//		else if (arr[mid] > k)//如果中间数下标所对应的数组值要比查找的数字大
//		{
//			right = mid - 1;//右下标的值变成中间数减1 也就是左移一个位置
//		}
//			//如果中间数下标所对应的数组值要与查找的数字相等
//		else {
//			printf("找到了,元素是:%d 元素对应的下标:%d\t", arr[mid], mid);
//			break;
//		}
//	}
//	if (left > right)//如果左下标大于右下标
//	{
//		printf("找不到了!\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120 };
//	int y = 110;//需要查找的数字
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组元素的个数 -->数组总大小除以一个数组元的的大小
//	int left = 0;		//左下标
//	int right = sz - 1;//右下标
//
//	while (left <= right)
//	{
//		int arg = (left + right) / 2;//求中间数
//		if (arr[arg] < y)//如果中间数下标所对应的数组值要比查找的数字小
//		{
//			left = arg + 1;//左下标的值变成中间数加1 也就是右移一个位置
//		}
//		else if (arr[arg] > y)//如果中间数下标所对应的数组值要比查找的数字大
//		{
//			right = arg - 1;//右下标的值变成中间数减1 也就是左移一个位置
//		}
//		else//如果中间数下标所对应的数组值要与查找的数字相等
//		{
//			printf("找到了,元素是:%d\t元素的下标是:%d\n", arr[arg], arg);
//			break;//找到了就跳出循环
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了!\n");
//	}
//	return 0;
//}

//int main()
//{
//	//定义一个需要被查找数字的有序数组
//	int Pi[] = { 110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260,270,280,290,300 };
//	int x = 240;//定义一个需要被查找的数字
//
//	//数组元素个数  ——>数组的总大小除以一个数组元素的大小
//	int sz = sizeof(Pi) / sizeof(Pi[0]);
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//
//	while(left <= right)
//	{ 
//		int mid = (left + right) / 2;//求中间数
//		if (Pi[mid] < x)//如果中间数下标所对应的数组值要比查找的数字小
//		{
//			left = mid + 1;//左下标的值变成中间数加1 也就是右移一个位置
//		}
//		else if (Pi[mid] > x)//如果中间数下标所对应的数组值要比查找的数字大
//		{
//			right = mid - 1;//右下标的值变成中间数减1 也就是左移一个位置
//		}
//		else//如果中间数下标所对应的数组值要与查找的数字相等
//		{
//			printf("找到了,元素是:%d,元素的下标是:%d\n ", Pi[mid], mid);
//			break;//找到了就跳出循环
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了!\n");
//	}
//	return 0;
//}


//welcome to world!!!!!!
//###################### //得有这一行
//w####################!
//we#################!!!
//wel###############!!!!
//welc#############!!!!!
//.........
//welcome to world!!!!!! 
//#include <string.h>
//#include <Windows.h>
//int main()
//{
//	char arr1[] = { "welcome to world!!!!!!" };
//	char arr2[] = { "######################" };
//	int left = 0;//左下标
//	int right = strlen(arr1)-1;//右下标 -> 字符串长度减一
//
//	while (left <= right)//循环条件 因为左边是从第一个下标开始一次往后拿字符 右边也同样是  所以 left <= right
//	{
//		arr2[left] = arr1[left];//把arr1左边的字符拿一个下来放到arr2数组中
//		arr2[right] = arr1[right];//把arr1右边的字符拿一个下来放到arr2数组中
//
//		printf("%s\n", arr2);//最终打印下来 直接打印下来 没有视觉效果 所以给个停留 隔一秒打印一次 效果好点
//		Sleep(1000);//睡眠1秒 隔一秒打印一次  Sleep --> 引用头文件windows.h 还是没达到效果 于是加上
//		system("cls");//清空屏幕
//
//		left++;//依次往后面拿字符
//		right--;//依次往前面拿字符
//
//	}
//	printf("%s\n", arr2);//因为上面清空屏幕会导致结果被清空,所以再打印一次
//	return 0;
//}

//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成，如果三次均输入错误，则退出程序。

//#include <string.h>
////strlen
////strcmp
//int main()
//{
//	int i = 0;
//	//假设密码是字符串:"123456"
//	char password[20] = { 0 };
//	//abcdef				-->比的是相对应的字符ASCII值码
//	//abccqqqqq
//	for (i = 0; i < 3; i++)
//	{
//		printf("输入密码:");
//		scanf("%s", password);//不用& 
//
//		/*if(password == "123456")*///err->错误  两个字符串比较不能使用== 应该使用strcmp-->string.h
//		if (strcmp(password, "123456") == 0)//输入的密码和正确密码相比较看是否相等  -->比的是相对应的字符ASCII值码
//		{
//			printf("登录成功!\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误,重新输入!");
//		}
//	}
//	if (i == 3)
//	{
//		printf("3次密码均错误!退出程序!\n");
//	}
//
//	return 0;
//}



//		写一个猜数字游戏
//		1.自动产生一个1-100之间的随机数
//		2.猜数字
//			a.猜对了,就会恭喜你,游戏结束
//			b.你猜错了,会告诉猜大了,继续才知道猜对
//		3.游戏一直玩,除非退出游戏
//


//		生成随机数
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("******************************************\n");
	printf("************    1. play    ***************\n");
	printf("************    0. exit    ***************\n");
	printf("******************************************\n");
}

void game()
{
	//猜数字游戏的实现
	//1.先生成随机数  有个库函数  -> rand 头文件 -> stdlib.h
	//rand函数返回了一个0-32767之间的数字

	//时间 -> 时间戳    -->获取时间戳    time函数  -> time.h
	//srand(100);//会固定随机数
	

	int ret = rand() % 100 + 1;//%100的余数是0-99 +1  ->1-100
	//printf("%d\n", ret);//这次玩完 下次玩 随机数还是一样的 
	//2.猜数字
	int guess = 0;//用来接收用户猜的值
	while (1)
	{
		printf("请猜数字:");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜到了!数字是:%d\n",ret);
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL)); //生成随机数
	//因为一开始就要玩游戏,至少执行一次,所以用do..while结构
	do
	{
		//游戏一开始需要一个菜单
		menu();//打印菜单
		//用户选择是玩游戏还是退出游戏 给个接收值
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				//printf("猜数字!\n");
				game();
				break;
			case 0:
				printf("退出游戏!\n");
				break;
			default:
				printf("选择错误,重新选择.\n");
				break;
		}

	} while (input);

	return 0;
}