#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�Զ������ͣ��ṹ�壬ö�٣�����

//������һ����ͬ���͵�Ԫ�صļ���  ����ĳ�Ա���ͱ�������ͬ�ġ�
//�ṹ��
//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı�����

//�ṹ�������
//struct tag
//{
//	member - list;//��Ա�б�
//}variable-list;//�����б�

//����һ����
//������
//struct Book
//{
//	char name[20];//����
//	int price;//����
//	char id[12];//���
//}b4,b5,b6;//�������b1,b2,b3��һ����,b4,b5,b6��ȫ�ֱ���  
//int main()
//{
//	struct Book b1;//�������ʵ��
//	struct Book b2;//�������ʵ��
//	struct Book b3;//�������ʵ��
//	return 0;
//}

//�����ṹ������
//�����ṹ�����ʹ����ú�ֻ����һ��
//struct
//{
//	char c;
//	int a;
//	char ch;
//	float f;
//}s;//�ṹ�����
//struct
//{
//	char c;
//	int a;
//	char ch;
//	float f;
//}*ps;
//int main()
//{
//	ps = &s;// �ӡ�*������*�������Ͳ�����
//	//����������������������������ȫ��ͬ���������͡� �����ǷǷ���
//	return 0;
//}

//struct A
//{
//	int i;
//	char c;
//};
//struct B
//{
//	char c;
//	struct A sa;
//	double d;
//};
//struct N
//{
//	int a;//4
//	struct N n;//4+....
//};
//���ݽṹ
//�������ڴ��д洢�Ľṹ
//˳�������  -->�������ݽṹ
//�������ݽṹ:������....

//�ڵ�
//������|ָ����
//struct Node
//{
//	int data;
//	struct Node* next;//4/8
//};
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//int main()
//{
//	//struct N sn;
//	return 0;
//}
//typedef struct
//{
//	int data;
//	Node* next;
//}Node;
//
//int main()
//{
//	Node n;
//
//	return 0;
//}

//�ṹ������Ķ���ͳ�ʼ��

//struct S
//{
//	char c;
//	int i;
//}s1,s2;
//struct B
//{
//	double d;
//	struct S s;
//	char c;
//};
//int main()
//{
//	struct S s3 = { 'c',1 };
//	struct B sb = { 3.14159265,{'c',1},'b' };
//	//.�ṹ�����  ->�ṹ��ָ��
//	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
//	return 0;
//}

//struct S
//{
//	int i;//4
//	char c;//1
//};
//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//�ṹ���ڴ����
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));//5?err     8
//	struct S1 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//6?err    12
//	return 0;
//}

//�ṹ���ڴ����
//�ṹ��������:
//1.��һ����Ա���ڽṹ�����ƫ����Ϊ0�ĵ�ַ����ʼ
//2.�ӵ�2����Ա��������г�Ա��������һ��������(��Ա�Ĵ�С��Ĭ�϶������Ľ�Сֵ)���������ĵ�ַ��
//������	-->������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ
//3.�ṹ���ܴ�СΪ�ṹ�����г�Ա�Ķ����������Ķ�������������
//4.���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ��������С������
//��������������Ƕ�׽ṹ��Ķ�����������������

//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	int i;
//	double d;//8
//};
//struct S3
//{
//	char c1;
//	char c2;
//	int i;
//};
//struct S4
//{
//	double d;
//	char c;
//	int i;
//};
//struct S5
//{
//	char c1;
//	struct S4 s4;
//	double d;
//};
//struct S6
//{
//	int i;
//	struct S4 s4;
//	char ch;
//	float f;
//	double d;
//};
//int main()
//{
//	struct S s = {0};
//	struct S2 s2 = { 0 };
//	struct S3 s3 = { 0 };
//	struct S4 s4 = { 0 };
//	struct S5 s5 = { 0 };
//	struct S6 s6 = { 0 };
//	printf("%d\n", sizeof(s));//12
//	printf("%d\n", sizeof(s2));//16
//	printf("%d\n", sizeof(s3));//8
//	printf("%d\n", sizeof(s4));//16
//	printf("%d\n", sizeof(s5));//32
//	printf("%d\n", sizeof(s6));//40
//	return 0;
//}

//Ϊʲô����	�ڴ����
//1.ƽ̨ԭ��
//�������е�Ӳ��ƽ̨���ܷ��������ַ�ϵ��������ݵģ�
//ĳЩӲ��ƽֻ̨����ĳЩ��ַ��ȡĳЩ�ض����͵����ݣ������׳�Ӳ���쳣��
//2.����ԭ��
//���ݽṹ(������ջ)Ӧ�þ����ܵ�����Ȼ�߽��϶��롣 
//ԭ�����ڣ�Ϊ�˷���δ������ڴ棬��������Ҫ�������ڴ���ʣ���������ڴ���ʽ���Ҫһ�η��ʡ�
//�ܽ�:
//�ṹ����ڴ�������ÿռ�����ȡʱ���������

//��С�ĳ�Ա���Է���һ������Ҳ���Խ�ʡ�ռ�

//�޸�Ĭ�϶�����
//#pragma pack(2)
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack(1)
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//ofeesetof  ����ṹ����ĳ����������׵�ַ��ƫ��
//#include <stddef.h>
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, c2));
//	return 0;
//}

//�ṹ�崫��
//�ṹ���ַ����
//�ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ��
//�ṹ��ʵ��λ��
//λ�ε������ͽṹ�����Ƶ�
//1.λ�εĳ�Ա������ int��unsigned int ��signed int ��
//2.λ�εĳ�Ա�������һ��ð�ź�һ������
//����:
//struct A
//{
//	//4���ֽ� - 32bit
//	int _a : 2;//_a ��Առ2��bitλ
//	int _b : 5;//_b ��Առ5��bitλ
//	int _c : 10;//_c ��Առ10��bitλ
//	//15
//	//4���ֽ� - 32bit
//	int _d : 30;//_b ��Առ30��bitλ
//};
// 16λ  int  2byte   16bit
// 32λ  int  4byte   32bit
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

//λ�ε��ڴ����
//1. λ�εĳ�Ա������ int unsigned int signed int ������ char ���������μ��壩����
//2. λ�εĿռ����ǰ�����Ҫ��4���ֽڣ� int ������1���ֽڣ� char ���ķ�ʽ�����ٵġ�
//3. λ���漰�ܶ಻ȷ�����أ�λ���ǲ���ƽ̨�ģ�ע�ؿ���ֲ�ĳ���Ӧ�ñ���ʹ��λ�Ρ�

//λ�εĿ�ƽ̨����
//1. int λ�α������з����������޷������ǲ�ȷ���ġ�
//2. λ�������λ����Ŀ����ȷ������16λ�������16��32λ�������32��д��27����16λ����������⡣
//3. λ���еĳ�Ա���ڴ��д������ҷ��䣬���Ǵ�����������׼��δ���塣
//4. ��һ���ṹ��������λ�Σ��ڶ���λ�γ�Ա�Ƚϴ��޷������ڵ�һ��λ��ʣ���λʱ
//������ʣ���λ�������ã����ǲ�ȷ���ġ�

//�ܽ�:
//���ṹ��ȣ�λ�ο��Դﵽͬ����Ч�������ǿ��ԺܺõĽ�ʡ�ռ䣬�����п�ƽ̨��������ڡ�
 
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//ö��
//����˼�����һһ�о�

//#define RED 5
//#define GREEN 8
//#define BLUE 9
//����ö������
//enum Color
//{
//	RED=5,//0
//	GREEN,//1 //ö�����͵Ŀ���ȡֵ �ǳ���
//	BLUE//2 //�����ֵĬ�ϼ�һ
//};
//int main()
//{
//	//CPP �﷨�����ϸ�
//	enum Color c = 2;
//	//enum Color c = BLUE;
//	printf("%d\n", RED);
//	printf("%d\n", GREEN);
//	printf("%d\n", BLUE);
//	printf("%d\n", sizeof(c));
//	printf("%d\n", Color::RED);
//	return 0;
//}

//ö�ٵ��ŵ�
//���ǿ���ʹ�� #define ���峣����Ϊʲô��Ҫʹ��ö�٣� ö�ٵ��ŵ㣺
//1. ���Ӵ���Ŀɶ��ԺͿ�ά����
//2. ��#define����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ���
//3. ��ֹ��������Ⱦ����װ��
//4. ���ڵ���
//5. ʹ�÷��㣬һ�ο��Զ���������
//ö��������һ������

//ʵ��һ�����׼�����

//void menu()
//{
//	printf("*****************************\n");
//	printf("****  1. add    2. sub  *****\n");
//	printf("****  3. mul    4. div  *****\n");
//	printf("****  0. exit          *****\n");
//	printf("*****************************\n");
//}
//enum Option
//{
//	EXIT,//0
//	ADD,//1
//	SUB,//2
//	MUL,//3
//	DIV//4
//};
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case EXIT:
//				break;
//			case ADD:
//				break;
//			case SUB:
//				break;
//			case MUL:
//				break;
//			case DIV:
//				break;
//			default:
//				break;
//		}
//	} while (input);
//	return 0;
//}

//������(������)
// 
//����Ҳ��һ��������Զ������� �������Ͷ���ı���Ҳ����һϵ�еĳ�Ա��
// ��������Щ��Ա����ͬһ��ռ䣨��������Ҳ�й����壩

//�������͵�����
//union Un
//{
//	char c;
//	int i;
//};
//���ϱ����Ķ���
//union Un un;
//�������������Ĵ�С
//printf("%d\n", sizeof(un));


//���ϵĳ�Ա�ǹ���ͬһ���ڴ�ռ�ģ�����һ�����ϱ����Ĵ�С��
//����������Ա�Ĵ�С����Ϊ�������ٵ����������������Ǹ���Ա��

//union Un
//{
//	char c;//1
//	int i;//4
//};
//int main()
//{
//	union Un u;
//	printf("%p\n", &u);
//	printf("%p\n", &(u.i));
//	printf("%p\n", &(u.c));
//	printf("%d\n", sizeof(u));
//	return 0;
//}

//�жϵ�ǰ������Ĵ�С��

//int check_sys()
//{
//	int a = 1;
//	if ((*(char*)&a) == 1)
//	{
//		return 1;//С��
//	}
//	else
//	{
//		return 0;//���
//	}
//}
//int check_sys()
//{
//	union U
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//	//����1����С�� ����0���Ǵ��
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//
//	return 0;
//}

//���ϵĴ�С����������Ա�Ĵ�С��
//������Ա��С����������������������ʱ�򣬾�Ҫ���뵽������������������

union Un
{
	//char a[5];//5;
	//short s[5];
	char c[10];//1 / 10
	int i;//4
};
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}