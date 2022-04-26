#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<assert.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; b <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("a = %d b = %d c = %d d = %d e = %d\n", a, b, c, d, e);
//							}
//						
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include<stdlib.h>
//int main()
//{
//	//申请空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	//使用空间
//	//*******
//	//释放空间
//	free(p);
//	p = NULL;//应该自己改
//	return 0;
//}

//实现一个函数，可以左旋字符串，如abcd -> bcda
//void left_move(char arr[], int k)
//{
//
//}

//暴力求解法
void left_move1(char* arr, int k)
{
	assert(arr);
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < k; i++)
	{
		//左旋一个字符
		char tmp = *arr;
		int j = 0;
		for (j = 0; j < len-1; j++)
		{
			*(arr + j) = *(arr + j + 1);
		}
		*(arr + len - 1) = tmp;
	}
}

//三部翻转法
//abcdef
//bafedc
//cdefab
void reverse(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left>right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void left_move2(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	reverse(arr,arr+k-1);//左边
	reverse(arr+k,arr+len-1);//右边
	reverse(arr,arr+len-1);//全部
}

int main()
{
	char arr[] = "abcdef";
	left_move2(arr, 2);
	printf("%s\n", arr);
	return 0;
}