#define _CRT_SECURE_NO_WARNINGS 1
static int  g_val = 2021; //ȫ�ֱ���

//����һ������
//static int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

int main()
{
	double h;//�����¶ȱ���
	double c;
	printf("����һ�������¶�:");
	scanf("%lf", &h);
	c = 5 * (h - 32) / 9;
	printf("�����¶�:%-2lf\n", c);
	return 0;
}