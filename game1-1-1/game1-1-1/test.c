#include"game.h"


void menu() {
	printf("**************************\n");
	printf("********* 1. play ********\n");
	printf("********* 0. exit ********\n");
	printf("**************************\n");
}

void menu1() {
	printf("**************************\n");
	printf("******   1. easy    ******\n");
	printf("****** 2. difficult ******\n");
	printf("**************************\n");
}

void gameEasy() {
	int win = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1) {
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		win = CheckWin(board, ROW, COL);
		if (win != ' ') {
			break;
		}

		ComputerEasyMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		win = CheckWin(board, ROW, COL);
		if (win != ' ') {
			break;
		}
	}
	if (win == 'X') {
		printf("玩家赢！恭喜您！！！\n");
	}
	else if (win == 'O') {
		printf("电脑赢！别灰心，继续加油！！！\n");
	}
	else {
		printf("平局！加油哦！！！\n");
	}
}

void gameDifficulty() {
	int win = 0;
	int ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1) {
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		win = CheckWin(board, ROW, COL);
		if (win != ' ') {
			break;
		}

		ret = ComputerDifficultyMove(board, ROW, COL);
		if (0 == ret) {
			ComputerEasyMove(board, ROW, COL);
		}
		DisplayBoard(board, ROW, COL);
		win = CheckWin(board, ROW, COL);
		if (win != ' ') {
			break;
		}
	}
	if (win == 'X') {
		printf("玩家赢！恭喜您！！！\n");
	}
	else if (win == 'O') {
		printf("电脑赢！别灰心，继续加油！！！\n");
	}
	else {
		printf("平局！加油哦！！！\n");
	}
}

void game() {
	int input1 = 0;
	menu1();
	printf("请您选择游戏模式：选择 1 简单模式；选择 2 困难模式\n");
	printf("请选择:>");
	scanf("%d", &input1);
	switch (input1) {
	case EASY:
		gameEasy();
		break;
	case DIFFICULTY:
		gameDifficulty();
		break;
	default:
		printf("选择错误，请您重新选择！\n");
		break;
	}
}

void test() {
	int input = 0;
	int input1 = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请您选择是否开始游戏，选择 0 退出游戏；选择 1 开始游戏\n");
		printf("请选择:>");
		scanf("%d", &input);
		switch (input) {
		case PLAY:
			game();
			break;
		case EXIT:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);
	
}

int main()
{
	test();
	system("pause");
	return 0;
}