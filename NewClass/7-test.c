#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//C���򳣼��Ĵ�����ࣺ�������  ���Ӵ���  ����ʱ����-->����ʱ��Ҫ�����
//									  ջ�����������ʱ����	

//Release�汾�����Ե���

//i��arr�Ǿֲ����������Ǵ����ջ���ϣ�ջ������ʹ�øߵ�ַ��ʹ�õ͵�ַ��
//i�ĵ�ַ��arr��ַС����Ϊ�±��������ַ���ɵ͵��߱仯�ģ�������±��������Ĺ������п��ܻ�Խ����ʵ�i
//Խ���ʵ��Ļ����ᵼ�³������ѭ��
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello bit\n");
//	}
//	return 0;
//}

//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿��
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//��ǰ������һ��ż��
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//�Ӻ���ǰ��һ������
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,3,2,5,6,9,4,6,13,15,21,7,8,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr, sz);
//	return 0;
//}

//ģ��ʵ��strlen
#include <assert.h>

int  my_strlen(char* ch)
{
	assert(ch);
	size_t count = 0;
	while (*ch++)
	{
		count++;
	}
	return count;
}

int main()
{
	char ch[] = "hello world!";
	int ret = my_strlen(ch);
	printf("%d", ret);
	return 0;
}

//ģ��ʵ��strcpy

char* my_strcpy(char* dest,const char* str)
{
	assert(dest);
	assert(str);
	char* ret = dest;
	while (*dest++ = *str++)
	{
		;
	}
	return ret;
}

int main()
{
	char ch1[20] = "i love you";
	char ch2[] = "you love me";
	printf("%s\n", my_strcpy(ch1, ch2));
	return 0;
}
