#define _CRT_SECUre_NO_WARNINGS
#include"SeqList.h"

void menu()
{
	;
}

void TestSeqList1()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);

	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);

	SeqListPrint(&s1);

	SeqListDestory(&s1);
}

int main()
{
	menu();
	TestSeqList1();
	return 0;
}
