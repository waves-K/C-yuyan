#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf(" %c ",board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");
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
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] == board[i][j + 1]
				&& board[i][j] == board[i][j + 2]
				&& board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] == board[i + 1][j]
				&& board[i][j] == board[i + 2][j]
				&& board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] == board[i + 1][j + 1]
				&& board[i][j] == board[i + 2][j + 2]
				&& board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][col - j - 1] == board[i + 1][col - j - 2]
				&& board[i][col - j - 1] == board[i][col - j - 3]
				&& board[i][col - j - 1] != ' ') {
				return board[i][col - j - 1];
			}
		}
	}
	if (IsFull(board, ROW, COL)) {
		return 'Q';
	}
	return ' ';
}

void PlayerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("玩家走！\n");
	while (1) {
		printf("请您输入坐标:>");
		scanf("%d%d", &x, &y);
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col)) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = 'X';
				break;
			}
			else {
				printf("该位置已经有子，请您重新落子！\n");
			}
		}
		else {
			printf("坐标非法，请您重新输入坐标！\n");
		}
	}
}

void ComputerEasyMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("电脑走！\n");
	while (1) {
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = 'O';
			break;
		}
	}
}

int ComputerDifficultyMove(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	printf("电脑走！\n");
	for (i = 0; i < row; i++) {
		if ((board[i][0] == board[i][1]
			&& board[i][2] == ' ')
			&& board[i][0] != ' ') {
			board[i][2] = 'O';
			return 1;
		}
		if ((board[i][1] == board[i][2]
			&& board[i][0] == ' ')
			&& board[i][1] != ' ') {
			board[i][0] = 'O';
			return 1;
		}
		if ((board[i][0] == board[i][2]
			&& board[i][1] == ' ')
			&& board[i][0] != ' ') {
			board[i][1] = 'O';
			return 1;
		}
	}
	for (j = 0; j < col; j++) {
		if ((board[0][j] == board[1][j]
			&& board[2][j] == ' ')
			&& board[0][j] != ' ') {
			board[2][j] = 'O';
			return 1;
		}
		if ((board[1][j] == board[2][j]
			&& board[0][j] == ' ')
			&& board[1][j] != ' ') {
			board[0][j] = 'O';
			return 1;
		}
		if ((board[0][j] == board[2][j]
			&& board[1][j] == ' ')
			&& board[0][j] != ' ') {
			board[1][j] = 'O';
			return 1;
		}
	}
	if ((board[0][0] == board[1][1]
		&& board[3][3] == ' ')
		&& board[0][0] != ' ') {
		board[3][3] = 'O';
		return 1;
	}
	else if ((board[2][2] == board[1][1]
		&& board[0][0] == ' ')
		&& board[1][1] != ' ') {
		board[0][0] = 'O';
		return 1;
	}
	else if ((board[0][0] == board[2][2]
		&& board[1][1] == ' ')
		&& board[0][0] != ' ') {
		board[1][1] = 'O';
		return 1;
	}
	else if ((board[0][2] == board[1][1]
		&& board[2][0] == ' ')
		&& board[0][2] != ' ') {
		board[2][0] = 'O';
		return 1;
	}
	else if ((board[1][1] == board[2][0]
		&& board[0][2] == ' ')
		&& board[1][1] != ' ') {
		board[0][2] = 'O';
		return 1;
	}
	else {
		board[1][1] = 'O';
		return 1;
	}
	return 0;
} 

