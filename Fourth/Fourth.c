#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int arr[10] = { 0 };//10���������������
	int sz = 0;
	// 10*sizeof(int) = 40
	printf("%d\n", sizeof(arr));
	// ���������Ԫ�ظ���
	// ���� = �����ܴ�С/ÿ��Ԫ�صĴ�С
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	int a = 10;
	//sizeof�ļ������/������ռ�ռ�Ĵ�С,��λ���ֽ�
	printf("%d\n", sizeof(a));//4
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof a);//4
	printf("%d\n", sizeof(int));//4
	return 0;
}

// ��Ŀ������
// ˫Ŀ������
// ��Ŀ������
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//˫Ŀ������
//	//c�����б�ʾ���
//	//0-��
//	//��0-��
//	//int a = 0;
//	int a = -2;
//	int b = -a;
//	int c = -3;//+���Ŷ���sheng'l
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}

// ��ֵ������
// = += -= *= /= &= ^=  |=    >>=   <<=
//int main()
//{
//	int a = 10;
//	a = 20;// =��ֵ   == �ж����
//	a = a + 10;
//	a += 10;
//	a -= 10;
//	a = a & 2;
//	a &= 2;
//	return 0;
//}

// λ����
// & ^ |
//int main()
//{
//	// (2����)λ����
//	// &��λ�� ��-->���� һ����� 
//	// |��λ�� ��-->���� һ������
//	// ^��λ���  ���--> ��Ӧ�Ķ�������ͬΪ0 ��ͬ��Ϊ1
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	// 011
//	// 101
//	// 001 
//	// 111
//	// 110
//	printf("%d\n", c);
//	printf("%d\n", a | b);
//	printf("%d\n", a ^ b);
//	return 0;
//}

// ��λ������
// >>  <<
//int main()
//{
//	// ��(2����)λ ������
//	// << ����
//	// >> ����
//	int a = 1;
//	// ����1ռ4���ֽ�-32bitλ
//	// 	   0000000000000000000000000000001
//	// 01 -->1
//	int  b =  a << 2 ;
//	// b = a + 1;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}

// ����������
// + - * / %               %-->ȡ����
//int main()
//{
//	int a = 5 % 2;//5����2������ȡģ
//	printf("%d\n", a);
//	return 0;
//}

// ���� --->һ����ͬ����Ԫ�صļ���
//int main()
//{
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//int d = 10;
	//int e = 24;
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10}; // ����һ�����10���������ֵ�����
	//int i = 0;
	//while (i < 10)
	//{
	//	printf("%d\n", arr[i]);
	//	i++;
	//}
	// printf("%d\n", arr[4]);//5   ���±����ʽ����Ԫ��
	// arr[�±�]

	//char ch[20]; // �ַ�������
	//float arr[5]; // ����������
//	return 0;
//}

// ���� -->�򻯴���,���븴��
// printf Ҳ�Ǻ���
// scanf  ���� -->���ڿ⺯��
//f(x) = 2 * x + 1;
//f(x, y) = x + y;
//int Add(int x, int y) // �Զ��庯��
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	// sum = num1 + num2;  
//	sum = Add(num1, num2);
//	// sum = a + b;
//	sum = Add(a, b);
//	sum = Add(2, 3);
//	printf("sum = %d\n", sum);
//	return 0;
//}

// ѭ�����
//int main()
//{
//	int line = 0;
//	printf("����ѧУ\n");
//	while (line <= 20000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//	if (line >= 20000)
//	{
//		printf("��Offer!");
//	}
//	return 0;
//}

// ѡ�����
//int main()
//{
//	int input = 0;
//	printf("����ѧУ\n");
//	printf("��Ҫ�ú�ѧϰ��?(1/0)\n");
//	scanf("%d", &input);//1/0
//	if (input == 1) {
//		printf("��Offer!\n");
//	}
//	else {
//		printf("�ؼ��ֵذ�!\n");
//	}
//	return 0;
//}

// ע�� 
// ��������Щ�Ƚ��Ѷ������Լ�һ��ע������

///*
//int main()
//{ 
//	// /* .... */ --->C����ע�ͷ��  ����Ƕ��
//	//  //....   --> C++ע�ͷ��
//	/*
//	int a = 10;
//	*/
//	return 0;
//}
//*/