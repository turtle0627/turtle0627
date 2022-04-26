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
//	//����ռ�
//	int* p = (int*)malloc(10 * sizeof(int));
//	//ʹ�ÿռ�
//	//*******
//	//�ͷſռ�
//	free(p);
//	p = NULL;//Ӧ���Լ���
//	return 0;
//}

//ʵ��һ�����������������ַ�������abcd -> bcda
//void left_move(char arr[], int k)
//{
//
//}

//������ⷨ
//void left_move1(char* arr, int k)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//����һ���ַ�
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}

//������ת��
//abcdef
//bafedc
//cdefab
void reverse(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
//
void left_move2(char* arr, int k)
{
  
	assert(arr);
	int len = strlen(arr);
	assert(k <= len);
	reverse(arr,arr+k-1);//���
	reverse(arr+k,arr+len-1);//�ұ�
	reverse(arr,arr+len-1);//ȫ��
}
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move2(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}

//дһ���������ж��ַ����Ƿ�Ϊ��һ���ַ�����ת����ַ���
int is_left_move(char* s1, char* s2)
{
	int i = 0;
	int len = strlen(s1);
	for (i = 0; i < len; i++)
	{
		left_move2(s1, 1);
		int ret = strcmp(s1, s2);
		if (ret == 0)
			return 1;
	}
	return 0;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}









