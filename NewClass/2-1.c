#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//		��֧��ѭ��

//		��֧���
//		if
//		switch

//		ѭ�����
//		while
//		do while
//		for

//ʲô����䣿
//C��������һ���ֺ�; �����ľ���һ����䡣
//
//int main()
//{
//	printf("hehe\n");
//	3 + 5;
//	;//�����
//	return 0;
//}

//��֧��䣨ѡ��ṹ��

//int main()
//{
//	int age = 10;
	//if (age >= 18) {
	//	printf("����\n");
	//}
	//else {
	//	printf("δ����\n");
	//}
	
	//	/*if (age >= 18)
//	{ 
//		printf("����\n");
//	}
//	else
//	{ 
//		printf("δ����\n");
//		printf("����̸����\n");
//	}*/
//	/*if (age >= 18)
//		printf("����\n");*/
//
//	if (age < 18)
//		printf("����\n");
//	else if (age >= 18 && age < 26)
//		printf("����\n");
//	else if (age >= 26 && age < 40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("׳��\n");
//	else if (age >= 60 && age <= 100)
//		printf("����\n");
//	else
//		printf("�ϲ���\n");
//
//	return 0;
//}

//������ - 
//<������C/C++���>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//		else
//		{
//			printf("haha\n");
//		}
//	}
// else
//		printf("haha\n");
//	return 0;
//}

//int test()
//{
//	if (0)
//		return 0;
//	return 1;
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int num = 3;
//
//	//if (num == 5)
//	if(5 == num)
//		printf("hehe\n");
//
//
//	return 0;
//}

//1. �ж�һ�����Ƿ�Ϊ����

//int main()
//{
//	int a = 10;
//	if (a % 2 == 1) {
//		printf("����\n");
//	}
//	else {
//		printf("��������\n");
//	}
//	return 0;
//}
// 
//2. ���1 - 100֮�������

//int main()
//{
//	int i = 0;
//	while (i <= 100) {
//		if (i % 2 == 1) {
//			printf("%d������\n", i);
//		}
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	//C++
//	//c99֧��������д
//	//for (int i = 1; i <= 100; i++)
//	//{
//	//	if (i % 2 == 1)
//	//		printf("%d ", i);
//	//}
//
//	for (int i = 1; i <= 100; i+=2)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//	switch���

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//			printf("����һ\n");
//			break;
//		case 2:
//			printf("���ڶ�\n");
//			break;
//		case 3:
//			printf("������\n");
//			break;
//		case 4:
//			printf("������\n");
//			break;
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//			printf("������\n");
//			break;
//		case 7:
//			printf("������\n");
//			break;
//	}
//
//	return 0;
//}

//1-5 ������
//6-7 ��Ϣ��

//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
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
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    case 3:
//        switch (n)
//        {//switch����Ƕ��ʹ��
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//
//	return 0;
//}

//		ѭ���ṹ
//		1.while(���ʽΪ��ѭ��ִ��)
//		2.do...while
//		3.for

//int main()
//{
//	while (1)//��ѭ��
//		printf("hehe\n");
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\t", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	//��whileѭ���У�break�������õ���ֹѭ��
//	// 
//	//��whileѭ���У�continue����������������ѭ��continue��ߵĴ���
//	//ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
//
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//
//	/*while (i <= 10)
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		i++;
//	}*/
//
//	return 0;
//}

//getchar

//EOF - end of file - �ļ�������־

//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);//���һ���ַ�
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//ctrl+z - getchar �Ͷ�ȡ����
//
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", &password);
//	printf("��ȷ������(Y/N):>");//û��ȷ�Ͼͽ�����
//	int ch = getchar();
//	if ('Y' == ch)
//	{
//		printf("ȷ�ϳɹ�!\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��!\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", &password);
//	printf("��ȷ������(Y/N):>");
//	//��������
//	//getchar();//����'\n'
//	//���������Ķ���ַ�
//	int tmp = 0;
//	while ((tmp = getchar() != '\n'))
//	{
//			;
//	}
//	int ch = getchar();
//	if ('Y' == ch)
//	{
//		printf("ȷ�ϳɹ�!\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��!\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//
//		putchar(ch);
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 1;//��ʼ��
//
//	while (i <= 10)//�жϲ���
//	{
//		printf("%d ", i);
//		i++;//��������
//	}
//
//		forѭ��
//		for(���ʽ1�����ʽ2�����ʽ3)
//		ѭ����䣻
//		���ʽ1 ���ʽ1Ϊ��ʼ�����֣����ڳ�ʼ��ѭ�������ġ� ���ʽ2 ���ʽ2Ϊ�����жϲ��֣������ж�
//		ѭ��ʱ����ֹ�� ���ʽ3 ���ʽ3Ϊ�������֣�����ѭ�������ĵ�����
//		1. ������for ѭ�������޸�ѭ����������ֹ for ѭ��ʧȥ���ơ�
//		2. ����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д����

//int main()
//{
//	int i = 0;
//	//ʵ����ͬ�Ĺ��ܣ�ʹ��while
//	i = 1;//��ʼ������
//	while (i <= 10)//�жϲ���
//	{
//		printf("hehe\n");
//		i = i + 1;//��������
//	}
//	//ʵ����ͬ�Ĺ��ܣ�ʹ��while
//	for (i = 1; i <= 10; i++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
	//int i = 0;
	////for(i=1/*��ʼ��*/; i<=10/*�жϲ���*/; i++/*��������*/)
	//for (i = 1; i <= 10; i++)
	//{
	//	/*if (5 == i)
	//		break;*/
	//	if (5 == i)
	//		continue;

	//	printf("%d ", i);
	//}
//
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//		int j = 0;
//		for (j = 0; j < 10; i++)
//		{
//			printf("hehe\n");
//		}
//	}
//	
//	return 0;
//}
//int main()
//{
//	printf("%d\n", 'a');
//	printf("%d\n", 'A');
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//�жϲ��ֵ�ʡ�� - �жϲ��ֺ�Ϊ��
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("HeHe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	//����ѭ��Ҫѭ�����ٴ�? 0��
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//
//	printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	//����n�Ľ׳�
//	// n * (n - 1) * (n - 2) * (n - 3) ..... * 1
//	// 1 * .... - n
//	// 1*2*3*4*5
//	//ѭ��
//
//	int n = 0;
//	int i = 0;
//	int arg = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		arg *= i ;//�۳�
//	}
//	printf("%d\n", arg);
//	return 0;
//}


//int main()
//{
//	//1!+2!+3!+....+10!
//	//3! = 3*2*1 = 3 * 2!
//	//2! = 2*1
//	int n = 10;
//	int sum = 0;
//	int arg = 1;
//	for (n = 1; n <= 10; n++)
//	{
//		//3! = 3*2*1 = 3 * 2!
//		//2! = 2*1
//		arg *= n;
//		sum += arg;
//	}
	// int i = 0
	// for (n = 1; n <= 10; n++)
	//{
	//	arg = 1;//����n�Ľ׳�֮ǰ��arg��ʼ��Ϊ1
	//	for (i = 1; i <= n; i++)
	//	{
	//		arg *= i ;//�۳�
	//	}
	//	sum += arg;
	//}
//	printf("%d\n", sum);
//
//	return 0;
//}


//��һ�����������в��Ҿ����ĳ������n��
//int main()
//{
//	//��һ�����������в��Ҿ����ĳ������n�� ���ֲ��ҷ�
//	//1 2 3 4 5 6 7 8 9 10
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 10;//Ҫ���ҵ�����
//	//��arr�������������в鵽k��ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���,������ܴ�С��������ĵ���Ԫ�صĴ�С
//
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//�м���
//		if (arr[mid] < k)//����м����±�����Ӧ������ֵҪ�Ȳ��ҵ�����С
//		{
//			left = mid + 1;//���±��ֵ����м�����1 Ҳ��������һ��λ��
//
//		}
//		else if (arr[mid] > k)//����м����±�����Ӧ������ֵҪ�Ȳ��ҵ����ִ�
//		{
//			right = mid - 1;//���±��ֵ����м�����1 Ҳ��������һ��λ��
//		}
//			//����м����±�����Ӧ������ֵҪ����ҵ��������
//		else {
//			printf("�ҵ���,Ԫ����:%d Ԫ�ض�Ӧ���±�:%d\t", arr[mid], mid);
//			break;
//		}
//	}
//	if (left > right)//������±�������±�
//	{
//		printf("�Ҳ�����!\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120 };
//	int y = 110;//��Ҫ���ҵ�����
//	
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�صĸ��� -->�����ܴ�С����һ������Ԫ�ĵĴ�С
//	int left = 0;		//���±�
//	int right = sz - 1;//���±�
//
//	while (left <= right)
//	{
//		int arg = (left + right) / 2;//���м���
//		if (arr[arg] < y)//����м����±�����Ӧ������ֵҪ�Ȳ��ҵ�����С
//		{
//			left = arg + 1;//���±��ֵ����м�����1 Ҳ��������һ��λ��
//		}
//		else if (arr[arg] > y)//����м����±�����Ӧ������ֵҪ�Ȳ��ҵ����ִ�
//		{
//			right = arg - 1;//���±��ֵ����м�����1 Ҳ��������һ��λ��
//		}
//		else//����м����±�����Ӧ������ֵҪ����ҵ��������
//		{
//			printf("�ҵ���,Ԫ����:%d\tԪ�ص��±���:%d\n", arr[arg], arg);
//			break;//�ҵ��˾�����ѭ��
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����!\n");
//	}
//	return 0;
//}

//int main()
//{
//	//����һ����Ҫ���������ֵ���������
//	int Pi[] = { 110,120,130,140,150,160,170,180,190,200,210,220,230,240,250,260,270,280,290,300 };
//	int x = 240;//����һ����Ҫ�����ҵ�����
//
//	//����Ԫ�ظ���  ����>������ܴ�С����һ������Ԫ�صĴ�С
//	int sz = sizeof(Pi) / sizeof(Pi[0]);
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//
//	while(left <= right)
//	{ 
//		int mid = (left + right) / 2;//���м���
//		if (Pi[mid] < x)//����м����±�����Ӧ������ֵҪ�Ȳ��ҵ�����С
//		{
//			left = mid + 1;//���±��ֵ����м�����1 Ҳ��������һ��λ��
//		}
//		else if (Pi[mid] > x)//����м����±�����Ӧ������ֵҪ�Ȳ��ҵ����ִ�
//		{
//			right = mid - 1;//���±��ֵ����м�����1 Ҳ��������һ��λ��
//		}
//		else//����м����±�����Ӧ������ֵҪ����ҵ��������
//		{
//			printf("�ҵ���,Ԫ����:%d,Ԫ�ص��±���:%d\n ", Pi[mid], mid);
//			break;//�ҵ��˾�����ѭ��
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����!\n");
//	}
//	return 0;
//}


//welcome to world!!!!!!
//###################### //������һ��
//w####################!
//we#################!!!
//wel###############!!!!
//welc#############!!!!!
//.........
//welcome to world!!!!!! 
//#include <string.h>
//#include <Windows.h>
//int main()
//{
//	char arr1[] = { "welcome to world!!!!!!" };
//	char arr2[] = { "######################" };
//	int left = 0;//���±�
//	int right = strlen(arr1)-1;//���±� -> �ַ������ȼ�һ
//
//	while (left <= right)//ѭ������ ��Ϊ����Ǵӵ�һ���±꿪ʼһ���������ַ� �ұ�Ҳͬ����  ���� left <= right
//	{
//		arr2[left] = arr1[left];//��arr1��ߵ��ַ���һ�������ŵ�arr2������
//		arr2[right] = arr1[right];//��arr1�ұߵ��ַ���һ�������ŵ�arr2������
//
//		printf("%s\n", arr2);//���մ�ӡ���� ֱ�Ӵ�ӡ���� û���Ӿ�Ч�� ���Ը���ͣ�� ��һ���ӡһ�� Ч���õ�
//		Sleep(1000);//˯��1�� ��һ���ӡһ��  Sleep --> ����ͷ�ļ�windows.h ����û�ﵽЧ�� ���Ǽ���
//		system("cls");//�����Ļ
//
//		left++;//�������������ַ�
//		right--;//������ǰ�����ַ�
//
//	}
//	printf("%s\n", arr2);//��Ϊ���������Ļ�ᵼ�½�������,�����ٴ�ӡһ��
//	return 0;
//}

//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
//��ʾ��¼�ɣ�������ξ�����������˳�����

//#include <string.h>
////strlen
////strcmp
//int main()
//{
//	int i = 0;
//	//�����������ַ���:"123456"
//	char password[20] = { 0 };
//	//abcdef				-->�ȵ������Ӧ���ַ�ASCIIֵ��
//	//abccqqqqq
//	for (i = 0; i < 3; i++)
//	{
//		printf("��������:");
//		scanf("%s", password);//����& 
//
//		/*if(password == "123456")*///err->����  �����ַ����Ƚϲ���ʹ��== Ӧ��ʹ��strcmp-->string.h
//		if (strcmp(password, "123456") == 0)//������������ȷ������ȽϿ��Ƿ����  -->�ȵ������Ӧ���ַ�ASCIIֵ��
//		{
//			printf("��¼�ɹ�!\n");
//			break;
//		}
//		else
//		{
//			printf("�������,��������!");
//		}
//	}
//	if (i == 3)
//	{
//		printf("3�����������!�˳�����!\n");
//	}
//
//	return 0;
//}



//		дһ����������Ϸ
//		1.�Զ�����һ��1-100֮��������
//		2.������
//			a.�¶���,�ͻṧϲ��,��Ϸ����
//			b.��´���,����߲´���,������֪���¶�
//		3.��Ϸһֱ��,�����˳���Ϸ
//


//		���������
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("******************************************\n");
	printf("************    1. play    ***************\n");
	printf("************    0. exit    ***************\n");
	printf("******************************************\n");
}

void game()
{
	//��������Ϸ��ʵ��
	//1.�����������  �и��⺯��  -> rand ͷ�ļ� -> stdlib.h
	//rand����������һ��0-32767֮�������

	//ʱ�� -> ʱ���    -->��ȡʱ���    time����  -> time.h
	//srand(100);//��̶������
	

	int ret = rand() % 100 + 1;//%100��������0-99 +1  ->1-100
	//printf("%d\n", ret);//������� �´��� ���������һ���� 
	//2.������
	int guess = 0;//���������û��µ�ֵ
	while (1)
	{
		printf("�������:");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�µ���!������:%d\n",ret);
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL)); //���������
	//��Ϊһ��ʼ��Ҫ����Ϸ,����ִ��һ��,������do..while�ṹ
	do
	{
		//��Ϸһ��ʼ��Ҫһ���˵�
		menu();//��ӡ�˵�
		//�û�ѡ��������Ϸ�����˳���Ϸ ��������ֵ
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				//printf("������!\n");
				game();
				break;
			case 0:
				printf("�˳���Ϸ!\n");
				break;
			default:
				printf("ѡ�����,����ѡ��.\n");
				break;
		}

	} while (input);

	return 0;
}