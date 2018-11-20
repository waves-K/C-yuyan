// ͷ�ļ���һ��ŵ��Ǻ��������� 

#pragma once
#define _CRT_SECURE_NO_WARNINGS

// ö��
#ifndef __GAME_H__
#define __GAME_H__

#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>

// define ����ĳ�����ʶ��
#define ROW 3
#define COL 3

// ����һ�� ѡ�� ����
// ö��Ĭ�ϴ� 0 ��ʼ������������
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