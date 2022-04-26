#include <stdio.h>
#include <string.h>

//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("较大值是: %d", num1);
//	else
//		printf("较大值是: %d", num2);
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 1000000;
//	int arr[] = {1, 2, 3, 4, 5, 6};
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof (arr));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("a = %d\n, a");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c = a || b;
//	printf("c = %d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("max = %d\n", max);
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a = %d\n"，a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	extern  int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

//#define Max(x,y) (x>y?x:y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的方式
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//宏的方式
//	max = Max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 10;//4个字节
//	int*p = &a;//取出a的地址
//	//printf("%p\n", &a);
//	//printf("%p\n", p);
//	*p = 20;
//	printf("a = %d\n", a);
//	//printf("%p\n", &a);
//
//	return 0;
//}

int main()
{
	char ch = 'w';
	char* pc = &ch;
	printf("%d\n", sizeof(pc));
	//*pc = 'a';
	//printf("%c\n", ch);
	return 0;
}