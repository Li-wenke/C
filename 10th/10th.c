#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 1; i <= 3; i++)
	{
		printf("����������->");
		scanf("%s", &password);
		if (strcmp(password, "123456") == 0)//== ���������Ƚ������ַ����Ƿ���ȣ�Ӧ������һ���⺯��-strcmp
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
			printf(" �������\n");
	}
	if (i == 3)
		printf("3�����������,�Ƴ�����");
	return 0;
}

//#include <string.h>
//#include <Windows.h>
//#include <stdlib.h>
//int main()
//{
//	//welcome to China!!!!!
//	//#####################
//	//we################!!
//	//wel##############!!!
//	//welc############!!!!
//	//...
//	//welcome to China!!!!!
//	char arr1[] = { "welcome to China!!!!!" };
//	char arr2[] = { "#####################" };
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1);
//	while (left <= right)
//	{
//		//ͣ��һ��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������-cls -�����Ļ
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}

//���ֲ��ҷ�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;
//	int right = sz - 1;
//
//	while(left <= right)
//	{ 
//		int mid = (left + right) / 2;
//		if(arr[mid] > k){ 
//			right = mid - 1;
//		}
//		else if (arr[mid] < k){
//			left = mid + 1;
//		}
//		else {
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ�����");
//	return 0;
//}

//Ч��̫�� �����������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//дһ�����룬��arr[]�������ҵ�7
//	int i = 0;
//	int sz = sizeof(arr[]) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ���,�±���:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("1!+2!+3!+....+10!=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int i = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n ; i++)
//		{
//			ret *= i;
//		}
//		//n�Ľ׳�
//		sum += ret;
//	}
//	printf("1!+2!+3!+....+10!=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int i = 1;
//	printf("����һ������:");
//	scanf("%d", &n);
//	//for (i = 1; i <= n; i++)
//	//{
//	//	ret *= i;
//	//}
//	//while (i <= n)
//	//{
//	//	ret *= i;
//	//	i++;
//	//}
//	do
//	{
//		ret *= i;
//		i++;
//	} while (i <= n);
//	printf("n�Ľ׳�:%d", ret);
//	return 0;
//}

//do...whlie
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	//ѭ��0��
//	return 0;
//}
//forѭ���ĳ�ʼ�����������ж϶�����ʡ��
//����
//forѭ�����жϲ��������ʡ��������:��Ϊ��	
//int main()
//{
//	for (;;)
//	{
//		printf("hello\n");
//	}
//	return 0;
//}

//forѭ��ѭ������ȡֵ���á�ǰ�պ󿪡�д�� ����  ���Ǿ���
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0 ;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//������forѭ�����ڸı�ѭ������
//int main()
//{
//	int i = ;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			continue;
//		printf("Hello,World!\n");
//	}
//	return 0;
//}

//forѭ��
//for
//while
//do...while
//break -->����ѭ��
//continue-->��������ѭ��
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	/*
//	int ch = 0;
//	//Ctrl + Z
//	//EOF - end of file �ļ�������־  -> -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//	// ��ɶ��?
//	char password[20] = { 0 };
//	char ch = 0;
//	int ret = 0;
//	printf("����������:>");
//	scanf("%s", &password);//�������벢�����password���鵱��
//	//��������ʣ��һ��'\n'
//	//��ȡһ��'\n'
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();//Y/N
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//	//printf("%d\n", '\n');
//	return 0;
//}

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