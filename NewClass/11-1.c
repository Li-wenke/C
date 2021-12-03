#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//自定义类型：结构体，枚举，联合

//数组是一组相同类型的元素的集合  数组的成员类型必须是相同的。
//结构体
//结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量。

//结构体的声明
//struct tag
//{
//	member - list;//成员列表
//}variable-list;//变量列表

//描述一本书
//书类型
//struct Book
//{
//	char name[20];//书名
//	int price;//定价
//	char id[12];//书号
//}b4,b5,b6;//跟下面的b1,b2,b3是一样的,b4,b5,b6是全局变量  
//int main()
//{
//	struct Book b1;//创建书的实体
//	struct Book b2;//创建书的实体
//	struct Book b3;//创建书的实体
//	return 0;
//}

//匿名结构体类型
//匿名结构体类型创建好后只能用一次
//struct
//{
//	char c;
//	int a;
//	char ch;
//	float f;
//}s;//结构体变量
//struct
//{
//	char c;
//	int a;
//	char ch;
//	float f;
//}*ps;
//int main()
//{
//	ps = &s;// 从“*”到“*”的类型不兼容
//	//编译器会把上面的两个声明当成完全不同的两个类型。 所以是非法的
//	return 0;
//}

//struct A
//{
//	int i;
//	char c;
//};
//struct B
//{
//	char c;
//	struct A sa;
//	double d;
//};
//struct N
//{
//	int a;//4
//	struct N n;//4+....
//};
//数据结构
//数据在内存中存储的结构
//顺序表、链表  -->线性数据结构
//树形数据结构:二叉树....

//节点
//数据域|指针域
//struct Node
//{
//	int data;
//	struct Node* next;//4/8
//};
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//int main()
//{
//	//struct N sn;
//	return 0;
//}
//typedef struct
//{
//	int data;
//	Node* next;
//}Node;
//
//int main()
//{
//	Node n;
//
//	return 0;
//}

//结构体变量的定义和初始化

//struct S
//{
//	char c;
//	int i;
//}s1,s2;
//struct B
//{
//	double d;
//	struct S s;
//	char c;
//};
//int main()
//{
//	struct S s3 = { 'c',1 };
//	struct B sb = { 3.14159265,{'c',1},'b' };
//	//.结构体变量  ->结构体指针
//	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
//	return 0;
//}

//struct S
//{
//	int i;//4
//	char c;//1
//};
//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//结构体内存对齐
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));//5?err     8
//	struct S1 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//6?err    12
//	return 0;
//}

//结构体内存对齐
//结构体对齐规则:
//1.第一个成员放在结构体变量偏移量为0的地址处开始
//2.从第2个成员往后的所有成员，都放在一个对齐数(成员的大小和默认对齐数的较小值)的整数倍的地址处
//对齐数	-->编译器默认的一个对齐数与该成员大小的较小值
//3.结构体总大小为结构体所有成员的对齐数中最大的对齐数的整数倍
//4.如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所
//有最大对齐数（含嵌套结构体的对齐数）的整数倍。

//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	int i;
//	double d;//8
//};
//struct S3
//{
//	char c1;
//	char c2;
//	int i;
//};
//struct S4
//{
//	double d;
//	char c;
//	int i;
//};
//struct S5
//{
//	char c1;
//	struct S4 s4;
//	double d;
//};
//struct S6
//{
//	int i;
//	struct S4 s4;
//	char ch;
//	float f;
//	double d;
//};
//int main()
//{
//	struct S s = {0};
//	struct S2 s2 = { 0 };
//	struct S3 s3 = { 0 };
//	struct S4 s4 = { 0 };
//	struct S5 s5 = { 0 };
//	struct S6 s6 = { 0 };
//	printf("%d\n", sizeof(s));//12
//	printf("%d\n", sizeof(s2));//16
//	printf("%d\n", sizeof(s3));//8
//	printf("%d\n", sizeof(s4));//16
//	printf("%d\n", sizeof(s5));//32
//	printf("%d\n", sizeof(s6));//40
//	return 0;
//}

//为什么存在	内存对齐
//1.平台原因
//不是所有的硬件平台都能访问任意地址上的任意数据的；
//某些硬件平台只能在某些地址处取某些特定类型的数据，否则抛出硬件异常。
//2.性能原因
//数据结构(尤其是栈)应该尽可能地在自然边界上对齐。 
//原因在于，为了访问未对齐的内存，处理器需要作两次内存访问；而对齐的内存访问仅需要一次访问。
//总结:
//结构体的内存对齐是拿空间来换取时间的做法。

//较小的成员可以放在一起，这样也可以节省空间

//修改默认对齐数
//#pragma pack(2)
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack(1)
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//ofeesetof  计算结构体中某变量相对于首地址的偏移
//#include <stddef.h>
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, c2));
//	return 0;
//}

//结构体传参
//结构体地址传参
//结构体传参的时候，要传结构体的地址。
//结构体实现位段
//位段的声明和结构是类似的
//1.位段的成员必须是 int、unsigned int 或signed int 。
//2.位段的成员名后边有一个冒号和一个数字
//例如:
//struct A
//{
//	//4个字节 - 32bit
//	int _a : 2;//_a 成员占2个bit位
//	int _b : 5;//_b 成员占5个bit位
//	int _c : 10;//_c 成员占10个bit位
//	//15
//	//4个字节 - 32bit
//	int _d : 30;//_b 成员占30个bit位
//};
// 16位  int  2byte   16bit
// 32位  int  4byte   32bit
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

//位段的内存分配
//1. 位段的成员可以是 int unsigned int signed int 或者是 char （属于整形家族）类型
//2. 位段的空间上是按照需要以4个字节（ int ）或者1个字节（ char ）的方式来开辟的。
//3. 位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段。

//位段的跨平台问题
//1. int 位段被当成有符号数还是无符号数是不确定的。
//2. 位段中最大位的数目不能确定。（16位机器最大16，32位机器最大32，写成27，在16位机器会出问题。
//3. 位段中的成员在内存中从左向右分配，还是从右向左分配标准尚未定义。
//4. 当一个结构包含两个位段，第二个位段成员比较大，无法容纳于第一个位段剩余的位时
//是舍弃剩余的位还是利用，这是不确定的。

//总结:
//跟结构相比，位段可以达到同样的效果，但是可以很好的节省空间，但是有跨平台的问题存在。
 
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//枚举
//顾名思义就是一一列举

//#define RED 5
//#define GREEN 8
//#define BLUE 9
//声明枚举类型
//enum Color
//{
//	RED=5,//0
//	GREEN,//1 //枚举类型的可能取值 是常量
//	BLUE//2 //后面的值默认加一
//};
//int main()
//{
//	//CPP 语法检查更严格
//	enum Color c = 2;
//	//enum Color c = BLUE;
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//	printf("%d\n", sizeof(c));
//	printf("%d\n", Color::RED);
//	return 0;
//}

//枚举的优点
//我们可以使用 #define 定义常量，为什么非要使用枚举？ 枚举的优点：
//1. 增加代码的可读性和可维护性
//2. 和#define定义的标识符比较枚举有类型检查，更加严谨。
//3. 防止了命名污染（封装）
//4. 便于调试
//5. 使用方便，一次可以定义多个常量
//枚举类型是一种类型

//实现一个简易计算器

//void menu()
//{
//	printf("*****************************\n");
//	printf("****  1. add    2. sub  *****\n");
//	printf("****  3. mul    4. div  *****\n");
//	printf("****  0. exit          *****\n");
//	printf("*****************************\n");
//}
//enum Option
//{
//	EXIT,//0
//	ADD,//1
//	SUB,//2
//	MUL,//3
//	DIV//4
//};
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case EXIT:
//				break;
//			case ADD:
//				break;
//			case SUB:
//				break;
//			case MUL:
//				break;
//			case DIV:
//				break;
//			default:
//				break;
//		}
//	} while (input);
//	return 0;
//}

//联合体(共用体)
// 
//联合也是一种特殊的自定义类型 这种类型定义的变量也包含一系列的成员，
// 特征是这些成员公用同一块空间（所以联合也叫共用体）

//联合类型的声明
//union Un
//{
//	char c;
//	int i;
//};
//联合变量的定义
//union Un un;
//计算连个变量的大小
//printf("%d\n", sizeof(un));


//联合的成员是共用同一块内存空间的，这样一个联合变量的大小，
//至少是最大成员的大小（因为联合至少得有能力保存最大的那个成员）

//union Un
//{
//	char c;//1
//	int i;//4
//};
//int main()
//{
//	union Un u;
//	printf("%p\n", &u);
//	printf("%p\n", &(u.i));
//	printf("%p\n", &(u.c));
//	printf("%d\n", sizeof(u));
//	return 0;
//}

//判断当前计算机的大小端

//int check_sys()
//{
//	int a = 1;
//	if ((*(char*)&a) == 1)
//	{
//		return 1;//小端
//	}
//	else
//	{
//		return 0;//大端
//	}
//}
//int check_sys()
//{
//	union U
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//	//返回1就是小端 返回0就是大端
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}

//联合的大小至少是最大成员的大小。
//当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍。

union Un
{
	//char a[5];//5;
	//short s[5];
	char c[10];//1 / 10
	int i;//4
};
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}