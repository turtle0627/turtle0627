#define _CRT_SECURE_NO_WARNINGS 
#include<string.h>
#include<stdio.h>
#include<errno.h>
#include<ctype.h>
#include<stdlib.h>
#include<assert.h>

//int main()
//{
//	//192.168.31.121(ip��ַ
//	//----strtok
//	//192 168 31 121
//
//	//shj@bit.com
//	//shj bit com
//
//	char arr[] = "shj@bit.com";
//	char* p = "@.";
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;
//	//�ڶ���
//	//for (ret = strtok(arr, p); ret != NULL;ret = strtok(NULL,p))
//	//{
//	//	printf("%s\n", ret);
//	//}
//
//	//��һ��
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//pirntf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	return 0;
//}

//int main()
//{
//	//������ ������Ϣ
//	//0 ---- No error
//	//1 ---- Operation not permitted
//	//2 ---- No such file or directory
//	//.........
//	//�Ѵ����뷭��ɶ�Ӧ�Ĵ�����Ϣ
//	//errno��һ��ȫ�ֵĴ��������
//	//��c���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����븳ֵ��errno��
//
//	//char* str = strerror(erron);
//	//printf("%s\n", str);
//	
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strrerrno(errno));
//	}
//	else
//	{
//		printf("open file success");
//	}
//	return 0;
//}

//int main()
//{
//	char ch = '@';
//	int ret = islower(ch);//�Ƿ�Сд�ַ�
//	int ret = isdigit(ch);//�Ƿ������ַ�
//	printf("%d\n", ret);
//	return 0;
//}

//�ַ�ת��
//int main()
//{
//	//char ch = tolower('q');
//	char ch = toupper('q');
//	putchar(ch);
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//};

//void* my_memcpy(void* dest,const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	whlie(num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	//strcpy(arr2, arr1);�޷�ʹ��
//	//memcpy(arr2, arr1, sizeof(arr1));
//	struct S arr3[] = { {"����",20},{"����",30} };
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}
//memcpy�ڴ濽��

//void* my_memmove(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	//�ڶ����жϷ�ʽ
//	if (dest<src || dest>(char*)src + count)
//	{
//		//ǰ --> ��
//	}
//	else
//	{
//		//�� --> ǰ
//	}
	//��һ���жϷ�ʽ
	//if (dest<src)//ǰ --> ��
	//{
	//	
	//	while(num--)
	//	{
	//		*(char*)dest = *(char*)src;
	//		++(char*)dest;
	//		++(char*)src;
	//	}
	//}
	//else//�� --> ǰ 
	//{
	//	void* ret = dest;
	//	while (num--)
	//	{
	//		*((char*)dest + num) = *((char*)src + num);
	//	}
	//}
	//return ret;
}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr+3, arr, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//memmove����ռ俽���������ڴ��ص������

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 8);
//	return 0;
//}

//memset �ڴ�����
//int main()
//{
//	//char arr[10] = "";
//	//memset(arr, '#', 10);
//	int arr[10] = { 0 };
//	memset(arr, 1, 10);//�ĵĵ�λ���ֽ�
//}
