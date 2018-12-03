#ifndef __GAME_H__
#define __GAME_H__

#define _CRT_SECURE_NO_WARNINGS

#define ROW 3
#define COL 3


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

enum OPYION {
	EXIT,
	PLAY
};

enum ED {
	EASY = 1,
	DIFFICULTY
};


void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerEasyMove(char board[ROW][COL], int row, int col);
int ComputerDifficultyMove(char board[ROW][COL], int row, int col);
char CheckWin(char board[ROW][COL], int row, int col);


#endif // __GAME_H__