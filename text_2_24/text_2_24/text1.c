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
	char name[200];//C���Գ������
	short price;//55
	
};

int main()
{
	struct Book b1 = {"C���Գ������", 55};
	struct Book* pd = &b1;
	printf("%s\n", pd->name);
	printf("%d\n", pd->price);
	//printf("%s\n", (*pd).name);
	//printf("����:%s\n", b1.name);
	//printf("�۸�:%dԪ\n", b1.price);
	//b1.price = 15;
	//printf("�޸ĺ�ļ۸�:%d\n", b1.price);
	return 0;
}
