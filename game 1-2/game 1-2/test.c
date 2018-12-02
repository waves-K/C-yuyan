#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"game.h"	


// 这是测试需要的游戏菜单部分
void menu() {
	printf("**********************\n");
	printf("****** 1. play *******\n");
	printf("****** 0. exit *******\n");
	printf("**********************\n");
}

void game() {
	char win = 0;

	// 1. 打印空棋盘 board，即把数组中的内容全部初始化为 空格
	char board[ROW][COL] = { 0 };	// 创建一个二维数组，表示棋盘
	InitBoard(board, ROW, COL);		// 初始化棋盘，属于游戏的初始化模块
	DisplayBoard(board, ROW, COL);	// 打印棋盘

	// 2. 玩游戏
	while (1) {
		// 玩家走
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		win = CheckWin(board,ROW,COL);	// 判断输赢
		if (win != ' ') {
			break;
		}

		// 电脑走
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		win = CheckWin(board, ROW, COL);	// 判断输赢
		if (win != ' ') {
			break;
		}
	}
	if (win == 'X') {
		printf("玩家赢！\n");
	}
	else if (win == 'O') {
		printf("电脑赢！\n");
	}
	else {
		printf("平局！\n");
	}
}

// 1. 玩家赢  -> 'X'
// 2. 电脑赢  -> 'O'
// 3. 平局    -> 'Q'
// 4. 继续    -> ' '

void test() {
	int input = 0;

	// 在 game.c 模块使用 rand 函数来生成随机数时 需要调用 srand 
	// 那么为什么不直接在 game 函数中调用，而要在 test 函数中调用呢？
	// 原因在于，如果在 game 函数中调用，那么每调用一次 game 函数 srand 函数就会跟着被调用一次
	// 而在一局游戏中 game 函数需要被调用多次，那么 srand 函数也会被调用多次
	// srand 函数每被调用一次 rand 函数就会重新以当前时间 - 1970.7.7 00：00：01 生成随机数
	// 这样就会导致 rand 函数生成的随即是不够随机
	// 而如果在 test 函数中调用 srand 函数，由于一局游戏只会调用一次 test 函数
	// 所以 srand 函数也只会调用一次，这样就很好的解决了随机数不随机的问题

	srand((unsigned int)time(NULL));
	// 使用do……while循环，达到至少玩一次游戏的目的
	do {
		menu();		// 打印菜单,打印菜单只是测试的时候需要，并不是游戏本身必须的东西
		printf("请选择：>");		// 提示玩家选择 游戏 或者 退出游戏
		scanf("%d", &input);

		// 接收玩家的选择信息，并作出判断
		// 选择 1 ，玩游戏
		// 选择 0 ，退出游戏
		switch (input) {
		// 这里的选项使用 PLAY 和 EXIT 的目的是增加代码的可读性
		// 如果使用 1 和 0，之类的数字来让玩家选择，当选项数量比较大时
		// 就造成了选项和内容对应比较困难的问题，给玩家带来不便
		case PLAY:
			game();
			break;
		case EXIT:
			printf("退出游戏！\n");
			break;
		// 判断玩家是否选择合法，如果非法，提示玩家重新选择
		// 这里要注意理解为什么 do...while 的循环条件是 input
		// 因为如果玩家选择 1，那么开始游戏；选择 0，则退出游戏
		// 除了这两种选择之外，其他的选择都是非法的，并且这些所有的非法选择都是非零的
		// 所以 input 就可以作为 do...while 循环的判断条件
		default:		// 默认选项
			printf("选择错误，请重新选择！\n");	
			break;
		}
	} while (input);
}

int main()
{
	test();		// 专门用于测试
	system("pause");
	return 0;
}