#include "Stack.h"
#include"Queue.h"

//void TestStack()
//{
//	ST st;
//	StackInit(&st);
//	StackPush(&st, 1);
//	StackPush(&st, 2);
//	StackPush(&st, 3);
//	StackPush(&st, 4);
//	StackPush(&st, 5);
//	printf("%d ", StackTop(&st));
//	StackPop(&st);
//	printf("%d ", StackTop(&st));
//	StackPop(&st);
//
//	StackPush(&st, 5);
//	StackPush(&st, 6);
//
//	while (!StackEmpty(&st))
//	{
//		printf("%d ", StackTop(&st));
//		StackPop(&st);
//	}
//
//	StackDestory(&st);
	//StackPop(&st);
	//StackPop(&st);
	//StackPop(&st);
	//StackPop(&st);
	//StackPop(&st);



	//printf("%d\n", StackTop(&st));

//}

void TestQueue1()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	QueuePush(&q, 4);

	while (!QueueEmpty(&q));
	{
		QDataType front = QueueFront(&q);
		printf("%d ", front);
		QueuePop(&q);
	}
	printf("\n");

	QueuePop(&q);
	QueuePop(&q);
	
	printf("%d\n", QueueSize(&q));
}

int main()
{
	//TestStack();
	TestQueue1();
	return 0;
}