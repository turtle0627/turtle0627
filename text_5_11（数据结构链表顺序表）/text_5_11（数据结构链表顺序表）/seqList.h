#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


#define N 100
typedef int SLDataType;

//��̬˳���
typedef struct SeqList
{
	SLDataType* a;
	int size;//��ʾ�����д洢�˶�������
	int capacity;//����ʵ���ܴ洢���ݵĿռ������ж��
}SL;

//�ӿں��� -- ��������Ǹ���STL�ߣ��������ѧϰSTL
void SeqListInit(SL* ps);

void SeqListDestory(SL* ps);

void SeqListPrint(SL* ps);

void SeqListCheckCapacity(SL* ps);

//��̬�ص㣺������˾Ͳ��ò��� ȱ�㣺���������أ��������ȷ��
//N��С�˲����ã��������˷�
//���ʹ�ö�̬��

void SeqListPushBack(SL* ps, SLDataType x);        //β��

void SeqListPopBack(SL* ps);                       //βɾ

void SeqListPushFront(SL* ps, SLDataType x);       //ͷ��

void SeqListPopFront(SL* ps);                      //ͷɾ

void SeqListFind(SL* ps,SLDataType x);             //Ѱ��

void SeqListInsert(SL* ps, int pos, SLDataType x); //ѡλ����

void SeqListErase(SL* ps, int pos, SLDataType x);  //ѡλɾ��