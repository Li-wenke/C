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
//    //�ֲ���������
//    printf("num = %d\n", num);//1
//    return 0;
//}
//

#include <stdio.h>
#include <string.h>

//int main()
//{
//    char arr[] = { 'b', 'i', 't' };
//    printf("%d\n", strlen(arr));//���ֵ
//    return 0;
//}

//C99 ��׼������һ������䳤����
//֧�����鴴����ʱ���ñ���ָ����С�ģ�����������鲻�ܳ�ʼ��
//VS2019 ��֧��C99�б䳤�����

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

//int Add(int x, int y)  ������ͺ���
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 20;//������͵ı���
//	int b = 40;
//	int sum = Add(a, b);//������ͺ���
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
//	printf("��������Ҫ��͵���:");
//	scanf("%d %d", &a, &b);
//	sum = Add(a, b);
//	printf("��Ϊ:%d\n", sum);
//
//	return 0;
//}

//���������Ľϴ�ֵ
//MAX - һ�㲻����Ѻ���������д��ȫ��д

//int Max(int x, int y)//����ȽϽϴ�ֵ����
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
//	int a = 0;//����Ƚ�ֵ����
//	int b = 0;//����Ƚ�ֵ����
//	int max = 0;//����ϴ�ֵ����
//	printf("��������������:");
//	scanf("%d %d", &a, &b);//���������Ƚϵ�ֵ
//	max = Max(a, b);//���ñȽϺ���
//	printf("�����������ֵĽϴ�ֵΪ:%d\n", max);
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
//	//printf("������һ����:");
//	scanf("%d", &a);
//	if (a % 5 == 0)
//	{
//		printf("�����ܱ�5����!\n");
//	}
//	else {
//		printf("�������ܱ�5����!\n");
//	}
//
//	return 0;
//}

//int main()
//{
//    //����
//    int m = 0;
//    printf("������һ������:");
//    scanf("%d", &m);
//
//    //�жϲ����
//    if (m % 5 == 0)
//        printf("YES\n");
//    else
//        printf("NO\n");
//
//    return 0;
//}

