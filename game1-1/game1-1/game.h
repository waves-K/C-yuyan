// 头文件中一般放的是函数的声明 

#pragma once
#define _CRT_SECURE_NO_WARNINGS

// 枚举
#ifndef __GAME_H__
#define __GAME_H__

#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>

// define 定义的常量标识符
#define ROW 3
#define COL 3

// 定义一个 选项 类型
// 枚举默认从 0 开始向下依次增长
enum OPTION{
	EXIT,
	PLAY
};

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char CheckWin(char board[ROW][COL], int row, int col);

#endif //__GAME_H__