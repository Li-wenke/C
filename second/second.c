
#include <stdio.h>
//int num2 = 20;//全局变量--定义在代码块 ({})之外的变量
//int a = 100;
// char --字符型
// %d --打印整型
// %c --打印字符型
// %f --打印浮点数字-打印小数	
// %p --以地址的形式打印
// %x --打印十六进制的数字
// %o ---.....
//int global = 2021;//全局变量
//void test()
//{
//	printf("test() -- %d\n", global);
//}
int main()
{
	// char 字符数据类型
	// short 短整型
	// int   整型
	// long 长整型
	// long long 更长的整型
	// float 单精度浮点型
	// double 双精度浮点型
	// 为什么出现这些类型？
	// 各种类型占字节大小不同 浪费内存空间
	// 存在这么多的类型 是为了更丰富的表达生活中的各种值 类型的使用 
	// 每种类型的大小是多少？
	// 	   计算机单位
	// 	   bit -比特位 最小的单位 1个比特位是用来存储1个二进制数
	// 	   byte -字节  1个字节是8个比特位      字节跳动- 抖音/今日头条/西瓜视频
	//											byte Dance
	// 	   kb --1kb = 1024byte
	// 	   mb --1mb = 1024kb
	// 	   gb --1gb = 1024mb
	// 	   tb --1tb = 1024gb
	// 	   pb --1pb = 1024tb 
	//printf("%d\n", sizeof(char));//1字节
	//printf("%d\n", sizeof(short));//2
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof(long));//4
	//printf("%d\n", sizeof(long long));//8
	//printf("%d\n", sizeof(float));//4
	//printf("%d\n", sizeof(double));//8
	//int age = 20; // 4个字节 32个比特位 2^32-1
	//short age = 20;//2个字节 16个比特位 2^16-1-->66535
	// 
	// 
	// 30  整型
	// 55.5 浮点型
	// char
	// short int  --短整型
	// int		  --整型
	//char ch ='A';// 内存 存储'A'这个数据
	//printf("%c\n",ch);//%c --打印字符格式的数据
	// 20
	//int age = 20; 
	//printf("%d\n", age);// %d --打印整型十进制的数据
	//// long 长整型
	//long num = 1000;
	//printf("%d\n", num);
	//float f = 5.1;
	//printf("%f\n", f);// 5.100000
	//double d = 3.14;
	//printf("%lf\n", d);// 3.140000

	// C语言标准规定
	// sizeof(long) >= sizeof(int)
	// 年龄
	// 20
	// 体重
	// 95.6kg
	//short age = 20;// 向内存申请2个字节=16bit 用来存储20
	//float weight = 95.6f;// 向内存申请4个字节，存储95.6

	// 变量 常量
	// 生活中有些值是不可变的 (圆周率)  --->常量
	// 有些可变的量  -->变量
	// 变量
	// 	   两种
	// { 局部变量
	// 	   全局变量
	// 	   两个变量 可以同时存在
	// 局部变量和全局变量的名字建议不要相同-容易误会 产生BUG
	// 当局部变量和全局变量的名字相同时,局部变量优先
	//int num1 = 10;// 局部变量--定义在代码块({})之内的变量
	//int a = 10;
	//printf("%d\n", a);
	// 作用域
	//
	//作用域（scope），程序设计概念，通常来说，一段程序代码中所用到的名字并不总是有效可用的
	//	而限定这个名字的可用性的代码范围就是这个名字的作用域。
	// 	   1. 局部变量的作用域是变量所在的局部范围。
	//		2. 全局变量的作用域是整个工程。
	// 计算两个数之和
	/*int num1 = 0;
	int num2 = 0;
	int sum = 0;*/
	// 输入数据-使用输入函数
	//scanf("%d%d",&num1,&num2);//&取地址符号 
	//sum = num1 + num2;
	//printf("sum = %d\n", sum);
	//test();
	//printf("%d\n", global);
	// 未声明的标识符
	// 声明extern外部符号的
	/*extern int g_val;
	printf("g_val = %d\n", g_val);*/
	//生命周期
	//变量的生命周期指的是变量的创建到变量的销毁之间的一个时间段
	//	1. 局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束。
	//	2. 全局变量的生命周期是：整个程序的生命周期。
	//局部变量{
	//{//生命周期的开始
	//	int a = 10;
	//	printf("a= %d\n", a);//ok
	//}//生命周期的结束
	//printf("a =%d\n", a);//不能打印}

	return 0;
}