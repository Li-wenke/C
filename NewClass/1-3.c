#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

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
//	int a = 1;
	//a ��������  0--> 00000000000000000000000000000000 
	//				   11111111111111111111111111111111
	//�������ڴ��д�����ǲ���
	//һ�������Ķ����Ʊ�ʾ��3��
	// 	    ������ԭ�뷴�벹����ͬ
	//		����
	//ԭ��   -1-->100000000000000000000000000000001
	//����	 -1-->111111111111111111111111111111110
	//����	 -1-->111111111111111111111111111111111
//	printf("%d\n", ~a);//��һ�����Ķ����ư�λȡ��
//	
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);

	//int a = 10;
	//int b = ++a;//ǰ��++  ��++ ��ֵ 
	//int c = a++;//����++  �ȸ�ֵ ��++	
	
//	printf("%d\n", c);//10
	//printf("%d\n", b);11
//	printf("%d\n", a);//11
	

//	return 0;
//}

//int main()
//{
//	//ǿ������ת��
//	int a = (int)3.14;
//
//	printf("%d\n", a);
//	return 0;
//}

//			��ϵ������:
//						>
//						>=
//						<
//						<=
//						!=		���ڲ��ԡ�����ȡ�
//						==		���ڲ��ԡ���ȡ�

//			�߼�������
//						&&     �߼���
//						|| �߼���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = a || b;
//
//	printf("%d\n", c);
//	/*int a = 3;
//	int b = 5;
//	int c = a && b;
//
//	printf("%d\n", c);*/
//
//	//if (a && b) {
//
//	//}
//
//	return 0;
//}

//			����������(��Ŀ������):exp1 ? exp2 : exp3
//								exp1���� exp2���� �������ʽ�Ľ����:exp2�Ľ��
//								exp1������ exp3���� �������ʽ�Ľ����:exp3�Ľ��
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//	//if (a > b) {
//	//	max = a;
//	//}
//	//else {
//	//	max = b;
//	//}
//	max =  a > b ? a : b; 
//	printf("%d\n", max);
//
//	return 0;
//}

//	���ű��ʽ:���Ÿ�����һ�����ʽ		-->		exp1, exp2, exp3, ��expN
//int main()
//{
//	int a = 2;
//	int b = 5;
//	int c = 7;
//			// a = 7   c = 14  b = 17
//	int d = (a = b + 2, c = a + 7, b = c + 3);
//	//���ű��ʽ,�Ǵ����������μ���
//	//�������ʽ�Ľ�������һ�����ʽ�Ľ��
//	printf("%d\n", d);
//
//	return 0;
//}

//			�±����á��������úͽṹ��Ա
//			[]			()		.		->
//int main()
//{
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("%d\n",	arr[5]);

	//���ú�����ʱ�򣬺��������() ���Ǻ������ò�����
	//printf("Hello,World!\n");
	//printf("%d\n", 100);

//	return 0;
//}

//�����Ĺؼ���: auto  break   case  char  const   continue  default  do   double else  enum 
//				extern float  for   goto  if   int   long  register    return   short  signed
//				sizeof   static struct  switch  typedef union  unsigned   void  volatile  while
//1.C�����ṩ��,�����Լ�����ʹ��
//2.�ؼ��ֲ����������� 
//			extern�����������ⲿ���ŵ�   register �Ĵ����ؼ���	

//int main()
//{
	//int char;
	//{
	//	int a = 10;//�Զ�����,�Զ����ٵ� --�Զ�����
	//	//auto ʡ�Ե���
	//	//auto  �µ�C�����﷨��Ҳ�������÷� �ݲ�����
	//}
	//����/Ƶ����ʹ�õ�����,�뷢�ڼĴ�����,���Ч��
	//register int num = 100;//����num��ֵ����ڼĴ�����
//	return 0;
//}

//typedef -->�����ض���
//typedef unsigned int  u_int;
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 200;
//	return 0;
//}

//static - ��̬��  �������ǽ������������������Ըı�
//1.static ���ξֲ����� 
//2.static ����ȫ�ֱ��� ʹ�����ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�����ʹ��  ����������Դ�ļ���Ч
//3.static ���κ���		ʹ���������ֻ�����Լ����ڵ�Դ�ļ��ڲ�����ʹ�� ����������Դ�ļ���Ч
//static���ξֲ������ı��˱������������ڣ��þ�̬�ֲ�����������������Ȼ���ڣ�������������������ڲŽ���
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//}

//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
// 
////extern�����ⲿ����
//extern int g_val;
//��������
//extern int Add(int x,int y);
//int main()
//{
//	//printf("%d\n", g_val);
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//#define ���峣���ͺ�
//define ��һ��Ԥ����ָ��
//1.define �������

#define MAX 1000

//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//2.define �����
#define ADD(x, y) ((x)+(y))
//int main()
//{
//	printf("%d\n", 4 * ADD(2, 3));
//	return 0;
//}

//			ָ��	-->	��ַ

//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ� - 4���ֽ�
//	printf("%p\n", &a);//%pר��������ӡ��ַ��
//
//	int* pa = &a;//pa��������ŵ�ַ��,��C�����н���ָ�����
//	//* ˵��pa��ָ�����
//	//int ˵��paִ�еĶ�����int ����
//	printf("%d\n", *pa);
//
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%p\n", &ch);
//	printf("%c\n", *pc);
//
//	return 0;
//}

//int main()
//{
//	int* pa = &pa;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20;//	* �����ò��� *pa����ͨ��pa����ĵ�ַ�ҵ�a
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(long*));//4
//	printf("%d\n", sizeof(long long*));//4
//	printf("%d\n", sizeof(float*));//4
//	printf("%d\n", sizeof(double*));//4
//	//ָ��Ĵ�С����ͬ��
//	//ָ����������ŵ�ַ��
//	//ָ��ռ���Ҫ��� ȡ���ڵ�ַ�洢��Ҫ���ռ�
//	return 0;
//}

//		�ṹ��       ������C���Դ����µ����ͳ���
//		����һ��ѧ��

struct Stu
{
	char name[20];//��Ա����
	int age;
	double score;
};

//����һ���������

struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = { "����",20,89.9 };//�ṹ��Ĵ����ͳ�ʼ��
	printf("%s %d %lf\n", s.name, s.age, s.score);//�ṹ����� .��Ա����
	struct Stu *ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
	printf("3: %s %d %lf", ps->name, ps->age, ps->score); //  �ṹ��ָ��  -> ��Ա������    

	return 0;
}