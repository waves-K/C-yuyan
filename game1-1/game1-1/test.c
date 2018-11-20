// 测试模块，测试游戏模块是否可以正常运行

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include "game.h"	// 引自己的头文件使用 "game.h" 

// 打印菜单，完全是在测试的时候才需要，并不是游戏必须要的东西
// 游戏模块可能不需要它，所以把他放在测试函数中
void menu() {
	printf("********************************\n");
	printf("************  1.play  **********\n");
	printf("************  0.exit  **********\n");
	printf("********************************\n");
}

void game() {
	char win = 0;
	/*printf("hehe\n");*/
	// 1. 打印棋盘
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);		// 初始化棋盘函数 InitBoard
	DisplayBoard(board, ROW, COL);		// 打印棋盘

	// 开始游戏
	while (1) {
		// 1. 玩家走
		PlayerMove(board, ROW, COL);
//		Sleep(1000);	// 用于测试，目的是看出来效果
		DisplayBoard(board, ROW, COL);		// 打印棋盘

		// 检测输赢，由于需要判断输赢，所以函数必须返回一个值供我们进行判断
		// 可能出现的情况：
		//		1. 玩家赢  -> 'X'
		//		2. 电脑赢  -> 'O'
		//		3. 平局    -> 'Q'
		//		4. 继续    -> ' '
		win = CheckWin(board, ROW, COL);
		if (win != ' ') {
			break;
		}
		// 2 .电脑走		
		ComputerMove(board, ROW, COL);
//		Sleep(1000);	// 用于测试，目的是看出来效果
		DisplayBoard(board, ROW, COL);		// 打印棋盘
		win = CheckWin(board, ROW, COL);
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

// test 函数是专门用来测试的
void test() {
	int input = 0;
	// 调用 Srand 时先给一个 time 函数，time 函数的参数为 NULL 
	// 返回类型需要强制类型转换为 unsigned int 型
	srand((unsigned int)time(NULL));

	// 保证起码可以进行一次选择是否玩游戏，当然可以玩很多次
	do {
		menu();
		printf("请选择:");
		scanf("%d", &input);
		// 用户进行选择的时候有可能选择选择任何数字
		// 所以使用 switch case 语句进行主意的处理
		switch (input) {
		// 这里的 PLAY 和 EXIT 是在 game.h 中定义的
		// 所以在使用时需要引用头文件 
		case PLAY:	
			// 选择成功，玩游戏
			game();
			break;
		case EXIT:
			// 选择成功，退出游戏
			printf("退出游戏！\n");
			break;
			// 默认选项,用户可能选择错误，此时就提示用户并让用户重新选择
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