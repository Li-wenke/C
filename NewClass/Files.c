#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//文件操作
//			程序文件、数据文件
//程序文件
//包括源程序文件（后缀为.c）,目标文件（windows环境后缀为.obj）,可执行程序（windows环境后缀为.exe）。
//数据文件
//文件的内容不一定是程序，而是程序运行时读写的数据，
//比如程序运行需要从中读取数据的文件，或者输出内容的文件

//int main()
//{
//	printf("hello world\n");
//	return 0;
//}

//文件名
//一个文件要有一个唯一的文件标识，以便用户识别和引用
//文件名包含3部分：文件路径 + 文件名主干 + 文件后缀
//例如： c:\code\test.txt
//为了方便起见，文件标识常被称为文件名

//文件的打开和关闭
//文件指针
//缓冲文件系统中，关键理念是“文件类型指针”，简称“文件指针”
//每个被使用的文件都在内存中开辟了一个相应的文件信息区，用来存放文件的相关信息
//（如文件的名字，文件状态及文件当前的位置等）。
//这些信息是保存在一个结构体变量中的。该结构体类型是由系统声明的，取名FILE.
//例如,VS2013编译环境提供的 stdio.h 头文件中有以下的文件类型申明：
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
//每当打开一个文件的时候，系统会根据文件的情况自动创建一个FILE结构的变量，并填充其中的信息，
//使用者不必关心细节。
//一般都是通过一个FILE的指针来维护这个FILE结构的变量，这样使用起来更加方便


//文件的打开和关闭
//文件在读写之前应该先打开文件，在使用结束之后应该关闭文件。
// 打开文件
//FILE* fopen(const char* filename, const char* mode);
// 关闭文件
//int fclose ( FILE * stream );

//int main()
//{
//	//打开文件
//	//FILE* pf = fopen("test.dat", "w");
//	FILE* pf = fopen("e:\\test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//写文件
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//文件的顺序读写

//int main()
//{
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//写文件
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//	fputc('d', pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//打开一个文件 
//在写文件时，可以把文件当做一个流，往流里写数据
//C语言程序，只要运行起来，就默认打开了3个流
//						 stdin  - 标准输入流 - 键盘
//				FILE*	 stdout - 标准输出流 - 屏幕
//						 stderr - 标准错误流 - 屏幕

//int main()
//{
//	fputc("b",stdout);
//	fputc("i",stdout);
//	fputc("t",stdout);
//	return 0;
//}

//使用fgtc从文件里读取数据

//int main()
//{
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//读文件
//	int ret = fgetc(pf);
//	printf("%c\n", ret); 
//	ret = fgetc(pf);
//	printf("%c\n", ret); 
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//使用fgetc从标准输入流读取信息

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
//	//写文件--按行来写
//	fputs("ancdef\n", pf);
//	fputs("qwertyuiop\n", pf);
//	//关闭文件
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
//	//读文件
//	fgets(arr, 4, pf);
//	printf("%s\n", arr);
//	fgets(arr, 4, pf);
//	printf("%s\n", arr);
//	//关闭文件
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
//	//对格式化数据进行写文件
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//写文件
//	fprintf(pf, "%s %d %f", s.arr, s.num, s.sc);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	struct S s = { 0 };
//	//对格式化数据进行读文件
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//读文件文件
//	fscanf(pf,"%s %d %f", s.arr, &(s.num), &(s.sc));
//	//打印
//	printf("%s %d %f", s.arr, s.num, s.sc);
//	fprintf(stdout,"%s %d %f", s.arr, s.num, s.sc);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//二进制的读写

//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//int main()
//{
//	struct S s = { "abcde",10,5.5f };
//	//二进制的形式写
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fread读取

//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//int main()
//{
//	struct S s = { 0 };
//	//二进制的形式读
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//读文件
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f\n", s.arr, s.num, s.sc);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//字符输入函数		fgetc		所有输入流
//字符输出函数		fputc		所有输出流
//文本行输入函数		fgets		所有输入流
//文本行输出函数		fputs		所有输出流
//格式化输入函数		fscanf		所有输入流
//格式化输出函数		fprintf		所有输出流
//二进制输入			fread		文件
//二进制输出			fwrite		文件

//scanf		针对标准输入的格式化输入语句		---> stdin
//fscanf	针对所有输入流的格式化输入语句	---> stdin/文件
//sscanf	从一个字符串中读取一个格式化的数据
//printf	针对标准输出的格式化输出语句		---> stdout
//fprintf   针对所有输出流的格式化输出语句   ---> stdout/文件
//sprintf	把一个格式化的数据转换成字符串

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
//	//sprintf把一个格式化的数据转换成字符串
//	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
//	printf("%s\n", buf);
//	//从buf字符串中还原出一个结构体数据
//	sscanf(buf, "%s %d %f", tmp.arr, &(tmp.age), &(tmp.f));
//	printf("%s %d %f\n", tmp.arr, tmp.age, tmp.f);
//	return 0;
//}

//文件的随机读写
//fseek
//根据文件指针的位置和偏移量来定位文件指针。
//int fseek(FILE* stream, long int offset, int origin);

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	//调整文件指针
//	fseek(pf, -3, SEEK_END);//文件末尾偏移
//	fseek(pf, 1, SEEK_CUR);//当前文件位置偏移
//	fseek(pf, 2, SEEK_SET);//文件起始偏移
//	ch = fgetc(pf);
//	printf("%c\n", ch);	
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//ftell
//返回文件指针相对于起始位置的偏移量
//long int ftell(FILE* stream);

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	//调整文件指针
//	fseek(pf, -3, SEEK_END);//文件末尾偏移
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	int ret = ftell(pf);
//	printf("%d", ret);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//rewind
//让文件指针的位置回到文件的起始位置
//long int ftell(FILE* stream);

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	//调整文件指针
//	fseek(pf, -3, SEEK_END);//文件末尾偏移
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//	//让文件指针回到起始位置
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//h
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//文本文件和二进制文件
//根据数据的组织形式，数据文件被称为文本文件或者二进制文件。
//数据在内存中以二进制的形式存储，如果不加转换的输出到外存(文件)，就是二进制文件。
//如果要求在外存上以ASCII码的形式存储，则需要在存储前转换。以ASCII字符的形式存储的文件就是文本文件

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return;
//	}
//	//写文件
//	fwrite(&a, sizeof(int), 1, pf);//二进制的形式写到文件中
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//文件结束判定
//被错误使用的 feof
//feof应用于当文件读取结束的时候，判断是读取失败结束，还是遇到文件尾结束
//fgetc 函数在读取结束时,会返回EOF 正常读取时,返回的是读取到的字符的ASCII码值
//fgets 函数在读取结束时,会返回NULL,正常读取时,返回的时存放字符串空间的起始地址
//fread 函数在读取时,返回的是实际读取到的是完整元素的个数,
//					如果发现读取到的完整元素的个数小于指定的元素个数,这就是最后一次读写了

//写代码把test.txt文件拷贝一份生成test2.txt文件

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
//	//文件打开成功
//	//读写文件
//	int ch = 0;
//	while ((ch = fgetc(pfread)) != EOF)
//	{
//		//写文件
//		fputc(ch, pfwrite);
//	}
//	//
//	if (feof(pfread))
//	{
//		printf("遇到文件结束标志,文件正常结束\n");
//	}
//	else if (ferror(pfread))
//	{
//		printf("文件读取失败结束\n");
//	}
//	//关闭文件
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
	fputs("abcde", pf);//先将代码放在输出缓冲区
	
	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
	Sleep(10000);
	printf("刷新缓冲区\n");
	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）

	//注：fflush 在高版本的VS上不能使用了
	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
	Sleep(10000);

	fclose(pf);
	//注：fclose在关闭文件的时候，也会刷新缓冲区
	pf = NULL;

	return 0;
}