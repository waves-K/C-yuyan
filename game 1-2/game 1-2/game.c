#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

// 初始化棋盘
// 温馨提示：
//	   对于某一些函数参数的依赖，尽量以函数参数的形式对它进行依赖
void InitBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}

// 打印棋盘
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

// 玩家走
// 当玩家输入坐标后一定要判断玩家输入是否合法，如果不合法，提示玩家重新输入
// 不合法的几种情况：
//	   1. 输入的坐标不在棋盘范围内
//	   2. 输入的坐标在棋盘范围内，但是此位置已经有子
void PlayerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("玩家走！\n");
	while (1) {
		printf("请您输入坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {		// 判断坐标合法
			if (board[x - 1][y - 1] == ' ') {		// 判断玩家输入的坐标位置无子
				board[x - 1][y - 1] = 'X';			// 输入合法，落子 'X'
				break;
			}
			else {
				printf("坐标被占用！\n");
			}
		}
		else {
			printf("坐标非法！\n");
		}
	}
}

// 电脑走
void ComputerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("电脑走！\n");

	while (1) {
		// 使用 rand 函数生成随机数
		// 使用 rand 函数时需要调用 srand
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

// IsFull 这个函数只是为了在判断 是否平局的时候用一下，所以就没必要暴漏出去
// 所以就不需要把它声明到头文件中去，只是在内部定义
// 这里定义 IsFull 这个函数只是为了供 CheckWin 这个函数使用
// 为了避免和别的函数冲突，所以定义时 加上一个 static 进行修饰
// static 修饰的函数只能在当前源文件内使用，不能再其他源文件内部使用
// 此时外部链接属性就变成了内部链接属性
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
	// 判断 玩家赢 还是 电脑赢
	int i = 0;
	int j = 0;

	// 判断行是否成棋
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

	// 判断列是否成棋
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

	//判断主对角线是否成棋
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

	// 判断次对角线是否成棋
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

	// IsFull 函数判断是否平局
	if (IsFull(board, row, col)) {
		return 'Q';		// 平局
	}
	return ' ';		// 继续
}