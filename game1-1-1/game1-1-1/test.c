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
		printf("���Ӯ����ϲ��������\n");
	}
	else if (win == 'O') {
		printf("����Ӯ������ģ��������ͣ�����\n");
	}
	else {
		printf("ƽ�֣�����Ŷ������\n");
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
		printf("���Ӯ����ϲ��������\n");
	}
	else if (win == 'O') {
		printf("����Ӯ������ģ��������ͣ�����\n");
	}
	else {
		printf("ƽ�֣�����Ŷ������\n");
	}
}

void game() {
	int input1 = 0;
	menu1();
	printf("����ѡ����Ϸģʽ��ѡ�� 1 ��ģʽ��ѡ�� 2 ����ģʽ\n");
	printf("��ѡ��:>");
	scanf("%d", &input1);
	switch (input1) {
	case EASY:
		gameEasy();
		break;
	case DIFFICULTY:
		gameDifficulty();
		break;
	default:
		printf("ѡ�������������ѡ��\n");
		break;
	}
}

void test() {
	int input = 0;
	int input1 = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("����ѡ���Ƿ�ʼ��Ϸ��ѡ�� 0 �˳���Ϸ��ѡ�� 1 ��ʼ��Ϸ\n");
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input) {
		case PLAY:
			game();
			break;
		case EXIT:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
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