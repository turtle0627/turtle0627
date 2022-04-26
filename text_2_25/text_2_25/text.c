#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("已经老了\n");
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf("太年轻\n");
//
//	else if (age >= 18 && age <= 28)
//		printf("刚刚好\n");
//	else
//		printf("太老了");
//	return 0;
//}



//int main()
//{
//	for (int mun = 1; mun <= 100; mun++) {
//		if (mun % 2 == 1) {
//			printf("%d为奇数\n", mun);
//		}
//		else {
//			printf("%d不是奇数\n",mun);
//		}
//	}
//	return 0;
//}

//int mun = 1;
//while (mun <= 100) {
//	if (mun % 2 == 1) {
//		printf("%d为奇数\n", mun);
//	}
//	else {
//		printf("%d不是奇数\n", mun);
//	}
//	mun++;
//}
//return 0;

//int main()
//{
//	int a = 1;
//	if (a % 2 == 1)
//	{
//		printf("%d是奇数", a);
//		a++;
//	}
//	else
//	{
//		printf("%d不是奇数", a);
//		a++;
//	}
//	return 0;

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//			printf("工作日\n");
//			break;
//		case 2:
//			printf("工作日\n");
//			break;
//		case 3:
//			printf("工作日\n");
//			break;
//		case 4:
//			printf("工作日\n");
//			break;
//		case 5:
//			printf("工作日\n");
//			break;
//		case 6:
//			printf("星期六\n");
//			break;
//		case 7:
//			printf("星期日\n");
//			break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("输入错误\n");
//	}
//	return 0;
//}

int main()
{
	int a = 1;
	while (a <= 10)
	{
		printf("%d\n", a);
		a++;
	}
	return 0;
}