#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.在str1字符串中追加一个str1字符串
//	//strcat(str1, str1);//追加字符串 !!自己给自己追加的时候不能使用strcat ————>\0会被覆盖 因此不能追加自己 err
//	strncat(str1, str1, len1);
//	//2.判断str2指向的字符串是否为str1指向的字符串的子串
//	//strstr-找子串
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}

//杨氏矩阵
//有个数字矩阵，矩阵的每行从左到右是递增的，每一列从上到下是递增的，请编写程序在这样的矩阵中寻找某个数字是否存在
//时间复杂度小于O(N);

int FindNum1(int arr[3][3], int k, int row, int col)
{
	int x = 0;
	int y = col - 1;
	while (x <= row - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			return 1;
		}
	}
	//找不到
	return 0;
}

int FindNum2(int arr[3][3], int k, int*row, int*col)
{
	int x = 0;
	int y = *col - 1;
	while (x <= *row - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*row = x;
			*col = y;
			return 1;
		}
	}
	//找不到
	*row = -1;
	*col = -1;
	return 0;
}

int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int row = 3;
	int col = 3;
	//int ret = FindNum1(arr, k, &row, &col);
	//返回型参数
	int ret = FindNum2(arr, k, &row, &col);
	if (ret == 1)
		printf("找到了,下标是:%d %d\n",col,row);
	else
		printf("找不到\n");
	return 0;
}
