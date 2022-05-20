#include"Dlist.h"

DLTNode* ListInit()
{
	//哨兵位头结点
	DLTNode* phead = (DLTNode*)malloc(sizeof(DLTNode));
	phead->next = phead;
	phead->prev = phead;
	
	return phead;
}

DLTNode* BuyDListNode(DLTDataType x)
{
	DLTNode* newnode = (DLTNode*)malloc(sizeof(DLTNode));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}

void ListPushBack(DLTNode* phead, DLTDataType x)
{
	assert(phead);
	//DLTNode* tail = phead->prev;
	//DLTNode* newnode = BuyDListNode(x);
	//newnode->data = x;
	//tail->next = newnode;
	//newnode->prev = tail;
	//newnode->next = phead;
	//phead->prev = newnode;

	ListInsert(phead, x);
}

void ListPrint(DLTNode* phead)
{
	assert(phead);
	DLTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void ListPopBack(DLTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	DLTNode* tail = phead->prev;
	phead->prev = tail->prev;
	tail->prev->next = phead;
	free(tail);

}

void ListPushFront(DLTNode* phead, DLTDataType x)
{
	assert(phead);
	//DLTNode* newnode = BuyDListNode(x);
	//DLTNode* next = phead->next;
	//
	//phead->next = newnode;
	//newnode->prev = phead;

	//newnode->next = next;
	//next->prev = newnode;
	ListInsert(phead->next, x);
}

void ListPopFront(DLTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	DLTNode* next = phead->next;
	DLTNode* nextNext = next->next;

	phead->next = nextNext;
	nextNext->prev = phead;
	free(next);
}

DLTNode* ListFine(DLTNode* phead, DLTDataType x)
{
	assert(phead);
	DLTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void ListInsert(DLTNode* pos, DLTDataType x)//在pos之前插入
{
	assert(pos);
	DLTNode* posPrev = pos->prev;
	DLTNode* newnode= BuyDListNode(x);

	posPrev->next = newnode;
	newnode->prev = posPrev;
	newnode->next = pos;
	pos->prev = newnode;
}

void ListErase(DLTNode* pos)//在pos之后删除
{
	assert(pos);
}