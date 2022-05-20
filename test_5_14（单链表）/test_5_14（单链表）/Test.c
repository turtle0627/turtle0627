#define _CRT_SECURE_NO_WArNINGS
#include"SList.h"
#include"Dlist.h"
//void TestSList1()
//{
//	SLTNode* plist = NULL;
//	SListPushBack(&plist, 1);
//	SListPushBack(&plist, 2);
//	SListPushBack(&plist, 3);
//	SListPushBack(&plist, 4);
//
//	SListPrint(plist);
//}
//
//void TestSList2()
//{
//	SLTNode* plist = NULL;
//	SListPushFront(&plist, 1);
//	SListPushFront(&plist, 2);
//	SListPushFront(&plist, 3);
//	SListPushFront(&plist, 2);
//	SListPushFront(&plist, 4);
//
//
//	//SLTNode* pos = SListFind(plist, 2);
//	//int i = 1;
//	//while (pos)
//	//{
//	//	printf("第%d个pos节点:%p->%d\n", i++, pos, pos->data);
//	//	pos = SListFind(pos->next, 2);
//	//}
////	修改 3->30
//	//pos = SListFind(plist, 3);
//	//if(pos)
//	//{
//	//	pos->data = 30;
//	//}
//	SLTNode* pos = SListFind(plist, 3);
//	if (pos)
//	{
//		SListInsert(&plist, pos, 30);
//	}
//
//	pos = SListFind(plist, 1);
//	if (pos)
//	{
//		SListInsert(&plist, pos, 10);
//	}
//	SListPrint(plist);
//}
//
//TestSList3()
//{
//	;
//}
//
//int main()
//{
////	TestSList1();
//	TestSList2();
////	TestSList3();
//	return 0;
//}

//int main()
//{
//	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
//	n1->val = 7;
//	n2->val = 7;
//	n3->val = 7;
//	n4->val = 7;
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = n4;
//	n4->next = NULL;
//
//
//}用于调试链表

void TestList1()
{
	DLTNode* plist = ListInit();
	ListInit(plist);
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushBack(plist, 5);
	ListPrint(plist);

	ListPopBack(plist);
	ListPrint(plist);

	ListPushFront(plist, 0);
	ListPrint(plist);

	ListPopFront(plist);
	ListPopFront(plist);
	ListPopFront(plist);
	ListPrint(plist);

	ListInsert(plist, 4);
	ListPrint(plist);
}

int main()
{
	TestList1();
	return 0;
}