#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

// ��ʼ������
// ��ܰ��ʾ��
//	   ����ĳһЩ���������������������Ժ�����������ʽ������������
void InitBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}

// ��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	for (i = 0; i < ROW; i++) {
		int j = 0;
		for (j = 0; j < col; j++) {
			printf(" %c ",board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");
		// printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		if (i < row - 1) {
			for (j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1) {
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

// �����
// ��������������һ��Ҫ�ж���������Ƿ�Ϸ���������Ϸ�����ʾ�����������
// ���Ϸ��ļ��������
//	   1. ��������겻�����̷�Χ��
//	   2. ��������������̷�Χ�ڣ����Ǵ�λ���Ѿ�����
void PlayerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("����ߣ�\n");
	while (1) {
		printf("�����������꣺");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {		// �ж�����Ϸ�
			if (board[x - 1][y - 1] == ' ') {		// �ж�������������λ������
				board[x - 1][y - 1] = 'X';			// ����Ϸ������� 'X'
				break;
			}
			else {
				printf("���걻ռ�ã�\n");
			}
		}
		else {
			printf("����Ƿ���\n");
		}
	}
}

// ������
void ComputerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("�����ߣ�\n");

	while (1) {
		// ʹ�� rand �������������
		// ʹ�� rand ����ʱ��Ҫ���� srand
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = 'O';
			break;
		}


		//if (board[x - 1][y - 1] == 'X') {
		//	if (x == 1 && y == 1) {
		//		board[x - 1][y] = 'O';
		//			//|| (board[x][y - 1] = 'O')
		//			//|| (board[x][y] = 'O'));
		//		//break;
		//	}

		//	if ((x == row - 1) && (y == 0)) {
		//		;
		//	}

		//	if ((x == 0) && (y == col - 1)) {
		//		;
		//	}
		//		
		//	if ((x == row - 1) && (y == col - 1)) {
		//		;
		//	}
		//}
	}
}

// IsFull �������ֻ��Ϊ�����ж� �Ƿ�ƽ�ֵ�ʱ����һ�£����Ծ�û��Ҫ��©��ȥ
// ���ԾͲ���Ҫ����������ͷ�ļ���ȥ��ֻ�����ڲ�����
// ���ﶨ�� IsFull �������ֻ��Ϊ�˹� CheckWin �������ʹ��
// Ϊ�˱���ͱ�ĺ�����ͻ�����Զ���ʱ ����һ�� static ��������
// static ���εĺ���ֻ���ڵ�ǰԴ�ļ���ʹ�ã�����������Դ�ļ��ڲ�ʹ��
// ��ʱ�ⲿ�������Ծͱ�����ڲ���������
static int IsFull(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}

char CheckWin(char board[ROW][COL], int row, int col) {
	// �ж� ���Ӯ ���� ����Ӯ
	int i = 0;
	int j = 0;

	// �ж����Ƿ����
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] == board[i][j + 1]
				&& board[i][j] == board[i][j + 2]
				&& board[i][j] == board[i][j + 3]
				&& board[i][j] == board[i][j + 4]
				&& board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}

	// �ж����Ƿ����
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] == board[i + 1][j]
				&& board[i][j] == board[i + 2][j]
				&& board[i][j] == board[i + 3][j]
				&& board[i][j] == board[i + 4][j]
				&& board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}

	//�ж����Խ����Ƿ����
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] == board[i + 1][j + 1]
				&& board[i][j] == board[i + 2][j + 2]
				&& board[i][j] == board[i + 3][j + 3]
				&& board[i][j] == board[i + 4][j + 4]
				&& board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}

	// �жϴζԽ����Ƿ����
	for (i = 0; i < row; i++) {
		for (j = col - 1; j >= 0; j--) {
			if (board[i][j] == board[i + 1][j - 1]
				&& board[i][j] == board[i + 2][j - 2]
				&& board[i][j] == board[i + 3][j - 3]
				&& board[i][j] == board[i + 4][j - 4]
				&& board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}

	// IsFull �����ж��Ƿ�ƽ��
	if (IsFull(board, row, col)) {
		return 'Q';		// ƽ��
	}
	return ' ';		// ����
}