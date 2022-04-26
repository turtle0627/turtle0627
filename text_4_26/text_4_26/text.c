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
//	//1.��str1�ַ�����׷��һ��str1�ַ���
//	//strcat(str1, str1);//׷���ַ��� !!�Լ����Լ�׷�ӵ�ʱ����ʹ��strcat ��������>\0�ᱻ���� ��˲���׷���Լ� err
//	strncat(str1, str1, len1);
//	//2.�ж�str2ָ����ַ����Ƿ�Ϊstr1ָ����ַ������Ӵ�
//	//strstr-���Ӵ�
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

//���Ͼ���
//�и����־��󣬾����ÿ�д������ǵ����ģ�ÿһ�д��ϵ����ǵ����ģ����д�����������ľ�����Ѱ��ĳ�������Ƿ����
//ʱ�临�Ӷ�С��O(N);

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
	//�Ҳ���
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
	//�Ҳ���
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
	//�����Ͳ���
	int ret = FindNum2(arr, k, &row, &col);
	if (ret == 1)
		printf("�ҵ���,�±���:%d %d\n",col,row);
	else
		printf("�Ҳ���\n");
	return 0;
}
