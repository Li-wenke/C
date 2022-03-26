#include "SeqList.h"

void TestSeqList1()
{
	SeqList SL;
	SeqListInit(&SL);

	SeqListPushBack(&SL, 1);
	SeqListPushBack(&SL, 2);
	SeqListPushBack(&SL, 3);
	SeqListPushBack(&SL, 4);
	SeqListPushBack(&SL, 5);
	SeqListPushBack(&SL, 6);
	SeqListPushBack(&SL, 7);
	SeqListPushBack(&SL, 8);
	SeqListPushBack(&SL, 9);
	SeqListPushBack(&SL, 10);
	SeqListPushBack(&SL, 11);

	SeqListPrint(&SL);



}
void TestSeqList2()
{
	SeqList SL;
	SeqListInit(&SL);
	SeqListPushFront(&SL, 1);
	SeqListPushFront(&SL, 2);
	SeqListPushFront(&SL, 3);
	SeqListPushFront(&SL, 4);
	SeqListPushFront(&SL, 5);
	SeqListPushFront(&SL, 6);
	SeqListPushFront(&SL, 7);
	SeqListPushFront(&SL, 8);
	SeqListPushFront(&SL, 9);
	SeqListPrint(&SL);

	SeqListPopBack(&SL);
	SeqListPopBack(&SL);
	SeqListPopBack(&SL);
	SeqListPopBack(&SL);
	SeqListPopBack(&SL);
	SeqListPopBack(&SL);
	SeqListPopBack(&SL);
	SeqListPopBack(&SL);
	SeqListPrint(&SL);

	SeqListPushFront(&SL, 8);
	SeqListPushFront(&SL, 7);
	SeqListPushFront(&SL, 6);
	SeqListPushFront(&SL, 5);
	SeqListPushFront(&SL, 4);
	SeqListPushFront(&SL, 3);
	SeqListPushFront(&SL, 2);
	SeqListPushFront(&SL, 1);
	SeqListPrint(&SL);

	SeqListPopFront(&SL);
	SeqListPopFront(&SL);
	SeqListPopFront(&SL);
	SeqListPopFront(&SL);
	SeqListPopFront(&SL);
	SeqListPopFront(&SL);
	SeqListPrint(&SL);
}
void TestSeqList3()
{
	SeqList SL;
	SeqListInit(&SL);

	SeqListPushBack(&SL, 1);
	SeqListPushBack(&SL, 2);
	SeqListPushBack(&SL, 3);
	SeqListPushBack(&SL, 4);
	SeqListPushBack(&SL, 5);
	SeqListPushBack(&SL, 6);
	SeqListPushBack(&SL, 7);
	SeqListPushBack(&SL, 8);
	SeqListPushBack(&SL, 9);
	SeqListPushBack(&SL, 10);
	SeqListPrint(&SL);

	SeqListInsert(&SL, 4, 12);
	SeqListPrint(&SL);

	SeqListErase(&SL, 4);
	SeqListPrint(&SL);

	SeqListDestory(&SL);

}
void menu()
{
	printf("***********************************\n");

	printf("***********************************\n");
}
int main()
{
	//menu();
	//TestSeqList1();
	//TestSeqList2();
	TestSeqList3();
	return 0;
}