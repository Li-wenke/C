#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ļ�����
//			�����ļ��������ļ�
//�����ļ�
//����Դ�����ļ�����׺Ϊ.c��,Ŀ���ļ���windows������׺Ϊ.obj��,��ִ�г���windows������׺Ϊ.exe����
//�����ļ�
//�ļ������ݲ�һ���ǳ��򣬶��ǳ�������ʱ��д�����ݣ�
//�������������Ҫ���ж�ȡ���ݵ��ļ�������������ݵ��ļ�

//int main()
//{
//	printf("hello world\n");
//	return 0;
//}

//�ļ���
//һ���ļ�Ҫ��һ��Ψһ���ļ���ʶ���Ա��û�ʶ�������
//�ļ�������3���֣��ļ�·�� + �ļ������� + �ļ���׺
//���磺 c:\code\test.txt
//Ϊ�˷���������ļ���ʶ������Ϊ�ļ���

//�ļ��Ĵ򿪺͹ر�
//�ļ�ָ��
//�����ļ�ϵͳ�У��ؼ������ǡ��ļ�����ָ�롱����ơ��ļ�ָ�롱
//ÿ����ʹ�õ��ļ������ڴ��п�����һ����Ӧ���ļ���Ϣ������������ļ��������Ϣ
//�����ļ������֣��ļ�״̬���ļ���ǰ��λ�õȣ���
//��Щ��Ϣ�Ǳ�����һ���ṹ������еġ��ýṹ����������ϵͳ�����ģ�ȡ��FILE.
//����,VS2013���뻷���ṩ�� stdio.h ͷ�ļ��������µ��ļ�����������
//struct _iobuf {
//	char* _ptr;
//	int _cnt;
//	char* _base;
//	int _flag;
//	int _file;
//	int _charbuf;
//	int _bufsiz;
//	char* _tmpfname;
//};
//typedef struct _iobuf FILE;
//ÿ����һ���ļ���ʱ��ϵͳ������ļ�������Զ�����һ��FILE�ṹ�ı�������������е���Ϣ��
//ʹ���߲��ع���ϸ�ڡ�
//һ�㶼��ͨ��һ��FILE��ָ����ά�����FILE�ṹ�ı���������ʹ���������ӷ���


//�ļ��Ĵ򿪺͹ر�
//�ļ��ڶ�д֮ǰӦ���ȴ��ļ�����ʹ�ý���֮��Ӧ�ùر��ļ���
// ���ļ�
//FILE* fopen(const char* filename, const char* mode);
// �ر��ļ�
//int fclose ( FILE * stream );

//int main()
//{
//	//���ļ�
//	//FILE* pf = fopen("test.dat", "w");
//	FILE* pf = fopen("e:\\test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//д�ļ�
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�ļ���˳���д

//int main()
//{
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//д�ļ�
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//	fputc('d', pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//��һ���ļ� 
//��д�ļ�ʱ�����԰��ļ�����һ������������д����
//C���Գ���ֻҪ������������Ĭ�ϴ���3����
//						 stdin  - ��׼������ - ����
//				FILE*	 stdout - ��׼����� - ��Ļ
//						 stderr - ��׼������ - ��Ļ

//int main()
//{
//	fputc("b",stdout);
//	fputc("i",stdout);
//	fputc("t",stdout);
//	return 0;
//}

//ʹ��fgtc���ļ����ȡ����

//int main()
//{
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//���ļ�
//	int ret = fgetc(pf);
//	printf("%c\n", ret); 
//	ret = fgetc(pf);
//	printf("%c\n", ret); 
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//ʹ��fgetc�ӱ�׼��������ȡ��Ϣ

//int main()
//{
//	int ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//д�ļ�--������д
//	fputs("ancdef\n", pf);
//	fputs("qwertyuiop\n", pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	char arr[10] = { 0 };
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//���ļ�
//	fgets(arr, 4, pf);
//	printf("%s\n", arr);
//	fgets(arr, 4, pf);
//	printf("%s\n", arr);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//int main()
//{
//	struct S s = { "abcdef",10,5.5f };
//	//�Ը�ʽ�����ݽ���д�ļ�
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//д�ļ�
//	fprintf(pf, "%s %d %f", s.arr, s.num, s.sc);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	struct S s = { 0 };
//	//�Ը�ʽ�����ݽ��ж��ļ�
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//���ļ��ļ�
//	fscanf(pf,"%s %d %f", s.arr, &(s.num), &(s.sc));
//	//��ӡ
//	printf("%s %d %f", s.arr, s.num, s.sc);
//	fprintf(stdout,"%s %d %f", s.arr, s.num, s.sc);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�����ƵĶ�д

//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//int main()
//{
//	struct S s = { "abcde",10,5.5f };
//	//�����Ƶ���ʽд
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//д�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fread��ȡ

//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//int main()
//{
//	struct S s = { 0 };
//	//�����Ƶ���ʽ��
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//���ļ�
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n", s.arr, s.num, s.sc);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�ַ����뺯��		fgetc		����������
//�ַ��������		fputc		���������
//�ı������뺯��		fgets		����������
//�ı����������		fputs		���������
//��ʽ�����뺯��		fscanf		����������
//��ʽ���������		fprintf		���������
//����������			fread		�ļ�
//���������			fwrite		�ļ�

//scanf		��Ա�׼����ĸ�ʽ���������		---> stdin
//fscanf	��������������ĸ�ʽ���������	---> stdin/�ļ�
//sscanf	��һ���ַ����ж�ȡһ����ʽ��������
//printf	��Ա�׼����ĸ�ʽ��������		---> stdout
//fprintf   �������������ĸ�ʽ��������   ---> stdout/�ļ�
//sprintf	��һ����ʽ��������ת�����ַ���

//struct S
//{
//	char arr[10];
//	int age;
//	float f;
//};
//int main()
//{
//	struct S s = { "hello",20,5.5f };
//	struct S tmp = { 0 };
//	char buf[100] = { 0 };
//	//sprintf��һ����ʽ��������ת�����ַ���
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
//	printf("%s\n", buf);
//	//��buf�ַ����л�ԭ��һ���ṹ������
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.f));
//	printf("%s %d %f\n", tmp.arr, tmp.age, tmp.f);
//	return 0;
//}

//�ļ��������д
//fseek
//�����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ�롣
//int fseek(FILE* stream, long int offset, int origin);

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	//�����ļ�ָ��
//	fseek(pf, -3, SEEK_END);//�ļ�ĩβƫ��
//	fseek(pf, 1, SEEK_CUR);//��ǰ�ļ�λ��ƫ��
//	fseek(pf, 2, SEEK_SET);//�ļ���ʼƫ��
//	ch = fgetc(pf);
//	printf("%c\n", ch);	
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//ftell
//�����ļ�ָ���������ʼλ�õ�ƫ����
//long int ftell(FILE* stream);

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	//�����ļ�ָ��
//	fseek(pf, -3, SEEK_END);//�ļ�ĩβƫ��
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	int ret = ftell(pf);
//	printf("%d", ret);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//rewind
//���ļ�ָ���λ�ûص��ļ�����ʼλ��
//long int ftell(FILE* stream);

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	//�����ļ�ָ��
//	fseek(pf, -3, SEEK_END);//�ļ�ĩβƫ��
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//	//���ļ�ָ��ص���ʼλ��
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//h
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�ı��ļ��Ͷ������ļ�
//�������ݵ���֯��ʽ�������ļ�����Ϊ�ı��ļ����߶������ļ���
//�������ڴ����Զ����Ƶ���ʽ�洢���������ת������������(�ļ�)�����Ƕ������ļ���
//���Ҫ�����������ASCII�����ʽ�洢������Ҫ�ڴ洢ǰת������ASCII�ַ�����ʽ�洢���ļ������ı��ļ�

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//д�ļ�
//	fwrite(&a, sizeof(int), 1, pf);//�����Ƶ���ʽд���ļ���
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�ļ������ж�
//������ʹ�õ� feof
//feofӦ���ڵ��ļ���ȡ������ʱ���ж��Ƕ�ȡʧ�ܽ��������������ļ�β����
//fgetc �����ڶ�ȡ����ʱ,�᷵��EOF ������ȡʱ,���ص��Ƕ�ȡ�����ַ���ASCII��ֵ
//fgets �����ڶ�ȡ����ʱ,�᷵��NULL,������ȡʱ,���ص�ʱ����ַ����ռ����ʼ��ַ
//fread �����ڶ�ȡʱ,���ص���ʵ�ʶ�ȡ����������Ԫ�صĸ���,
//					������ֶ�ȡ��������Ԫ�صĸ���С��ָ����Ԫ�ظ���,��������һ�ζ�д��

//д�����test.txt�ļ�����һ������test2.txt�ļ�

//int main()
//{
//	FILE* pfread = fopen("test.txt", "r");
//	if (pfread == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	FILE* pfwrite = fopen("test2.txt", "w");
//	if (pfwrite == NULL)
//	{
//		fclose(pfread);
//		pfread = NULL;
//		return 1;
//	}
//	//�ļ��򿪳ɹ�
//	//��д�ļ�
//	int ch = 0;
//	while ((ch = fgetc(pfread)) != EOF)
//	{
//		//д�ļ�
//		fputc(ch, pfwrite);
//	}
//	//
//	if (feof(pfread))
//	{
//		printf("�����ļ�������־,�ļ���������\n");
//	}
//	else if (ferror(pfread))
//	{
//		printf("�ļ���ȡʧ�ܽ���\n");
//	}
//	//�ر��ļ�
//	fclose(pfread);
//	pfread = NULL;
//	fclose(pfwrite);
//	pfwrite = NULL;
//
//	return 0;
//}
#include <windows.h>
int main()
{
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	fputs("abcde", pf);//�Ƚ�����������������
	
	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
	Sleep(10000);
	printf("ˢ�»�����\n");
	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�

	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
	Sleep(10000);

	fclose(pf);
	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
	pf = NULL;

	return 0;
}