#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<assert.h>

//������
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')//while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//�ݹ�
//ָ���ָ��

//int main()
//{
//	//int len = my_strlen("abcdef");
//	//char arr[] = { 'a','b','c','d','e','f' };//ʹ��strlen����
//	//printf("%d\n", len);
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//size_t == unsigned int

//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1.�ҵ�Ŀ���ַ�����û��'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "bit";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//}

//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "abc";
//	if (strcmp(p1, p2) > 0)
//		printf("p1>p2\n");
//	else if (strcmp(p1, p2) < 0)
//		printf("p1<p2\n");
//	else
//		printf("p1 = p2\n");
//	return 0;
//}

//my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)//���巵��1or-1
//		return 1;
//	else(*str1 < *str2)
//		return -1;
//	//return (*str1 - *str2);//û�о���1or0��ֻ������������0
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 4);//������Ҫ����
//	return 0;
//}

//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "bit";
//	strncat(arr1, arr2, 3);//�����˾Ͳ�����
//	return 0;
//}









