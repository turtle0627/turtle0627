#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

#include <math.h>

#include <stdlib.h>

#include <time.h>

#include <string.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);//2 3 4
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 25;
//	int b = 15;
//	int r = 0;
//	/*scanf("%d %d", a, b);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}*/
//	while (r = a % b)
//	{
//		a = b;
//		b = r;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 10000; year++)
//	{
//		//if (year % 4 == 0 && year % 100 != 0)
//		//{
//		//	printf("%d\n", year);
//		//	count++;
//		//}
//		//else if (year % 400 == 0)
//		//{
//		//	printf("%d\n", year);
//		//	count++;
//		//}
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//		printf("%d ", year);
//		count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;	
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j >sqrt(i)) 
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 4, 5, 3, 2 };
//	int i = 0;
//	for (i = 0; i <= 4; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	int a = 0;
//	i = 0;
//	/*int count = 0;
//	while (count < 2)
//	{
//		for (int i = 4; i > 0; i--) {
//			for (int j = i; j > 0; j--) {
//				if (arr[j] < arr[j - 1]) {
//					int tmp = arr[j];
//					arr[j] = arr[j - 1];
//					arr[j - 1] = tmp;
//				}
//			}
//		}
//		count++;
//	}*/
//		for (int i = 0; i < 5; i++) {
//			for (int j = 4; j > i ; j--) {
//				if (arr[j] > arr[j - 1]) {
//					int tmp = arr[j];
//					arr[j] = arr[j - 1];
//					arr[j - 1] = tmp;
//				}
//			}
//		}
//	printf("\n");
//	for (i = 0; i <= 4; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//		return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d", max);\
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//
//	}
//	return 0;
//}

//RAND_MAX(0~32767)
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand();
//	ret = rand() % 100 + 1;
//	//printf("%d\n", ret);
//	//生成随机函数
//	while (1)
//	{
//		printf("猜猜数字:>");
//		scanf("%d", &guess);
//		if(guess>ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了！！！\n");
//			break;
//		}
//	}
//}
//
//void menu()
//{
//	printf("************************************\n");
//	printf("****    1.play        0.exit    ****\n");
//	printf("************************************\n");
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:	
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("请输入 1 or 0 方可开始");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//again:
//	printf("爱了\n");
//	goto again;
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdow -s-t 60");
//again:
//	printf("请注意，你的电脑在一分钟内关机，如果输入:我是猪，就取消关机\n请输入>:");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

int main()
{
	char input[20] = { 0 };
	system("shutdow -s-t 60"); 
	while (1)
	{
		printf("请注意，你的电脑在一分钟内关机，如果输入:我是猪，就取消关机\n请输入>:");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}