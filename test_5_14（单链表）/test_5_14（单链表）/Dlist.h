#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


typedef int DLTDataType;

typedef struct DListNode
{
	DLTDataType data;
	struct DListNode* next;
	struct DListNode* prev;
}DLTNode;

DLTNode* ListInit();

void ListPrint(DLTNode* phead);

void ListPushBack(DLTNode* phead, DLTDataType x);

void ListPopBack(DLTNode* phead);

void ListPushFront(DLTNode* phead, DLTDataType x);

void ListPopFront(DLTNode* phead);

DLTNode* ListFind(DLTNode* phead, DLTDataType x);

void ListInsert(DLTNode* pos, DLTDataType x);

void ListErase(DLTNode* pos);

void ListDestroy(DLTNode* phead);

