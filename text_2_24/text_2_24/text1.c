#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%lf\n", d);
//	//int a = 10;
//	////printf("%p\n", &a);
//	//int* p = &a;
//	//printf("%p\n", p);
//	//*p = 20;
//	//printf("%d\n", a);
//	return 0;
//}

struct Book
{
	char name[200];//C语言程序设计
	short price;//55
	
};

int main()
{
	struct Book b1 = {"C语言程序设计", 55};
	struct Book* pd = &b1;
	printf("%s\n", pd->name);
	printf("%d\n", pd->price);
	//printf("%s\n", (*pd).name);
	//printf("书名:%s\n", b1.name);
	//printf("价格:%d元\n", b1.price);
	//b1.price = 15;
	//printf("修改后的价格:%d\n", b1.price);
	return 0;
}
