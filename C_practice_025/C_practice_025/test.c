#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include"game.h"

void menu()
{
	printf("**********************************\n");
	printf("************  1. play  ***********\n");
	printf("************  0. exit  ***********\n");
	printf("**********************************\n");
}

void game()
{
	char win = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);

	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		win = CheckWin(board, ROW, COL);
		if (win != ' ')
		{
			break;
		}
		
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		win = CheckWin(board, ROW, COL);
		if (win != ' ')
		{
			break;
		}

	}
	if (win == 'X')
	{
		printf("玩家赢\n");
	}
	else if (win == 'O')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
	/*printf("hehe\n");*/
}
// 1. 玩家赢 - 'X'
// 2. 电脑赢 - '0'
// 3. 平局 - 'Q'
// 4. 继续 - ' '

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
		case PLAY:
			game();
			break;
		case EXIT:
			printf("退出游戏\n");
			break;
		default:
			break;
			printf("选择错误\n");
		}
	} while (input);
}

int main()
{
	test();
	system("pause");
	return 0;
}