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
		printf("���Ӯ\n");
	}
	else if (win == 'O')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	/*printf("hehe\n");*/
}
// 1. ���Ӯ - 'X'
// 2. ����Ӯ - '0'
// 3. ƽ�� - 'Q'
// 4. ���� - ' '

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case PLAY:
			game();
			break;
		case EXIT:
			printf("�˳���Ϸ\n");
			break;
		default:
			break;
			printf("ѡ�����\n");
		}
	} while (input);
}

int main()
{
	test();
	system("pause");
	return 0;
}