#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//翻译环境    运行环境

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	int c = Add(a, b);
//	return 0;
//}


//预定义符号
//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//	//printf("%s\n", __FUNCTION__);
//	//printf("%d\n", __STDC__);  如果编译器遵循ANSI C 其值为1，否则为未定义
//
//	//写日志文件
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d data:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__,i);
//
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}//打开目标位置的文件

//预处理指令
//#define  //定义标识符 定义宏
//#include
//
//
////设置结构体默认对齐数
//#pragma pack(4)
//#pragma
//
//#if
//#endif
//#ifdef
//
//
//#define MAX 100
//#define STR "hehe"
//#define reg	register
//int main()
//{
//	retg int a;
//	register int a;
//}

//#define do_forever for(;;)
//int main()
//{
//	do_forever;//运行时死循环
//	return 0; 
//}

//#define MAX 100;//是否加分号
////最好不加 不然两个分号 一条空语句
//
//int main()
//{
//	int a = MAX;
//	printf("%d\n", a);
//	return 0;
//}

//定义宏
//#define SQUARE(X) X*X
//#define SQUARE(X) (X)*(X)
//写宏的时候 如果参数是表达式，要注意优先级

//int main()
//{
//	//int ret = SQUARE(5);
//	//25
//
//	//int ret = SQUARE(5 + 1);
//	//11
//	return 0;
//}

//#define DOUBLE(X) X+X
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	//55
//	return 0;
//}


//#和##
//void print(int a)
//{
//	printf("the value of a is %d\n", a");
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("the value of a is %d\n", a);
//	print(a);
//	print(b);
//	//此时打印想变成b不行 函数解决不了 因此需要宏
//	return 0;
//}

//#define PRINT(X) printf("the value of "#X" is %d\n",X)//#X X表达内容所对应的字符串
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//}

//##可以把位于两端的符号合成一个符号

//宏的副作用参数
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//	//int max = MAX(a, b);
//	//printf("%d\n", max);
//	
//	int max = MAX(a++, b++);
//	int max = ((a++) > (b++) ? (a++) : (b++));
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//
//	return 0;
//}

//宏和函数的对比
int MAX(int x, int y)
{
	return (X > Y ? X : Y);
}
//函数调用和返回开销（需要做准备）

#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//预处理阶段完成了替换

int main()
{
	int a = 10;
	int b = 20;
	float c = 3.0f;
	float d = 4.0f;

	//int max = MAX(a, b);
	//
	//max = MAX(a, b);

	int max = MAX(c, d);//报错 int 到 float

	max = MAX(c, d);
	
	return 0;
}