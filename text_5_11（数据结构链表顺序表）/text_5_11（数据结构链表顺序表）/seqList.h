#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


#define N 100
typedef int SLDataType;

//动态顺序表
typedef struct SeqList
{
	SLDataType* a;
	int size;//表示数组中存储了多少数据
	int capacity;//数据实际能存储数据的空间容量有多大
}SL;

//接口函数 -- 命名风格是跟着STL走，方便后续学习STL
void SeqListInit(SL* ps);

void SeqListDestory(SL* ps);

void SeqListPrint(SL* ps);

void SeqListCheckCapacity(SL* ps);

//静态特点：如果满了就不让插入 缺点：给多大合适呢？这个很难确定
//N给小了不够用，给打了浪费
//因此使用动态的

void SeqListPushBack(SL* ps, SLDataType x);        //尾插

void SeqListPopBack(SL* ps);                       //尾删

void SeqListPushFront(SL* ps, SLDataType x);       //头插

void SeqListPopFront(SL* ps);                      //头删

void SeqListFind(SL* ps,SLDataType x);             //寻找

void SeqListInsert(SL* ps, int pos, SLDataType x); //选位插入

void SeqListErase(SL* ps, int pos, SLDataType x);  //选位删除