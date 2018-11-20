// ����ģ�飬������Ϸģ���Ƿ������������

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include "game.h"	// ���Լ���ͷ�ļ�ʹ�� "game.h" 

// ��ӡ�˵�����ȫ���ڲ��Ե�ʱ�����Ҫ����������Ϸ����Ҫ�Ķ���
// ��Ϸģ����ܲ���Ҫ�������԰������ڲ��Ժ�����
void menu() {
	printf("********************************\n");
	printf("************  1.play  **********\n");
	printf("************  0.exit  **********\n");
	printf("********************************\n");
}

void game() {
	char win = 0;
	/*printf("hehe\n");*/
	// 1. ��ӡ����
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);		// ��ʼ�����̺��� InitBoard
	DisplayBoard(board, ROW, COL);		// ��ӡ����

	// ��ʼ��Ϸ
	while (1) {
		// 1. �����
		PlayerMove(board, ROW, COL);
//		Sleep(1000);	// ���ڲ��ԣ�Ŀ���ǿ�����Ч��
		DisplayBoard(board, ROW, COL);		// ��ӡ����

		// �����Ӯ��������Ҫ�ж���Ӯ�����Ժ������뷵��һ��ֵ�����ǽ����ж�
		// ���ܳ��ֵ������
		//		1. ���Ӯ  -> 'X'
		//		2. ����Ӯ  -> 'O'
		//		3. ƽ��    -> 'Q'
		//		4. ����    -> ' '
		win = CheckWin(board, ROW, COL);
		if (win != ' ') {
			break;
		}
		// 2 .������		
		ComputerMove(board, ROW, COL);
//		Sleep(1000);	// ���ڲ��ԣ�Ŀ���ǿ�����Ч��
		DisplayBoard(board, ROW, COL);		// ��ӡ����
		win = CheckWin(board, ROW, COL);
		if (win != ' ') {
			break;
		}
	}
	if (win == 'X') {
		printf("���Ӯ��\n");
	}
	else if (win == 'O') {
		printf("����Ӯ��\n");
	}
	else {
		printf("ƽ�֣�\n");
	}
}

// test ������ר���������Ե�
void test() {
	int input = 0;
	// ���� Srand ʱ�ȸ�һ�� time ������time �����Ĳ���Ϊ NULL 
	// ����������Ҫǿ������ת��Ϊ unsigned int ��
	srand((unsigned int)time(NULL));

	// ��֤������Խ���һ��ѡ���Ƿ�����Ϸ����Ȼ������ܶ��
	do {
		menu();
		printf("��ѡ��:");
		scanf("%d", &input);
		// �û�����ѡ���ʱ���п���ѡ��ѡ���κ�����
		// ����ʹ�� switch case ����������Ĵ���
		switch (input) {
		// ����� PLAY �� EXIT ���� game.h �ж����
		// ������ʹ��ʱ��Ҫ����ͷ�ļ� 
		case PLAY:	
			// ѡ��ɹ�������Ϸ
			game();
			break;
		case EXIT:
			// ѡ��ɹ����˳���Ϸ
			printf("�˳���Ϸ��\n");
			break;
			// Ĭ��ѡ��,�û�����ѡ����󣬴�ʱ����ʾ�û������û�����ѡ��
		default:
			printf("ѡ�����������ѡ��\n");
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