#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//位段——二进制位
//struct S
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	struct S s = { 0 };

	s.a = 10;
	s.b = 20;
	s.c = 3;
	s.d = 4;

	return 0;
}





