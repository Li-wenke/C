#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//“Hello world!” printf函数有返回值，输出printf(“Hello world!”)返回值
//int main()
//{
//	int i = printf("Hello world!");
//	printf("\n");
//	printf("%d", i);
//	return 0;
//}

//输入3科成绩，然后把三科成绩输出，成绩为整数形式
//3科成绩，用空格分隔，范围（0~100） 输出格式score1=60,score2=80,score3=90
//int main()
//{
//    int score1 = 0;
//    int score2 = 0;
//    int score3 = 0;
//    scanf("%d %d %d", &score1, &score2, &score3);
//    if ((score1 >= 0 && score1 <= 100) && (score2 >= 0 && score2 <= 100) && (score3 >= 0 && score3 <= 100))
//    {
//        printf("score1=%d,score2=%d,score3=%d", score1, score2, score3);
//    }
//    return 0;
//}

//学号以及3科成绩，学号和成绩之间用英文分号隔开，成绩之间用英文逗号隔开。
// The each subject score of No. 17140216 is 80.85, 90.55, 100.00.
//int main()
//{
//    int i = 0;
//    float c = 0;
//    float m = 0;
//    float e = 0;
//    scanf("%d%f%f%f", &i, &c, &m, &e);
//    printf("THe each subject score of No.  %d is  %.2f, %.2f, %.2f.",i,c,m,e);
//    return 0;
//}

//	1
//   1 1
//  1 1 1
// 1 1 1 1
//1 1 1 1 1

//输出Practice makes perfect!

//int main()
//{
//    printf("Practice makes perfect!\n");
//    return 0;
//}

//v   v
//
//v v
//
//v

//int main()
//{
//    printf("v   v\n");
//    printf(" v v \n");
//    printf("  v\n");
//    return 0;
//}

//不同整型数据类型在内存中占多大字节

//int main()
//{
//    printf("The size of short is %d bytes.\n", sizeof(short));
//    printf("The size of int is %d bytes.\n", sizeof(int));
//    printf("The size of long is %d bytes.\n", sizeof(long));
//    printf("The size of long long is %d bytes.\n", sizeof(long long));
//    return 0;
//}

//int main()
//{
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    \n");
//    return 0;
//}

//十进制整数1234对应的八进制和十六进制（字母大写），用空格分开，并且要求，在八进制前显示前导0，在十六进制数前显示前导0X。

//int main()
//{
//    int i = 1234;
//    printf("%#o %#X", i, i);
//    return 0;
//}

//十六进制整数ABCDEF对应的十进制整数，所占域宽为15。

//int main()
//{
//    printf("%15ld", 0xabcdefll);
//    return 0;
//}

//金字塔

//int main()
//{
//    char a = 0;
//    int i = 0;
//    scanf("%c", &a);
//    for (i = 1; i <= 5; i++)
//    {
//        int j = 0;
//        for (j = 1; j <= 5 - i; j++)
//        {
//            printf(" ");
//        }
//        for (j = 1; j <= i; j++)
//        {
//            printf("%c ", a);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//相对应的ASCII码

//int main()
//{
//    printf("%c%c%c%c%c%c%c%c%c%c%c%c", 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33);
//    return 0;
//}

//输入只有一行，出生日期，包括年月日，年月日之间的数字没有分隔符

//int main()
//{
//
//    int birthday = 0, month = 0, day = 0;
//    scanf("%d", &birthday);
//    //分别对birthday进行求余，然后分别取出年月日
//    day = birthday % 100;
//    birthday /= 100;
//    month = birthday % 100;
//    birthday /= 100;
//    //输出时要注意补全前导0
//    printf("year=%d\n", birthday);
//    printf("month=%02d\n", month);
//    printf("date=%02d\n", day);
//    return 0;
//}

//交换两个数

//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("a=%d,b=%d", &a, &b);
//    a = a ^ b;
//    b = a ^ b; a ^ b ^ b
//    a = a ^ b;a ^ a ^ b
//    printf("a=%d,b=%d\n", a, b);
//    return 0;
//}

//输出输入字符对应的ASCII码

//int main()
//{
//    char a = 0;
//    a = getchar();
//    printf("%d", a);
//    return 0;
//}

//(-8+22)×a-10+c÷2计算之后的结果，为一个整数。

//int main()
//{
//    printf("%d", ((-8 + 22) * 40 - 10 + 212 / 2));
//    return 0;
//}

//整数商和余数

//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    if (a > 0 && b < 10000)
//    {
//        printf("%d %d", (a / b), (a % b));
//    }
//    return 0;
//}

//将一个四位数，反向输出。

//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    if (a >= 1000 && a <= 9999)
//    {
//        printf("%d", a % 10);
//        a /= 10;
//        printf("%d", a % 10);
//        a /= 10;
//        printf("%d", a % 10);
//        a /= 10;
//        printf("%d\n", a);
//    }
//    return 0;
//}

//角形3条边a, b, c，计算三角形的周长和面积

#include <math.h>
//int main()
//{
//    double a = 0, b = 0, c = 0;
//    scanf("%lf %lf %lf", &a, &b, &c);
//    double l = 0;
//    double s = 0;
//    if (a > 0 && b > 0 && c > 0 && a + c > c)
//    {
//        l = a + b + c;
//        double p = l / 2.f;
//        printf("circumference=%.2lf area=%.2lf", l, sqrt(p * (p - a) * (p - b) * (p - c)));海伦公式
//    }
//    return 0;
//}

// 计算球体的体积

//#define π 3.1415926
//int main()
//{
//    double i = 0;
//    scanf("%lf", &i);
//    double v = 0;
//    if (i >= 0 && i <= 15)
//    {
//        v = (4.0 / 3.0) * π * (i * i * i);
//        printf("%.3lf", v);
//    }
//    return 0;
//}

//多组输入输出对应的小写字母

//int main()
//{
//char a = 0;
//while (scanf("%c", &a) != EOF)
//{
//    getchar();
//    printf("%c\n", a + 32);
//}
//return 0;
//}

//2的n次方

//int main()
//{
//    int i = 0;
//    scanf("%d", &i);
//    printf("%d", 2 << i - 1);
//    return 0;
//}

//有n盒未打开的酸奶,KiKi每h分钟能喝光一盒酸奶，
//并且KiKi在喝光一盒酸奶之前不会喝另一个，那么经过m分钟后还有多少盒未打开的酸奶？

//int main()
//{
//    int n = 0, h = 0, m = 0;
//    scanf("%d %d %d", &n, &h, &m);
//    if (m <= n * h)
//    {
//        printf("%d", n - (m / h) - (m % h));
//    }
//    return 0;
//}

//十六进制数a，和一个八进制数b，输出a + b的十进制结果

//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%x %o", &a, &b);
//    printf("%d", a + b);
//    return 0;
//}

//输出该字符是字母（YES）或不是（NO）

//int main()
//{
//    char c = 0;
//    scanf("%c", &c);
//    if (c >= 'A' && c <= 'z')
//    {
//        printf("YES");
//    }
//    else {
//        printf("NO");
//    }
//    return 0;
//}

//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，
//比如1461 可以拆分成（1和461）, （14和61）, （146和1), 如果所有拆分后的乘积之和等于自身，则是一个Lily Number

//int main()
//{
//    int i = 0;
//    for (i = 10000; i <= 99999; i++)
//    {
//        int g = (i / 10000) * (i % 10000);//1*2345
//        int s = (i / 1000) * (i % 1000);//12*345
//        int b = (i / 100) * (i % 100);//123*45
//        int q = (i / 10) * (i % 10);//1234*5
//        if (i == (g + s + b + q))
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}

//void bb_pai(int arr[], int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz - 1; i++)
//    {
//        int j = 0;
//        int flag = 1;
//        for (j = 0; j < sz - 1 - i; j++)
//        {
//            if (arr[j] < arr[j + 1])
//            {
//                int temp = arr[j + 1];
//                arr[j + 1] = arr[j + 1];
//                arr[j] = temp;
//                flag = 0;
//            }
//        }
//        if (flag == 1)
//        {
//            break;
//        }
//    }
//}

//int main()
//{
//    int arr[30] = { 0 };
//    int n = 0;
//    int i = 0;
//    int score = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//    bb_pai(arr, n);
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//一行，字符序列，包含A或B，输入以字符0结束

//int main()
//{
//    char c = 0;
//    int  a = 0;
//    int b = 0;
//    while (scanf("%c", &c) != '0')
//    {
//        if (c == '0')
//        {
//            break;
//        }
//        if (c == 'A')
//        {
//            a++;
//        }
//        if (c == 'B')
//        {
//            b++;
//        }
//    }
//    if (a > b)
//    {
//        printf("%c", 'A');
//    }
//    else if (a < b) {
//        printf("%c", 'B');
//    }
//    else {
//        printf("%c", 'E');
//    }
//    return 0;
//}

//多组输入
//针对每行输入，输出“Pass”或“Fail”。

//int main()
//{
//	int score = 0;
//	while (scanf("%d", &score) != EOF)////循环读入成绩
//	{
//		if (score >= 60)
//		{
//			printf("Pass\n");
//		}
//		else
//		{
//			printf("Fail\n");
//		}
//	}
//	return 0;
//}

//三个分数中的最高分


//int main()
//{
//    int math = 0, english = 0, chinese = 0;
//    scanf("%d %d %d ", &chinese, &math, &english);
//    if (chinese > math)
//    {
//        if (math > english)
//        {
//            printf("%d", chinese);
//        }
//        else {
//            printf("%d", english);
//        }
//    }
//    else
//    {
//        if (math < english)
//        {
//            printf("%d", english);
//        }
//        else
//        {
//            printf("%d", math);
//        }
//    }
//    return 0;
//}

//每组输入，输出为一行，如果输入字母是元音（包括大小写），输出“Vowel”，如果输入字母是非元音，输出“Consonant”。

//int main()
//{
//    char a = 0;
//    while (scanf("%c", &a) != EOF)
//    {
//        //跳过回车
//        if (a == '\n')
//            continue;
//        if (a == 'A' || a == 'a' || a == 'E' || a == 'e' || a == 'O' || a == 'o' || a == 'U' || a == 'u' || a == 'I' || a == 'i')
//        {
//            printf("Vowel\n");
//        }
//        else {
//            printf("Consonant\n");
//        }
//    }
//    return 0;
//}

//判断输入的字符是不是字母

//int main()
//{
//    char ch = 0;
//    while (scanf("%c", &ch) != EOF)
//    {
//        getchar();
//        if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
//        {
//            printf("%c is an alphabet.\n", ch);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", ch);
//        }
//    }
//    return 0;
//}

//字母大小写转换

//int main()
//{
//    char ch = 0;
//    while (scanf("%c", &ch) != EOF)
//    {
//        getchar();
//        if (ch >= 'a' && ch <= 'z')
//        {
//            printf("%c\n", ch - 32);
//        }
//        else if (ch >= 'A' && ch <= 'Z')
//        {
//            printf("%c\n", ch + 32);
//        }
//    }
//    return 0;
//}

//判断两个数的大小关系

//int main()
//{
//    int i = 0, j = 0;
//    while (scanf("%d %d", &i, &j) != EOF)
//    {
//        if (i > j)
//        {
//            printf("%d>%d\n", i, j);
//        }
//        else if (i < j)
//        {
//            printf("%d<%d\n", i, j);
//        }
//        else {
//            printf("%d=%d\n", i, j);
//        }
//    }
//    return 0;
//}

//计算单位阶跃函数

//int main()
//{
//    int t = 0;
//    while (scanf("%d", &t) != EOF)
//    {
//        if (t > 0)
//            printf("1\n");
//        else if (t == 0)//=是赋值 ==才是判断等于
//            printf("%.1f\n", 1.0 / 2.0);
//        else
//            printf("0\n");
//    }
//    return 0;
//}

//三条边a，b，c能否构成三角形，如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）

//int main()
//{
//    int a = 0, b = 0, c = 0;
//    while (scanf("%d %d %d ", &a, &b, &c) != EOF)
//    {
//        if (a + b > c && b + c > a && a + c > b)//a，b，c能否构成三角形
//        {
//            if (a == b && b == c && a == c)等边三角形
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if (a == b || b == c || a == c)等腰三角形
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else
//            {
//                printf("Ordinary triangle!\n");普通三角形
//            }
//        }
//        else {
//            printf("Not a triangle!\n");不是三角形
//        }
//    }
//    return 0;
//}

//BMI

//int main()
//{
//    int k = 0;
//    int s = 0;
//    float bmi = 0;
//    while (scanf("%d %d ", &k, &s) != EOF)
//    {
//        bmi = k / ((s / 100.0) * (s / 100.0));
//        if (bmi < 18.5)
//            printf("Underweight\n");
//        else if (bmi >= 18.5 && bmi <= 23.9)
//            printf("Normal\n");
//        else if (bmi > 23.9 && bmi <= 27.9)
//            printf("Overweight\n");
//        else
//            printf("Obese\n");
//    }
//    return 0;
//}

//一元二次方程

#include <math.h>
//int main()
//{
//    float a = 0, b = 0, c = 0;
//    float deta = 0, x1 = 0, x2 = 0;
//    while (scanf("%f %f %f", &a, &b, &c) != EOF)
//    {
//        deta = (b * b) - 4 * a * c;
//        if (a > 0 || a < 0)
//        {
//            if (deta > 0)
//            {
//                x1 = ((-b) - sqrt(deta)) / (2 * a);
//                x2 = ((-b) + sqrt(deta)) / (2 * a);
//                printf("x1=%.2f;x2=%.2f\n", x1, x2);
//            }
//            else if (deta < 0)
//            {
//                x1 = (-b) / (2 * a);
//                x2 = (-b / 2 / a);
//                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", x1, (sqrt(-deta) / (2 * a)), x2, (sqrt(-deta) / (2 * a)));
//            }
//            else {
//                x1 = x2 = (-b) / (2 * a);
//                printf("x1=x2=%.2f\n", x1);
//            }
//        }
//        else
//        {
//            printf("Not quadratic equation\n");
//        }
//    }
//    return 0;
//}

//获得月份天数

//int main()
//{
//    int year = 0, month = 0;
//    while (scanf("%d %d", &year, &month) != EOF)
//    {
//        switch (month)
//        {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            printf("31\n");
//            break;
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//            printf("30\n");
//            break;
//        case 2:
//            if ((0 == year % 4 && 0 != year % 100) || (0 == year % 400))
//                printf("29\n");
//            else
//                printf("28\n");
//            break;
//        default:
//            break;
//        }
//    }
//    return 0;
//}

//简单计算器

//int main()
//{
//    char f = 0;
//    double ch1 = 0, ch2 = 0;
//    while (scanf("%lf %c %lf", &ch1, &f, &ch2) != EOF)
//    {
//        switch (f)
//        {
//        case '+':
//            printf("%.4lf%c%.4lf=%.4lf\n", ch1, f, ch2, ch1 + ch2);
//            break;
//        case '-':
//            printf("%.4lf%c%.4lf=%.4lf\n", ch1, f, ch2, ch1 - ch2);
//            break;
//        case '*':
//            printf("%.4lf%c%.4lf=%.4lf\n", ch1, f, ch2, ch1 * ch2);
//            break;
//        case '/':
//            if (ch2 == 0.0)
//            {
//                printf("Wrong!Division by zero!\n");
//            }
//            else {
//                printf("%.4lf%c%.4lf=%.4lf\n", ch1, f, ch2, ch1 / ch2);
//            }
//
//            break;
//        default:
//            printf("Invalid operation!\n");
//            break;
//        }
//    }
//    return 0;
//}

//多组输入
//输出用“ * ”组成的对应边长的正方形，每个“ * ”后面有一个空格。

//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        if (n >= 1 && n <= 20)
//        {
//            int i = 0;
//            for (i = 0; i < n; i++)
//            {
//                int j = 0;
//                for (j = 0; j < n; j++)
//                {
//                    printf("* ");
//                }
//                printf("\n");
//            }
//        }
//    }
//    return 0;
//}

//直角三角形图案

//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//翻转直角三角形图案

//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = n; j > i; j--)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//带空格直角三角形图案

//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            int z = 0;
//            for (z = 0; z <= (n + 2) - (2 * i); z++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


// 金字塔图案

//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n - i - 1; j++)
//            {
//                printf(" ");
//            }
//            int z = 0;
//            for (z = 0; z <= i; z++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//翻转金字塔

//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        int z = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (z = 1; z <= i; z++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j <= (n - 1)-i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//菱形图案


//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n + 1; i++)
//        {
//            for (j = 1; j <= n- i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (i = 0; i < n; i++)
//        {
//            for (j = 1; j <= i+1; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j <= n - i-1; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        return 0;
//    }
//    return 0;
//}

//K字图形

//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i <= n; i++)
//        {
//            for (j = 0; j <= n - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j <= i + 1; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//弓箭图案

//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i <= n; i++)
//        {
//            for (j = 0; j <= n - i - 1; j++)
//            {
//                printf("  ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j <= i; j++)
//            {
//                printf("  ");
//            }
//            for (j = 0; j <= n - i - 1; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

// 反斜线形图案

//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 1; j <= i ; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < n; j++)
//            {
//                if (j == 0)
//                {
//                    printf("*");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//正斜线图案

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j <= n - i - 1; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= n; j++)
//			{
//				if (j == 0)
//				{
//					printf("*");
//				}
//			}
//			if (i <= n - 1)
//			{
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}

//X形图案可以拆分成两根斜线，其中i==j时输出星号，或者i==n-i-1时输出星号即可，其他情况皆输出空格

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (j == n - i - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//				
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//空心正方形

//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)//行数
//        {
//            for (j = 0; j < n; j++)//列数
//            {
//                if (i == 0 || i == n - 1 || j == 0 || j == n - 1)//正方形，所以在第一行,第一列,最后一行,最后一列时候打印
//                    printf("* ");
//                else
//                    printf("  ");//其余时候都是空格 2个空格对应一个“* ”
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//空心三角形

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (j==0||i==n-1||i==j)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//有序数列插入一个值

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	int c = 0;
//	scanf("%d", &c);
//	arr[n ] = c;
//	for (i = 0; i <= n ; i++)
//	{
//		for (j = 0; j <= n  - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//	for (i = 0; i < n+1 ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//筛选法求素数

//#include <math.h>
//int main()
//{
//    int n = 0;
//    int count = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 2; i <=n; i++)
//        {
//            int j = 0;
//            int flag = 1;
//            for (j = 2; j <= sqrt(i); j++)
//            {
//                if (i % j == 0)
//                {
//                    flag = -1;
//                    break;
//                }
//            }
//            if (flag == 1)
//            {
//                printf("%d ", i);
//                count++;
//            }
//        } 
//        printf("\n");
//        printf("%d\n", n - count - 1);
//    }
//	return 0;
//}

//去重

//int main()
//{
//	int n = 0;//n个整数数列
//	int arr[1000] = { 0 };
//	scanf("%d", &n);
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = i+1; j < i; j++)
//		{
//			if ((arr[i] ^ arr[j]) == 0)
//			{
//				arr[j] = 0;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//    int n = 0, m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[1000] = { 0 }, arr2[1000] = { 0 }, arr3[1000] = { 0 };
//    int i = 0, j = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    for (i = 0; i < n + m; i++)
//    {
//        if (i < n)
//        {
//            arr3[i] = arr[i];
//        }
//        else
//        {
//            arr3[i] = arr2[i - n];
//        }
//    }
//    for (i = 0; i < n + m; i++)
//    {
//        int flag = 1;
//        for (j = 0; j < n + m - i - 1; j++)
//        {
//            if (arr3[j] > arr3[j + 1])
//            {
//                int temp = arr3[j + 1];
//                arr3[j + 1] = arr3[j];
//                arr3[j] = temp;
//                flag = -1;
//            }
//        }
//        if (flag == 1)
//        {
//            break;
//        }
//    }
//    for (i = 0; i < n + m; i++)
//    {
//        printf("%d ", arr3[i]);
//    }
//    return 0;
//}

//int main()
//{
//    float score[5][6];
//    int i = 0, j = 0;
//    for (i = 0; i < 5; i++)
//    {
//        float sum = 0;
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%f",&score[i][j]);
//            sum += score[i][j];
//        }
//        score[i][5] = sum;
//    }
//    for (i = 0; i < 5; i++)
//    {
//        for (j = 0; j < 6; j++)
//        {
//            printf("%.1f ", score[i][j]);
//        }
//        printf("\n");
//    }
//	return 0;
//}
