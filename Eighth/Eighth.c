#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//����1
int main()
{
	int ch = 0;
	//Ctrl + Z
	//EOF - end of file -> -1
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}
//
//����2
//int main()
//{
//	int ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);
//	return 0;
//}

//ѭ�����
//while
//int main()
//{
	//whileѭ��
	//while �﷨�ṹ
	//while (���ʽ)
	//ѭ����䣻
	//while (1)
	//{
	//	printf("hello\n");
	//}
	//int i = 1;
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		continue; //continue��whileѭ���е����þ��ǣ�
	//				  //continue��������ֹ����ѭ���ģ�Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ�У�����ֱ��
	//				  //��ת��while�����жϲ��֡�������һ��ѭ��������ж�
	//	printf("%d\n", i);
	//	i++;
	//}
	//while (i <= 10)
	//{
	//	if (i == 5)
	//		break;--break��whileѭ���е����ã�
	//	��ʵ��ѭ����ֻҪ����break����ֹͣ���ڵ����е�ѭ����ֱ����ֹѭ���� ���ԣ�while�е�
	//	break������������ֹѭ���ġ�
	//	printf("%d\n", i);
	//	i++;
	//}
//	return 0;
//}

//��ϰ
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}

//int main()
//{
//switch���Ҳ��һ�ַ�֧��䡣 �������ڶ��֧�������
//��̺�ϰ��
//��ÿ�� switch ����ж���һ��default�Ӿ��Ǹ���ϰ�ߣ����������ں���ټ�һ�� break
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		if (n == 1)
//			printf("hh\n");
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default://���п���
//		printf("�������\n");
//		break;
//	}

	//switch (day)
	//{
	//case 1:
	//	printf("����һ\n");
	//	break;
	//case 2:
	//	printf("���ڶ�\n");
	//	break;
	//case 3:
	//	printf("������\n");
	//	break;
	//case 4:
	//	printf("������\n");
	//	break;
	//case 5:
	//	printf("������\n");
	//	break;
	//case 6:
	//	printf("������\n");
	//	break;
	//case 7:
	//	printf("������\n");
	//	break;
	//}
	//if (day == 1)
	//	printf("����һ");
	//else if (day == 2)
	//	printf("���ڶ�");
	//else if (day == 3)
	//	printf("������");
	//else if (day == 4)
	//	printf("������");
	//...
//	return 0;
//}

//int main()
//{
//	//��ϰ
//	//1. �ж�һ�����Ƿ�Ϊ����
//	int i = 0;
//	printf("������һ������:\n");
//	scanf("%d", &i);
//	if (i % 2 == 1)
//	{
//		printf("������������!\n");
//	}
//	else
//		printf("��������!\n");
//	//2. ���1 - 100֮�������
//	int j = 0;
//	while (j <= 100)
//	{
//		if (j % 2 != 0)
//		{
//			printf("%d������\n", j);
//		}
//		j++;
//	}
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//	//if (num == 5)//= ��ֵ  == �ж����
//	//{
//	//	printf("hehe\n");
//	//}
//	return 0;
//}

//int main()
//{
	//��֧��䣨ѡ��ṹ��
	//if���
	//�﷨�ṹ��
	//	if (���ʽ)
	//		���;
	// 
	//if (���ʽ)
	//	���1;
	//else
	//	���2;
	//���֧    
	//if (���ʽ1)
	//	���1;
	//else if (���ʽ2)
	//	���2;
	//else
	//	���3;
	//if (���ʽ)
	//{ 
	//	���1;
	//}
	//else
	//{
	//	���2;
	//}
	//int a = 0;
	//int b = 2;
	//if(a == 1)
	//	if (b == 2)
	//	printf("hehe\n");
	//	else//else������������λ ifƥ��
	//	printf("haha\n");

	//int age = 10;
	//if (age < 18)
	//{ 
	//	printf("δ����\n");
	//	printf("����̸����\n");
	//}
	//else
	//{
	//	if (age >= 18 && age < 28)
	//		printf("����\n");
	//	else if (age >= 28 && age < 50)
	//		printf("׳��\n");
	//	else if (age >= 50 && age < 90)
	//		printf("����\n");
	//	else
	//		printf("�ϲ���\n");
	//}
		
	//int age = 20;
	//
	//if (age < 18)
	//	printf("δ����\n");
	//else if (age >= 18 && age < 28)
	//	printf("����\n");
	//else if (age >= 28 && age < 50)
	//	printf("׳��\n");
	//else if (age >= 50 && age < 90)
	//	printf("����\n");
	//else
	//	printf("�ϲ���\n");

//	if (age < 18)
//		printf("δ����\n");
//	else
//		printf("����\n");

//	if (age < 18)
//		printf("δ����\n");
//	return 0;
//}

//C������һ�� �ṹ���ĳ����������
//1.˳��ṹ
//2.ѡ��ṹ
//3.ѭ���ṹ
//int main()
//{
//	//C��������һ���ֺ� ; �����ľ���һ����䡣
//	int a = 0;
//	;//Ҳ�����-->�����
//	return 0;
//}