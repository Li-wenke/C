#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��Hello world!�� printf�����з���ֵ�����printf(��Hello world!��)����ֵ
//int main()
//{
//	int i = printf("Hello world!");
//	printf("\n");
//	printf("%d", i);
//	return 0;
//}

//����3�Ƴɼ���Ȼ������Ƴɼ�������ɼ�Ϊ������ʽ
//3�Ƴɼ����ÿո�ָ�����Χ��0~100�� �����ʽscore1=60,score2=80,score3=90
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

//ѧ���Լ�3�Ƴɼ���ѧ�źͳɼ�֮����Ӣ�ķֺŸ������ɼ�֮����Ӣ�Ķ��Ÿ�����
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

//���Practice makes perfect!

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

//��ͬ���������������ڴ���ռ����ֽ�

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

//ʮ��������1234��Ӧ�İ˽��ƺ�ʮ�����ƣ���ĸ��д�����ÿո�ֿ�������Ҫ���ڰ˽���ǰ��ʾǰ��0����ʮ��������ǰ��ʾǰ��0X��

//int main()
//{
//    int i = 1234;
//    printf("%#o %#X", i, i);
//    return 0;
//}

//ʮ����������ABCDEF��Ӧ��ʮ������������ռ���Ϊ15��

//int main()
//{
//    printf("%15ld", 0xabcdefll);
//    return 0;
//}

//������

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

//���Ӧ��ASCII��

//int main()
//{
//    printf("%c%c%c%c%c%c%c%c%c%c%c%c", 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33);
//    return 0;
//}

//����ֻ��һ�У��������ڣ����������գ�������֮�������û�зָ���

//int main()
//{
//
//    int birthday = 0, month = 0, day = 0;
//    scanf("%d", &birthday);
//    //�ֱ��birthday�������࣬Ȼ��ֱ�ȡ��������
//    day = birthday % 100;
//    birthday /= 100;
//    month = birthday % 100;
//    birthday /= 100;
//    //���ʱҪע�ⲹȫǰ��0
//    printf("year=%d\n", birthday);
//    printf("month=%02d\n", month);
//    printf("date=%02d\n", day);
//    return 0;
//}

//����������

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

//��������ַ���Ӧ��ASCII��

//int main()
//{
//    char a = 0;
//    a = getchar();
//    printf("%d", a);
//    return 0;
//}

//(-8+22)��a-10+c��2����֮��Ľ����Ϊһ��������

//int main()
//{
//    printf("%d", ((-8 + 22) * 40 - 10 + 212 / 2));
//    return 0;
//}

//�����̺�����

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

//��һ����λ�������������

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

//����3����a, b, c�����������ε��ܳ������

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
//        printf("circumference=%.2lf area=%.2lf", l, sqrt(p * (p - a) * (p - b) * (p - c)));���׹�ʽ
//    }
//    return 0;
//}

// ������������

//#define �� 3.1415926
//int main()
//{
//    double i = 0;
//    scanf("%lf", &i);
//    double v = 0;
//    if (i >= 0 && i <= 15)
//    {
//        v = (4.0 / 3.0) * �� * (i * i * i);
//        printf("%.3lf", v);
//    }
//    return 0;
//}

//�������������Ӧ��Сд��ĸ

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

//2��n�η�

//int main()
//{
//    int i = 0;
//    scanf("%d", &i);
//    printf("%d", 2 << i - 1);
//    return 0;
//}

//��n��δ�򿪵�����,KiKiÿh�����ܺȹ�һ�����̣�
//����KiKi�ںȹ�һ������֮ǰ�������һ������ô����m���Ӻ��ж��ٺ�δ�򿪵����̣�

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

//ʮ��������a����һ���˽�����b�����a + b��ʮ���ƽ��

//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%x %o", &a, &b);
//    printf("%d", a + b);
//    return 0;
//}

//������ַ�����ĸ��YES�����ǣ�NO��

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

//����ˮ�ɻ��� - Lily Number������������֣����м��ֳ��������֣�
//����1461 ���Բ�ֳɣ�1��461��, ��14��61��, ��146��1), ������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number

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

//һ�У��ַ����У�����A��B���������ַ�0����

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

//��������
//���ÿ�����룬�����Pass����Fail����

//int main()
//{
//	int score = 0;
//	while (scanf("%d", &score) != EOF)////ѭ������ɼ�
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

//���������е���߷�


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

//ÿ�����룬���Ϊһ�У����������ĸ��Ԫ����������Сд���������Vowel�������������ĸ�Ƿ�Ԫ���������Consonant����

//int main()
//{
//    char a = 0;
//    while (scanf("%c", &a) != EOF)
//    {
//        //�����س�
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

//�ж�������ַ��ǲ�����ĸ

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

//��ĸ��Сдת��

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

//�ж��������Ĵ�С��ϵ

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

//���㵥λ��Ծ����

//int main()
//{
//    int t = 0;
//    while (scanf("%d", &t) != EOF)
//    {
//        if (t > 0)
//            printf("1\n");
//        else if (t == 0)//=�Ǹ�ֵ ==�����жϵ���
//            printf("%.1f\n", 1.0 / 2.0);
//        else
//            printf("0\n");
//    }
//    return 0;
//}

//������a��b��c�ܷ񹹳������Σ�����ܹ��������Σ��ж������ε����ͣ��ȱ������Ρ����������λ���ͨ�����Σ�

//int main()
//{
//    int a = 0, b = 0, c = 0;
//    while (scanf("%d %d %d ", &a, &b, &c) != EOF)
//    {
//        if (a + b > c && b + c > a && a + c > b)//a��b��c�ܷ񹹳�������
//        {
//            if (a == b && b == c && a == c)�ȱ�������
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if (a == b || b == c || a == c)����������
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else
//            {
//                printf("Ordinary triangle!\n");��ͨ������
//            }
//        }
//        else {
//            printf("Not a triangle!\n");����������
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

//һԪ���η���

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

//����·�����

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

//�򵥼�����

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

//��������
//����á� * ����ɵĶ�Ӧ�߳��������Σ�ÿ���� * ��������һ���ո�

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

//ֱ��������ͼ��

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

//��תֱ��������ͼ��

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

//���ո�ֱ��������ͼ��

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


// ������ͼ��

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

//��ת������

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

//����ͼ��


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

//K��ͼ��

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

//����ͼ��

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

// ��б����ͼ��

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

//��б��ͼ��

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

//X��ͼ�����Բ�ֳ�����б�ߣ�����i==jʱ����Ǻţ�����i==n-i-1ʱ����Ǻż��ɣ��������������ո�

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

//����������

//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)//����
//        {
//            for (j = 0; j < n; j++)//����
//            {
//                if (i == 0 || i == n - 1 || j == 0 || j == n - 1)//�����Σ������ڵ�һ��,��һ��,���һ��,���һ��ʱ���ӡ
//                    printf("* ");
//                else
//                    printf("  ");//����ʱ���ǿո� 2���ո��Ӧһ����* ��
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//����������

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

//�������в���һ��ֵ

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

//ɸѡ��������

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

//ȥ��

//int main()
//{
//	int n = 0;//n����������
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
