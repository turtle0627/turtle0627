#define _CRT_SECURE_NO_WARNINGS_ 1
#include<stdio.h>

//check_sys1()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//}

//check_sys2()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	//返回1 小端 返回2 大端
//	return *p;
//}

check_sys3()
{
	int a = 1;
	return *(char*)&a;
}

int main()
{	
	int ret = check_sys3();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}