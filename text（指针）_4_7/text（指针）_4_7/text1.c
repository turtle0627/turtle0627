#define _CRT_SECURE_NO_WARNINGS _1

#include<stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + 1) = 1;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p++);
//		
//	}
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,,6,7,8,9,10 };
	&arr[9] - &arr[0];
	return 0;
}