#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

//int main()
//{
//	char* arr[5];
//	char (*pa)[5] = &arr;
//
//	int arr[10] = { 0 };
//	int(*pa2)[10] = &arr2;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", *(p + 1));
//	}
//	//int(*pa)[10] = &arr;
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(*pa + 1));
//	}*/
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d\n", (*pa)[i]);
//	//}
//}

//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ",	p[i][j]);
//			printf("%d ", *(p[i] + j));
//			printf("%d ", *(*(p + i) + j));
//			//printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	/*print1(arr,3,5);*/
//	print2(arr, 3, 5);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + 1);
//		printf("%d ", *(arr + 1);
//		printf("%d ", arr[i]);//arr[i] == *(arr + i) == *(p + i) == p[i]
//	}
//	return 0;
//}

//void test1(int arr[3][5])//正确
//{}
//
//void test2(int arr[][5])//正确
//{}
//
//void test3(int arr[3][])//err
//{}

//void test4(int **arr)//err
//{}

//void test5(int(*arr)[5])
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//
//	//test1(arr);
//	//test2(arr);
//	//test3(arr);
//	//test4(arr);
//	test(arr);
//	return 0;
//}

//void test(int **p)
//
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);
//	return 0;
//}

//函数指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a,&b);
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(a, b));
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("hello bit");
//	return 0;
//}

//void (*signal(int, void(*)(int)))(int);
//=
//pfun_t sighal(int, pfun_t);
//+
//typedef void(*pfun_t)(int);


//typedef unsigned int uint;

//int Add(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (pa)(2, 3));
//	printf("%d\n", pa(2, 3));
//	printf("%d\n", Add(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", (**pa)(2, 3));
//	printf("%d\n", (***pa)(2, 3));
//	printf("%d\n", *pa(2, 3));//err
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//
//	int* arr[5];
//	//需要数组都存起来 可存放4个函数的地址——函数指针的数组
//	int (*pa)(int, int) = Add;//Sub/Mul/Div
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", parr[i](2, 3));
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
// {}
//
//int main()
//{
//	char*(*pf)(char*,const char*) = my_strcpy;
//	char*(*pfarr[4])(char*,const char*) = { my_strcpy,1,2,3 };
//}

//计算器

void menu()
{
	printf("**************************************\n");
	printf("******** 1. Add        2. Sub ********\n");
	printf("******** 3. Mul        4. Div ********\n");
	printf("******** 5. XOR        0.exit ********\n");
	printf("**************************************\n");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

int XOR(int x, int y)
{
	return x ^ y;
}



//初始版被（未优化
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		printf("请输入两个操作数:>");
//		scanf("%d%d",&x,&y);
//		switch (input)
//		{
//		case1:
//			Calc(Add)
//			printf("%d\n", Add(x, y));
//			printf("请输入两个操作数:>");
//			scanf("%d%d", & x, &y);
//			break;
//		case2:
//			printf("%d\n", Sub(x, y));
//			printf("请输入两个操作数:>");
//			scanf("%d%d", & x, &y);
//			break;
//		case3:
//			printf("%d\n", Mul(x, y));
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			break;
//		case4:
//			printf("%d\n", Div(x, y));
//			printf("请输入两个操作数:>");
//			scanf("%d%d", & x, &y);
//			break;
//		case0:
//			printf("退出\n");
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//优化1
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int (*pfarr[])(int, int) = { 0,Add,Sub,Mul,Div,XOR};
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfarr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//
//	} while (input);
//}

//优化2
//void Calc(int(*pf)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", & x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		printf("请输入两个操作数:>");
//		scanf("%d%d", &x, &y);
//		switch (input)
//		{
//		case1:
//			Calc(Add);
//			break;
//		case2:
//			Calc(Sub);
//			break;
//		case3:
//			Calc(Mul);
//			break;
//		case4:
//			Calc(Div);
//			break;
//		case0:
//			printf("退出\n");
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//void print(char* str)//回调函数
//{
//	printf("hehe:%s", str);
//}
//
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//
//int main()
//{
//	test(print);
//	return 0;
//}

BubbleSort(arr, sz)
{
	;
}

//qsort - 可以排序任意类型的数据

int main()
{
	//冒泡排序只能排序整形数组
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
}