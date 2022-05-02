#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

//text.c(测试功能

//contact.c(实现函数功能

//contact.h(声明函数

//通讯录功能
//1.存放1000个人的好友信息
//好友 --> 名字+电话+性别+住址+年龄
//2.能够增加好友信息
//3.能够删除好友信息
//4.能够查找好友信息
//5.能够修改好友信息
//6.能够打印好友信息
//7.排序

void menu()
{
	printf("***************************************\n");
	printf("****** 1. add          2. del    ******\n");
	printf("****** 3. search       4. modify ******\n");
	printf("****** 5. show         6. sort   ******\n");
	printf("****** 0. exit                   ******\n");
	printf("***************************************\n");
}






int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;//con就是通讯录，里面包含1000个元素和size
	InitContact(&con);//初始化通讯录
	do
	{
		menu();
		printf("请选择");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case 0:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}