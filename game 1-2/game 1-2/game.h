#define _CRT_SECURE_NO_WARNINGS

// ö��
#ifndef __GAME_H__
#define __GAME_H__

#include<stdio.h>
#include<time.h>	// ���� time ������Ҫ�����ͷ�ļ�
#include<stdlib.h>	// ���� srand ������Ҫ�����ͷ�ļ�

// define ����ĳ�����ʶ��
#define ROW 15
#define COL 15

// ����һ�� ѡ��(OPTION) ����
enum OPTION {
	// ö�ٳ���
	// ö���Ǵ� 0 ��ʼһ���� 1 ��
	EXIT,
	PLAY
};

// ��������
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char CheckWin(char board[ROW][COL], int row, int col);

#endif // __GAME_H__