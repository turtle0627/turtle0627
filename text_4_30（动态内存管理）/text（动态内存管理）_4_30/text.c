#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<windows.h>

//struct S
//{
//	char name[20];
//	int age;
//};

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	struct S arr[n];
//	return 0;
//}//error

//C语言是可以创建变长数组 -C99中增加了

//malloc  不初始化
//free
//calloc  初始化为0
//realloc 可以调整动态内存的大小

//int main()
//{
//	//向内存申请10个整形空间
//	//int* p = (int*)malloc(10 * sizeof(int));//成功
//	int* p = (int*)malloc(INT_MAX);
//	//malloc可能开辟空间失败
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else//正常使用空间
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//使用完毕 要归还
//	free(p);//释放空间
//	p = NULL;//防止犯错误
//	return 0;
//}

//int main()
//{
//	int* p = (int*)calloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		pritnf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//假设20个所开辟的不够用了，希望有40个
//	//使用realloc
//	int*ptr = realloc(p, 4000);
//	if (ptr == NULL)//追加失败
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc使用注意事项
//有空间追加，直接追加并返回p
//没有空间追加，直接开辟新满足需求的空间并把原来内存中的数据拷贝回来，并释放旧的内存，返回新地址
//追加失败，返回空指针
//因此使用新的变量来接受realloc函数的返回值

//int main()
//{
//	int* p = (int*)malloc(40);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//}
//越界访问

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	free(p);
//	p = NULL;
//	return 0;
//}//对非动态开辟内存的free error

//int main()
//{
//	/*int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	realloc(p, 80);
//	if (p2 != NULL)
//	{
//		p2 = p;
//	}*/
//
//	int* p = realloc(NULL, 40);//malloc(40)
//	return 0;
//}

//内存泄漏
//int main()
//{
//	while (1)
//	{
//		malloc(1);
//		Sleep(1000);
//	}
// }

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//
//void Test1(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test1();
//	return 0;
//}//代码崩溃 p是临时拷贝 函数出来以后就消失了 所以地址找不到了 内存泄漏
//
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test2(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test2();
//	return 0;
//}//使用二级指针传地址

//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test3(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test3();
//	return 0;
//}//增加返回值 p会存在不会因为出函数而消失


//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}//返回栈空间地址问题 非法访问

//int* test()
//{
//	int a = 10;//栈区
//	return &a;
//}
//
//int main()
//{
//	int *p = test();
//	*p = 20;
//	return 0;
//}//返回栈空间地址问题 非法访问
//
//int* test()
//{
//	static int a = 10;//静态区
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}//则可以使用
//
//int* test()
//{
//	int* ptr = malloc(100);//堆区
//	return ptr;
//}
//
//int main()
//{
//	int* p = test;
//	return 0;
//}


//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}//过早释放

/////////////////////////

//struct S
//{
//	int n;
//	int arr[10];
//};//传统写法

//struct S
//{
//	int n;
//	int arr[];//未知大小 //或 arr[0]
//};//柔性数组成员
//
//int main()
//{
//	//struct S s;
//	struct S* ps =(struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//效果同上 但是复杂 解释柔性数组的存在意义
//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5*sizeof(struct S));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ",ps->arr[i]);
//	}
//	//调整大小
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps->arr);
//	free(ps);
//	ps = NULL;
//	return 0;
//}















