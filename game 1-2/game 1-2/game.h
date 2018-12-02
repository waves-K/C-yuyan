#define _CRT_SECURE_NO_WARNINGS

// 枚举
#ifndef __GAME_H__
#define __GAME_H__

#include<stdio.h>
#include<time.h>	// 调用 time 函数需要引入的头文件
#include<stdlib.h>	// 调用 srand 函数需要引入的头文件

// define 定义的常量标识符
#define ROW 15
#define COL 15

// 定义一个 选项(OPTION) 类型
enum OPTION {
	// 枚举常量
	// 枚举是从 0 开始一次增 1 的
	EXIT,
	PLAY
};

// 函数声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char CheckWin(char board[ROW][COL], int row, int col);

#endif // __GAME_H__