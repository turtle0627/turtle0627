#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <string.h>

#include <windows.h>

#include <stdlib.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//}
	/*int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	printf("请确认（Y/X）:>");
	ret = getchar();
	if (ret == 'Y')
	{
		printf("确认成功");
	}
	else
	{
		printf("确认失败");
	}
	return 0;
}*/

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for(i = 0; i <=9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	for (;;)
//		printf("hehe");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{	
//		ret = ret * n;
//		
//		sum = sum + ret;
//	}
//	printf("ret = %d\n", ret);
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("before\n");
//	printf("a = %d b = %d\n", a, b);
//	int c = a;
//	a = b;
//	b = c;
//	printf("after\n");
//	printf("a = %d b = %d\n",a, b);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 70;
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是%d\n", i);
//			break;
//		}
//		
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;;
//}

//int main()
//{
//	int k = 7;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了,下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到的\n");
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr[0])-2;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s\n", password);
			if (strcmp(password,"123456") == 0)
			{
				printf("登陆成功\n");
				break;
			}
	}
	if (i == 3)
		printf("登陆失败，请重试");
	return 0;
}