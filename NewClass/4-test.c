#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�����ʲô?
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 }; //���ű��ʽ ȡ���һ��ֵ
//    printf("%d\n", sizeof(arr));//4*4=16
//    return 0;
//} 

#include <stdlib.h>
//�����ʲô?
//int main()
//{
//	char ch[] = { "hello bit" };
//	//[hello bit\0]
//	printf("%d %d\n", sizeof(ch), strlen(ch));//10 9
//	//strlen - ����-���ַ������ȵģ���\0֮ǰ���ֵ��ַ�����
//	//sizeof - ������-�������/������ռ�ڴ��С����λ���ֽ�
//	return 0;
//}

//int main()
//{
//	char acX[] = "abcdefg";
//	char acY[] = { 'a','b','c','d','e','f','g' };
	//A.����acX������acY�ȼ� no
	//B.����acX������acY�ĳ�����ͬ no
	//C.����acX�ĳ��ȴ�������acY�ĳ��� yes
	//D.����acX�ĳ���С������acY�ĳ��� no
	//int a[2][] = { {0,1,2},{3,4,5} };//no
	//int a[][3] = { {0,1,2},{3,4,5} };//yes
	//int a[2][4] = { {0,1,2},{3,4},{5} };//no
	//int a[][3] = { {0,,2},{},{3,4,5} };//no
//	return 0;
//}

//ð������

//int main()
//{
//	int arr[] = { 6,3,1,4,8,9,3,0,11,27,15,12 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz-1; i++)
//	{
//		//һ��ð������Ĺ���
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]  < arr[j + 1])
//			{
//				int tep = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tep;
//				flag = 0;
//			}
//			
//		}
//		if (flag == 1)//һ��ð���������궼û�н���
//		{
//			break;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�

//void Init(int arr[],int sz)//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Sort(int arr[], int sz)//����
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//void Reverse(int arr[], int sz,int left,int right)
//{
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right ] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,5,6,7,9,21,4,3,10 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int i = 0;
//	Print(arr, sz);
//	//Init(arr,sz);//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//	Sort(arr,sz);
//	Print(arr, sz);//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//	Reverse(arr, sz,left,right);//ʵ��reverse()  �����������Ԫ�ص����á�
//	Print(arr, sz);
//	return 0;
//}

//��������
//һ��һ��Ԫ�ؽ���
 
int main()
{
	int arr1[] = {1,3,4,5,6,7,8};
	int arr2[] = {11,18,14,19,21,20};
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);

	for (i = 0; i < sz; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
//	int arr3[5] = {0};
//	//��������������Ԫ�صĵ�ַ - 0x0012ff44
//	//3 = 5;//err
//	/*arr3 = arr1;
//	arr1 = arr2;
//	arr2 = arr3;*/
	return 0;
}