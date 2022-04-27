#define _CRT_SECURE_NO_WARNINGS 
#include<string.h>
#include<stdio.h>
#include<errno.h>
#include<ctype.h>
#include<stdlib.h>
#include<assert.h>

//int main()
//{
//	//192.168.31.121(ip地址
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
//	//第二种
//	//for (ret = strtok(arr, p); ret != NULL;ret = strtok(NULL,p))
//	//{
//	//	printf("%s\n", ret);
//	//}
//
//	//第一种
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
//	//错误码 错误信息
//	//0 ---- No error
//	//1 ---- Operation not permitted
//	//2 ---- No such file or directory
//	//.........
//	//把错误码翻译成对应的错误信息
//	//errno是一个全局的错误码变量
//	//当c语言的库函数在执行过程中，发生了错误，就会把对应的错误码赋值到errno中
//
//	//char* str = strerror(erron);
//	//printf("%s\n", str);
//	
//	//打开文件
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
//	int ret = islower(ch);//是否小写字符
//	int ret = isdigit(ch);//是否数字字符
//	printf("%d\n", ret);
//	return 0;
//}

//字符转换
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
//	//strcpy(arr2, arr1);无法使用
//	//memcpy(arr2, arr1, sizeof(arr1));
//	struct S arr3[] = { {"张三",20},{"李四",30} };
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	return 0;
//}
//memcpy内存拷贝

//void* my_memmove(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	//第二种判断方式
//	if (dest<src || dest>(char*)src + count)
//	{
//		//前 --> 后
//	}
//	else
//	{
//		//后 --> 前
//	}
	//第一种判断方式
	//if (dest<src)//前 --> 后
	//{
	//	
	//	while(num--)
	//	{
	//		*(char*)dest = *(char*)src;
	//		++(char*)dest;
	//		++(char*)src;
	//	}
	//}
	//else//后 --> 前 
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
//memmove处理空间拷贝，处理内存重叠的情况

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 8);
//	return 0;
//}

//memset 内存设置
//int main()
//{
//	//char arr[10] = "";
//	//memset(arr, '#', 10);
//	int arr[10] = { 0 };
//	memset(arr, 1, 10);//改的单位是字节
//}
