// 游戏实现模块
// 养成良好的习惯，当把代码的主逻辑写好后，先测试一下，看代码写的是否存在问题
// 不要着急把里边的实现一次性写完

#include "game.h"

// 棋盘初始化
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
	for (i = 0; i < row; i++) {
		int j = 0;
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		if (i < row - 1) {
			for (j = 0; j < col; j++) {
				printf("---", board[i][j]);
				if (j < col - 1) {
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

// 玩家走
void PlayerMove(char board[ROW][COL], int row, int col) {
//	printf("玩家走！\n");	// 用于测试
	int x = 0;
	int y = 0;
	printf("玩家走！");
	while (1) {
		printf("请输入坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = 'X';
				break;
			}
			else {
				printf("坐标被占用！请重新输入坐标：\n");
			}
		}
		else {
			printf("坐标非法！请重新输入坐标：\n");
		}
	}
}

// 电脑走
void ComputerMove(char board[ROW][COL], int row, int col) {
//	printf("电脑走！\n");	// 用于测试
	int x = 0;
	int y = 0;
	printf("电脑走！\n");
	// 坐标范围 x[0-2], y[0-2]
	// 使用 rand 函数生成随机数
	// rand 函数使用之前需要调用 Srand 
	// 它不能在这里边调用，在整个工程里边，只要去生成随机数
	// 那么这个随机数的生成只需要生成一次就够了，不需要频繁的设置随机数。
	// 频繁的设置随机数会导致你所设置的 随机数不够随机，永远都是相邻的那些数字
	// 所以在 test 函数中调用，因为 test 函数在整个 main 函数中只会调用一次
	while (1) {
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = 'O';
			break;
		}
	}
}

// 注意：一般情况下，我们不把 IsFull 这个函数放到头文件中
//		而是就放在这里，要注意这种设计。
//	IsFull 这个函数判断棋局是否平局，判断游戏是否满了
//  这个函数只是为了在判断输赢的时候用一下
//	所以这个函数就没必要暴漏出去，我们只是内部需要，
//  所以不需要把它声明到头文件中去，直接在这里定义

// 这个 IsFull 函数不需要暴漏在外边去，
// 只需要在这个源文件下面的 CheckWin 这个函数中使用
// 为了避免和别人冲突，定义这个函数的时候在它前面加上一个 static
// static 修饰函数，这个函数只能在当前这个源文件中使用
// 不能再其他源文件内部使用，这个时候外部链接属性变成了内部链接属性
// 这样的话就保护了 ISFull 这个函数，使别人"看不到"这个函数，
// 此时别人也就可以再自己的代码中定义一个 IsFull 这个函数
// 同时也保证了命名不被冲突，是一个不错的设计
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

// 判断输赢
char CheckWin(char board[ROW][COL], int row, int col) {
	int i = 0;
	// 判断行是否元素相同
	for (i = 0; i < row; i++) {
		if (board[i][0] == board[i][1]
			&& board[i][0] == board[i][2]
			&& board[i][0] != ' '){
			return board[i][0];
		}
	}
	// 判断列是否元素相同
	for (i = 0; i < col; i++) {
		if (board[0][i] == board[1][i]
			&& board[0][i] == board[2][i]
			&& board[0][i] != ' ') {
			return board[0][i];
		}
	}
	// 判断对角线元素是否相同
	if (board[0][0] == board[1][1]
		&& board[0][0] == board[2][2]
		&& board[0][0] != ' ') {
		return board[0][0];
	}
	if (board[2][0] == board[1][1]
		&& board[2][0] == board[0][2]
		&& board[2][0] != ' ') {
		return board[2][0];
	}
	// 判断棋盘是否满了，满了返回 'Q',没满返回 ' '
	if (IsFull(board, row, col) ) {
		return 'Q';		// 平局
	}
	return ' ';	  // 继续
}