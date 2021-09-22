#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//变量的作用域和生命周期
//作用域:
//局部变量的作用域:就是变量所在的局部范围内
//全局变量的作用域:整个工程


//int g_val = 20;//全局变量
////printf("3:%d\n", g_val);	
//int main()
//{
//	printf("1:%d\n", g_val);
//	{
//		printf("2:%d\n", g_val);
//	}
//	printf("3:%d\n", g_val);
//	printf("Hello,World!\n");
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}

//声明一下变量
//extern int val;
//int main()
//{
//	printf("%d\n", val);
//	return 0;
//}

//生命周期
//变量的生命周期-->变量创建与销毁的时间段
//局部变量的生命周期:进入局部变量所在的作用范围生命周期开始,出局部变量范围生命周期
//全局变量的生命周期--->程序的生命周期
//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);
//	return 0;
//}

//常量 --->不变的量
//分为:
//		字面常量
//		const修饰的常量
//		#define定义的标识符常量
//		枚举常量

#define MAX 100;

//int main()
//{
	//1.字面常量
	//3.14;
	//10;
	//'a';
	//'abcdef'

	//2.const修饰的常量
		//int num = 20;//变量
		//const int num = 20;//num是常变量 --具有常属性(不能被改变的属性)
		//num = 40;
		//printf("%d\n", num);
	//int  arr[10] = { 0 };//数组 10个元素
	//const int n = 10;//被const修饰了 本质上还是变量 不是常量
	//int arr2[n] = { 0 };// n是变量 这里是不行的   不能分配常量大小为 0 的数组 应输入常量表达式

	//3.#define定义的标识符常量
		//int n = MAX;
		//MAX = 1000;//不可行
		//printf("n = %d\n", n);
	//4.枚举常量
	//用于 可以一一列举的常量
//	return 0;
//}

//性别:
//enum Sex
//{
	//这种枚举型的变量的未来可能取值
	//枚举常量
//	MALE = 3,//赋初值 
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//4.枚举常量
	//用于 可以一一列举的常量
	// s ->枚举常量的变量
//	enum Sex s = MALE;
	//MALE = 3; //err
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0; 
//}

//字符串 | 转义字符 | 注释
//字符串就是一串字符->用双引号括起来的一串字符
//int main()
//{
//	//"hello"
//	//"miss"
//	return 0;
//}

#include <string.h>
//int main()
//{
	//字符数组 - 数组->是一组相同类型的元素
	//字符串	在结尾的位置隐藏了一个\0的字符
	//\0是字符串的结束标志 不是字符串的内容

	//char arr[] = "hello" ;
	//char arr[] = "abc";
	//char arr2[] = { 'a','b','c' };
	//printf("%d\n", sizeof(arr));
	// 
	//求一下字符串的长度
	 
	//int len = strlen("abc");//string length
	//printf("%d\n", len);
	
	//printf("%d\n", strlen(arr));//3
	//printf("%d\n", strlen(arr2));//随机值
	//打印字符串
	//printf("%s\n", arr);	//  abc\0 
	//printf("%s\n", arr2);//abc烫烫烫烫蘟bc    abc 
//	return 0;
//}

//转义字符
//转变了原来的意思
//\ ? 在书写连续多个问号时使用，防止他们被解析成三字母词
//\' 用于表示字符常量'
//\“ 用于表示一个字符串内部的双引号
//\\ 用于表示一个反斜杠，防止它被解释为一个转义序列符。
//\a 警告字符，蜂鸣
//\b 退格符
//\f 进纸符
//\n 换行
//\r 回车
//\t 水平制表符
//\v 垂直制表符
//\ddd ddd表示1~3个八进制的数字。 如： \130 X
//\xdd dd表示2个十六进制数字。 如： \x30 0
//int main()
//{
	//printf("C:\test\test.c\n"); //C:      est     est.c 转变了原来的意思
	//printf("C:\\test\\test.c\n");//C:\test\test.c
	//printf("ab\ncd \n");	//\+n
	//printf("(Are You ok ??)");// ??) --> ]      三字母词

	//printf("%c\n", '\'');// \' 用于表示字符常量'
	//printf("%s\n", "abc");
	//printf("%s\n", "a");
	//printf("%s\n", "\""); 
	//printf("C:\\test\\test.c\n");
	//printf("\a\n");
	//printf("%c\n", '\130');//X --> ASCII值码是88
	//printf("%d\n", 'X');//X --> ASCII值码 -->88
	//printf("%d\n", 'Y');//Y --> ASCII值码 -->89

	//printf在打印数据的时候可以指定打印的格式
//
//	return 0;
//}

//printf("%d\n",100);
//printf("%c\n",'a');
//printf("%s\n","abc");
//int main()
//{
//	printf("%d\n", strlen("abcdef"));// 6
//	// \32被解析成一个转义字符
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}

//注释		----->用来解释复杂代码
//

//int main()
//{
	//printf("Hello World!\n");  //C++注释风格
	/*printf("Hello World!\n");*///C语言的注释风格 -->不支持嵌套注释
//	return 0;
//}

//选择语句

//int main()
//{
//	int input = 0;//定义输入值
//	printf("加入北校-->\n");
//	printf("那要好好学习吗?(1/0)?->:");
//	scanf("%d", &input);
//
//	if (input == 1) {
//		printf("好好学习,拿个好offer。\n");
//	}
//	else {
//		printf("回家种田吧!\n");
//	}
//	return 0;
//}

//循环语句

//int main()
//{
//	int line = 0; //定义代码数
	//循环
//	while (line < 30000)
//	{
//		printf("第%d行:写代码\n", line);
//		line++;
//	}
//	if (line == 30000){
//		printf("好offer\n");
//	}
//	return 0;
//}

//函数	-->		
//数学	--> f(x) = 2 * x + 5;
//
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//	//函数的方式解决
//	int sum = Add(num1, num2);
//	printf("%d", sum);
//	return 0;
//}

//数组	-->	一组相同类型的元素

//int main()
//{
	//int a = 0;
	//int b = 1;
	//int c = 2;
	//int d = 3;
	//.....使用定义变量的方式用来存储数字太繁琐

	//数组	-->	一组相同类型的元素
	//10个整型1-10存起来
	//数组是用下标来访问的
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//数组创建与初始化
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	//char ch[5] = { 'a','b','c' };	//不完全初始化剩余的默认为0
//	return 0;
//}

//操作符		算术操作符: +加 -减 *乘 /除 %取模
//				移位操作符: >>	<< 
//				位操作符:	&按位与  |按位或   ^按位异或
//				赋值操作符: = += -= *= /= &= ^=  |=    >>=   <<= 
//				单目操作符:
//							!           逻辑反操作
//							-			负值
//							+			正值
//							&			取地址
//							sizeof      操作数的类型长度（以字节为单位）
//							~			对一个数的二进制按位取反
//							--          前置、后置--
//							++			前置、后置++
//							*			间接访问操作符(解引用操作符)
//							(类型)		强制类型转换

//int main()
//{
	//int a = 9 / 2;
	//float a = 9 / 2;//4.000000
	//float a = 9.0 / 2.0;//4.500000
	//int a = 9 % 2;// % 取模 -->取余
	//printf("%d\n", a);

	//int a = 2;
	//int b = a << 1; //左移操作符 --> 移动的是二进制数
	//a = a + 5;//  a += 5;
	//a += 5;
	//a = a - 3;
	//a -= 3;


	//printf("%d\n", b);
	//return 0;
//}

//int main()
//{
//	// 0表示假	非0表示真
//	int a = 10;
//	printf("%d\n", !a);
//
//	if (a)
//	{
//		//如果a为真 做事
//	}
//	if (!a)
//	{
//		//如果a为假 做事
//	}
//	return 0;
//}

//int main()
//{
//	//sizeof()是操作符
//	// 不是函数
//	//计算类型或变量的大小
//	int a = 10;
//	printf("%d\n",sizeof(int));//4
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof a);//4
//	return 0;
//}

int main()
{
	//10*4
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//40 计算的是数组的总大小,单位是字节
	printf("%d\n", sizeof(arr[0]));//4
	//计算数组元素个数
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	
	return 0;
}