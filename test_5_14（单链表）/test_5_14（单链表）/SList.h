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
//�ҵ�����Խ����޸�

void SListInsert(SLTNode** phead, SLTNode* pos, SLTDataType x);
//��posλ��֮ǰ����һ���ڵ�

void SListInsertAfter(SLTNode* pos, SLTDataType x);

void SListErase(SLTNode** phead, SLTNode* pos);

void SListEraseAfter(SLTNode* pos);

void SListDestroy(SLTNode** pphead);

