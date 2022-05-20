#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


typedef int SLTDataType;

typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

void SListPrint(SLTNode* phead);

void SListPushBack(SLTNode** pphead, SLTDataType x);

void SListPopBack(SLTNode** pphead);

void SListPushFront(SLTNode** pphead, SLTDataType x);

void SListPopFront(SLTNode** pphead);

SLTNode* SListFind(SLTNode* phead, SLTDataType x);
//找到后可以进行修改

void SListInsert(SLTNode** phead, SLTNode* pos, SLTDataType x);
//在pos位置之前插入一个节点

void SListInsertAfter(SLTNode* pos, SLTDataType x);

void SListErase(SLTNode** phead, SLTNode* pos);

void SListEraseAfter(SLTNode* pos);

void SListDestroy(SLTNode** pphead);

