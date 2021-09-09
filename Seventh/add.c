#define _CRT_SECURE_NO_WARNINGS 1
static int  g_val = 2021; //全局变量

//定义一个函数
//static int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

int main()
{
	double h;//华氏温度变量
	double c;
	printf("输入一个华氏温度:");
	scanf("%lf", &h);
	c = 5 * (h - 32) / 9;
	printf("摄氏温度:%-2lf\n", c);
	return 0;
}