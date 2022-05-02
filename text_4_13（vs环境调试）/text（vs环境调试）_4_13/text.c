#define _CRT_SECURE_NO_WARNINGS_ 1
#include <stdio.h>
#include<stdlib.h>

//Debug和release有区别
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//使用F9 F5
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	return 0;
//}

//使用F11 F10
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}

//void my_strcpy1(char* dest,char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;// '\0'
//}
//
//void my_strcpy2(char* dest, char* src)
//{
//while (*src != '\0')
//{
//	*dest++ = *src++;
//}
//*dest = *src;// '\0'
//}
//
//void my_strcpy3(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
//
#include<assert.h>
//void my_strcpy4(char* dest, char* src)
//{
//	assert(dest!= NULL);//断言
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//void my_strcpy5(char* dest,const char* src)
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//char* my_strcpy6(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "###########";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	p = &num;
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}

int my_strlen(const char* arr)
{
	assert(arr != NULL);
	int count = 0;
	while (*arr != '\0')
	{
		arr++;
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}