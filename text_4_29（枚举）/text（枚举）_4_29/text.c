#define _CRT_SECURE_NO_WARNINGS


//枚举类型
//enum Sex
//{
//	//枚举的可能取值-常量
//	MALE = 2,
//	FEMALE = 4,
//	SECURE = 8
//};
//
////enum Color
////{
////	RED,  //0
////	GREEN,//1
////	BLUE  //2
////};
//
//#define RED 0
//#define GREEN 0
//#define BLUE 2
//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = BLUE;
//	int color = RED;
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//	return 0;
//}


//联合-联合体-共用体
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}


//int check_sys1()
//{
//	int a = 1;
//	return *(char*)&a;
//}

int check_sys2()
{
	union
	{
		char c;
		int i;
	}u;//匿名结构体
	u.i = 1;
	//返回1 小端
	//返回2 大端
	return u.c;
}

int main()
{
	int a = 0x11223344;
	//低地址 -------------------------> 高地址
	// 11 22 33 44 大端
	// 44 33 22 11 小端
	//讨论一个数据，放在内存字节存放顺序
	//大小端字节序

	//int ret = check_sys1();

	//if (1 == *(char*)&a)
	//{
	//	printf("小端\n");
	//}
	//else
	//{
	//	printf("大端\n");
	//}

	return 0;
}







