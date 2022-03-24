#include "SeqList.h"

//初始化顺序表

//void SeqListInit(SeqList* ps)
//{
//	memset(ps->data, 0, sizeof(SeqList) * MAXSIZE);
//	ps->length = 0;
//}
void SeqListInit(SeqList* ps)
{
	//初始化有2种方式 一种直接赋为空 还有一种可以使用malloc函数动态分配空间
	ps->data = NULL;
	ps->length = 0;
	ps->capacity = 0;
	//ps->data = (SQDataType*)malloc(1 * sizeof(SQDataType));
	//ps->length = 1;
	//ps->capacity = 1;
}
//打印顺序表
void SeqListPrint(SeqList* ps)
{
	int i = 0;
	for (i = 0; i < ps->length; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("\n");
}
void SeqListCheckCapactiy(SeqList* ps)
{
	if (ps->length >= ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 2 : ps->capacity * 2;
		//增容
		SQDataType* tmp = (SQDataType*)realloc(ps->data, newcapacity * sizeof(SQDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->data = tmp;
			ps->capacity = newcapacity;
		}
	}
}
//实现尾插、头插、尾删、头删

//静态顺序表尾插
//void SeqListPushBack(SeqList* ps, SQDataType x)
//{
//	if (ps->length >= MAXSIZE)
//	{
//		printf("SeqList is Full\n");
//		return;
//	}
//	ps->data[ps->length] = x;
//	ps->length++;
//}
void SeqListPushBack(SeqList* ps, SQDataType x)
{
	//实现尾插 先判断顺序表是否满了如果满了就增加容量
	//SeqListCheckCapactiy(ps);
	//ps->data[ps->length] = x;
	//ps->length++;
	SeqListInsert(ps, ps->length , x);//复用插入函数
}
void SeqListPushFront(SeqList* ps, SQDataType x)
{
	//SeqListCheckCapactiy(ps);
	//int end = ps->length - 1;
	//while (end >= 0)
	//{
	//	ps->data[end + 1] = ps->data[end];
	//	end--;
	//}
	//ps->data[0] = x;
	//ps->length++;
	SeqListInsert(ps, 0, x);
}
void SeqListPopBack(SeqList* ps)
{
	//尾删 如果表空了就不让删除
	//assert(ps->length > 0);
	//ps->data[ps->length - 1] = 0;
	//ps->length--;
	SeqListErase(ps, ps->length);//复用删除函数
}
void SeqListPopFront(SeqList* ps)
{
	//assert(ps->length > 0);
	//头删 就是把后面的数据放在前面一个数据上
	//int i = 0;
	//for (i = 0; i < ps->length; ++i)
	//{
	//	ps->data[i] = ps->data[i + 1];
	//}
	//ps->length--;
	//int start = 0;
	//while (start < ps->length)
	//{
	//	ps->data[start] = ps->data[start + 1];
	//	++start;
	//}
	//ps->length--;
	SeqListErase(ps, 0);
}
//实现顺序表的随机位置的插入与删除
void SeqListInsert(SeqList* ps, int pos, SQDataType x)
{
	assert(pos <= ps->length && pos >=0);
	SeqListCheckCapactiy(ps);
	int end = ps->length - 1;
	while (end >= pos)
	{
		ps->data[end + 1] = ps->data[end];
		--end;
	}
	ps->data[pos] = x;
	ps->length++;
}
void SeqListErase(SeqList* ps, int pos)
{
	assert(pos <= ps->length && pos >= 0);
	int start = pos + 1;
	while (start <= ps->length)
	{
		ps->data[start - 1] = ps->data[start];
		++start;
	}
	ps->length--;
}
//查找、修改
int SeqListFindX(SeqList* ps, SQDataType x)
{
	int i = 0;
	for (i = 0; i < ps->length; ++i)
	{
		if (ps->data[i] == x)
			return i;
	}
	return -1;
}
void SeqListModify(SeqList* ps, int pos, SQDataType x)
{
	assert(pos < ps->length);
	ps->data[pos] = x;
}
//销毁顺序表
void SeqListDestory(SeqList* ps)
{
	free(ps->data);
	ps->data = NULL;
	ps->length = 0;
	ps->capacity = 0;
}
//清空顺序表
void SeqListClear(SeqList* ps)
{
	ps->length = 0;
}