#define _CRT_SECURE_NO_WARNINGS 1
// ����Դ�ļ��ĵ�һ��
// ����scanf_s


#include <stdio.h>

// 4.ö�ٳ���
// ö��-- һһ�о�
// 
// 
// �Ա�:�У�Ů������
// ��Ԫ��:�죬�ƣ���
// ���ڣ�1��2��3��4��5��6��7
//
//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//
//int main()
//{
//	enum Color color = BLUE;//color�Ǳ���
//	color = YELLOW;
//	//BLUE = 6; //������
//	return 0;
//}

// ö�ٹؼ��� --- enum
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
// MALE��FEMALE��SECRET --ö�ٳ���	
//int main()
//{
//	/*enum Sex s = MALE;
//	enum Sex m = FEMALE;*/
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}

//3.#define ����ı�ʶ������
//#define Max 10
//int main()
//{
//	int arr[Max] = { 0 };
//	printf("%d\n",Max);
//	return 0;
//}

//int main()
//{
//	// int num1 = 0;
//	// int num2 = 0;
//	// int sum = 0;
//	// scanf��C�����ṩ��
//	// scanf_s���Ǳ�׼C�����ṩ����vs�������ṩ�� �����п�ƽ̨��/����ֲ��
//	// scanf("%d %d", &num1, &num2);
//	// scanf
//	// strcpy
//	// strlen
//	// strcat
//	// .....
//	// ����ȫ��
//	// strcpy_s
//	// .....
//	// sum = num1 + num2;
//	// printf("sum = %d\n", sum);
//
//	// ����:�����в��ɱ���� -->���֤�š�Ѫ��
// 1.���泣��
//	// ���泣��:�����ϵĳ���
//	//3;// ���泣��
//	//100;// ���泣��
//	//3.14;//���泣��
// 2.const ���εĳ�����
//	// const -- ������
//	// const���εĳ�����
//	//const int num = 4;
//	//printf("%d\n", num);
//	//num = 8;// ���ܸı���
//	//printf("%d\n", num);
//	const int n = 10; // n�Ǳ���,�������г�����,����n�ǳ�����
//	int arr[n] = { 0 };
//	n = 20;
//	return 0;
//}