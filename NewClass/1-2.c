#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���������������������
//������:
//�ֲ�������������:���Ǳ������ڵľֲ���Χ��
//ȫ�ֱ�����������:��������


//int g_val = 20;//ȫ�ֱ���
////printf("3:%d\n", g_val);	
//int main()
//{
//	printf("1:%d\n", g_val);
//	{
//		printf("2:%d\n", g_val);
//	}
//	printf("3:%d\n", g_val);
//	printf("Hello,World!\n");
//	int a = 10;
//	printf("%d\n", a);
//	return 0;
//}

//����һ�±���
//extern int val;
//int main()
//{
//	printf("%d\n", val);
//	return 0;
//}

//��������
//��������������-->�������������ٵ�ʱ���
//�ֲ���������������:����ֲ��������ڵ����÷�Χ�������ڿ�ʼ,���ֲ�������Χ��������
//ȫ�ֱ�������������--->�������������
//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);
//	return 0;
//}

//���� --->�������
//��Ϊ:
//		���泣��
//		const���εĳ���
//		#define����ı�ʶ������
//		ö�ٳ���

#define MAX 100;

//int main()
//{
	//1.���泣��
	//3.14;
	//10;
	//'a';
	//'abcdef'

	//2.const���εĳ���
		//int num = 20;//����
		//const int num = 20;//num�ǳ����� --���г�����(���ܱ��ı������)
		//num = 40;
		//printf("%d\n", num);
	//int  arr[10] = { 0 };//���� 10��Ԫ��
	//const int n = 10;//��const������ �����ϻ��Ǳ��� ���ǳ���
	//int arr2[n] = { 0 };// n�Ǳ��� �����ǲ��е�   ���ܷ��䳣����СΪ 0 ������ Ӧ���볣�����ʽ

	//3.#define����ı�ʶ������
		//int n = MAX;
		//MAX = 1000;//������
		//printf("n = %d\n", n);
	//4.ö�ٳ���
	//���� ����һһ�оٵĳ���
//	return 0;
//}

//�Ա�:
//enum Sex
//{
	//����ö���͵ı�����δ������ȡֵ
	//ö�ٳ���
//	MALE = 3,//����ֵ 
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//4.ö�ٳ���
	//���� ����һһ�оٵĳ���
	// s ->ö�ٳ����ı���
//	enum Sex s = MALE;
	//MALE = 3; //err
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0; 
//}

//�ַ��� | ת���ַ� | ע��
//�ַ�������һ���ַ�->��˫������������һ���ַ�
//int main()
//{
//	//"hello"
//	//"miss"
//	return 0;
//}

#include <string.h>
//int main()
//{
	//�ַ����� - ����->��һ����ͬ���͵�Ԫ��
	//�ַ���	�ڽ�β��λ��������һ��\0���ַ�
	//\0���ַ����Ľ�����־ �����ַ���������

	//char arr[] = "hello" ;
	//char arr[] = "abc";
	//char arr2[] = { 'a','b','c' };
	//printf("%d\n", sizeof(arr));
	// 
	//��һ���ַ����ĳ���
	 
	//int len = strlen("abc");//string length
	//printf("%d\n", len);
	
	//printf("%d\n", strlen(arr));//3
	//printf("%d\n", strlen(arr2));//���ֵ
	//��ӡ�ַ���
	//printf("%s\n", arr);	//  abc\0 
	//printf("%s\n", arr2);//abc���������abc    abc 
//	return 0;
//}

//ת���ַ�
//ת����ԭ������˼
//\ ? ����д��������ʺ�ʱʹ�ã���ֹ���Ǳ�����������ĸ��
//\' ���ڱ�ʾ�ַ�����'
//\�� ���ڱ�ʾһ���ַ����ڲ���˫����
//\\ ���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з���
//\a �����ַ�������
//\b �˸��
//\f ��ֽ��
//\n ����
//\r �س�
//\t ˮƽ�Ʊ��
//\v ��ֱ�Ʊ��
//\ddd ddd��ʾ1~3���˽��Ƶ����֡� �磺 \130 X
//\xdd dd��ʾ2��ʮ���������֡� �磺 \x30 0
//int main()
//{
	//printf("C:\test\test.c\n"); //C:      est     est.c ת����ԭ������˼
	//printf("C:\\test\\test.c\n");//C:\test\test.c
	//printf("ab\ncd \n");	//\+n
	//printf("(Are You ok ??)");// ??) --> ]      ����ĸ��

	//printf("%c\n", '\'');// \' ���ڱ�ʾ�ַ�����'
	//printf("%s\n", "abc");
	//printf("%s\n", "a");
	//printf("%s\n", "\""); 
	//printf("C:\\test\\test.c\n");
	//printf("\a\n");
	//printf("%c\n", '\130');//X --> ASCIIֵ����88
	//printf("%d\n", 'X');//X --> ASCIIֵ�� -->88
	//printf("%d\n", 'Y');//Y --> ASCIIֵ�� -->89

	//printf�ڴ�ӡ���ݵ�ʱ�����ָ����ӡ�ĸ�ʽ
//
//	return 0;
//}

//printf("%d\n",100);
//printf("%c\n",'a');
//printf("%s\n","abc");
//int main()
//{
//	printf("%d\n", strlen("abcdef"));// 6
//	// \32��������һ��ת���ַ�
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}

//ע��		----->�������͸��Ӵ���
//

//int main()
//{
	//printf("Hello World!\n");  //C++ע�ͷ��
	/*printf("Hello World!\n");*///C���Ե�ע�ͷ�� -->��֧��Ƕ��ע��
//	return 0;
//}

//ѡ�����

//int main()
//{
//	int input = 0;//��������ֵ
//	printf("���뱱У-->\n");
//	printf("��Ҫ�ú�ѧϰ��?(1/0)?->:");
//	scanf("%d", &input);
//
//	if (input == 1) {
//		printf("�ú�ѧϰ,�ø���offer��\n");
//	}
//	else {
//		printf("�ؼ������!\n");
//	}
//	return 0;
//}

//ѭ�����

//int main()
//{
//	int line = 0; //���������
	//ѭ��
//	while (line < 30000)
//	{
//		printf("��%d��:д����\n", line);
//		line++;
//	}
//	if (line == 30000){
//		printf("��offer\n");
//	}
//	return 0;
//}

//����	-->		
//��ѧ	--> f(x) = 2 * x + 5;
//
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//	//�����ķ�ʽ���
//	int sum = Add(num1, num2);
//	printf("%d", sum);
//	return 0;
//}

//����	-->	һ����ͬ���͵�Ԫ��

//int main()
//{
	//int a = 0;
	//int b = 1;
	//int c = 2;
	//int d = 3;
	//.....ʹ�ö�������ķ�ʽ�����洢����̫����

	//����	-->	һ����ͬ���͵�Ԫ��
	//10������1-10������
	//���������±������ʵ�
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//���鴴�����ʼ��
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	//char ch[5] = { 'a','b','c' };	//����ȫ��ʼ��ʣ���Ĭ��Ϊ0
//	return 0;
//}

//������		����������: +�� -�� *�� /�� %ȡģ
//				��λ������: >>	<< 
//				λ������:	&��λ��  |��λ��   ^��λ���
//				��ֵ������: = += -= *= /= &= ^=  |=    >>=   <<= 
//				��Ŀ������:
//							!           �߼�������
//							-			��ֵ
//							+			��ֵ
//							&			ȡ��ַ
//							sizeof      �����������ͳ��ȣ����ֽ�Ϊ��λ��
//							~			��һ�����Ķ����ư�λȡ��
//							--          ǰ�á�����--
//							++			ǰ�á�����++
//							*			��ӷ��ʲ�����(�����ò�����)
//							(����)		ǿ������ת��

//int main()
//{
	//int a = 9 / 2;
	//float a = 9 / 2;//4.000000
	//float a = 9.0 / 2.0;//4.500000
	//int a = 9 % 2;// % ȡģ -->ȡ��
	//printf("%d\n", a);

	//int a = 2;
	//int b = a << 1; //���Ʋ����� --> �ƶ����Ƕ�������
	//a = a + 5;//  a += 5;
	//a += 5;
	//a = a - 3;
	//a -= 3;


	//printf("%d\n", b);
	//return 0;
//}

//int main()
//{
//	// 0��ʾ��	��0��ʾ��
//	int a = 10;
//	printf("%d\n", !a);
//
//	if (a)
//	{
//		//���aΪ�� ����
//	}
//	if (!a)
//	{
//		//���aΪ�� ����
//	}
//	return 0;
//}

//int main()
//{
//	//sizeof()�ǲ�����
//	// ���Ǻ���
//	//�������ͻ�����Ĵ�С
//	int a = 10;
//	printf("%d\n",sizeof(int));//4
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof a);//4
//	return 0;
//}

int main()
{
	//10*4
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//40 �������������ܴ�С,��λ���ֽ�
	printf("%d\n", sizeof(arr[0]));//4
	//��������Ԫ�ظ���
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	
	return 0;
}