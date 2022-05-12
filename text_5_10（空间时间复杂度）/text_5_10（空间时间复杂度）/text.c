#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>



//��һ��ȱʧ������ ʱ�临�Ӷ�O(N)��
// 
//˼·һ qsort ���� ʱ�临�Ӷ�	O(n*log2 N)
//˼·�� ����  �ռ临�Ӷ�O(1) ʱ�临�Ӷ�O(N)
//˼·�� �������ڵڼ���λ�þ����Ǹ�λ��д�� �ռ临�Ӷ�O(N) ʱ�临�Ӷ�O(N)
//˼·�� ��� x�ȸ�0~n������ֵ��� x�ٸ�������� ������һ��ȱ�� �ռ临�Ӷ�O(1) ʱ�临�Ӷ�O(N)

//int missingNumber(int* nums, int numsSize)
//{
//	int i = 0;
//	int x = 0;
//	for (i = 0; i <= numsSize; ++i)
//	{
//		x ^= i;
//	}
//	for (i = 0; i < numsSize; ++i)
//	{
//		x ^= nums[i];
//	}
//	return x;
//}
//
//int main()
//{
//	int arr[10] = {3,2,4,5,1,7,6,8,0,10};
//	int n = sizeof(arr)/sizeof(arr[0]);
//	int ret = missingNumber(arr,n);
//	
//	printf("%d\n", ret);
//	return 0;
//}


//��ת����
//void Reverse(int* nums, int left, int right)
//{
//	while(left < right)
//	{
//		int tmp = nums[left];
//		nums[left] = nums[right];
//		nums[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//void rotate(int* num, int numSize, int k)
//{
//	if (k >= numSize)
//	{
//		k %= numSize;
//	}
//	Reverse(num, 0, numSize - k - 1);
//	Reverse(num, numSize - k, numSize - 1);
//	Reverse(num, 0, numSize- 1);
//}
//
//int main()
//{
//	int a = 0;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &a);
//	rotate(arr, n, a);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}





