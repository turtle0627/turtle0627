//三子棋游戏
#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"



void menu()
{
	printf("***********************\n");
	printf("****1.play   0.exit****\n");
	printf("***********************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL] = {0};
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if(ret != 'c') 
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("你赢了！真棒");
	}
	else if(ret == '#')
	{
		printf("呜呜呜电脑赢了");
	}
	else
	{
		printf("平局啦");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL)); 
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请输入 1 or 0\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}