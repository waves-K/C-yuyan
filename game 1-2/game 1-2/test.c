#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"game.h"	


// ���ǲ�����Ҫ����Ϸ�˵�����
void menu() {
	printf("**********************\n");
	printf("****** 1. play *******\n");
	printf("****** 0. exit *******\n");
	printf("**********************\n");
}

void game() {
	char win = 0;

	// 1. ��ӡ������ board�����������е�����ȫ����ʼ��Ϊ �ո�
	char board[ROW][COL] = { 0 };	// ����һ����ά���飬��ʾ����
	InitBoard(board, ROW, COL);		// ��ʼ�����̣�������Ϸ�ĳ�ʼ��ģ��
	DisplayBoard(board, ROW, COL);	// ��ӡ����

	// 2. ����Ϸ
	while (1) {
		// �����
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		win = CheckWin(board,ROW,COL);	// �ж���Ӯ
		if (win != ' ') {
			break;
		}

		// ������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		win = CheckWin(board, ROW, COL);	// �ж���Ӯ
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

// 1. ���Ӯ  -> 'X'
// 2. ����Ӯ  -> 'O'
// 3. ƽ��    -> 'Q'
// 4. ����    -> ' '

void test() {
	int input = 0;

	// �� game.c ģ��ʹ�� rand ���������������ʱ ��Ҫ���� srand 
	// ��ôΪʲô��ֱ���� game �����е��ã���Ҫ�� test �����е����أ�
	// ԭ�����ڣ������ game �����е��ã���ôÿ����һ�� game ���� srand �����ͻ���ű�����һ��
	// ����һ����Ϸ�� game ������Ҫ�����ö�Σ���ô srand ����Ҳ�ᱻ���ö��
	// srand ����ÿ������һ�� rand �����ͻ������Ե�ǰʱ�� - 1970.7.7 00��00��01 ���������
	// �����ͻᵼ�� rand �������ɵ��漴�ǲ������
	// ������� test �����е��� srand ����������һ����Ϸֻ�����һ�� test ����
	// ���� srand ����Ҳֻ�����һ�Σ������ͺܺõĽ��������������������

	srand((unsigned int)time(NULL));
	// ʹ��do����whileѭ�����ﵽ������һ����Ϸ��Ŀ��
	do {
		menu();		// ��ӡ�˵�,��ӡ�˵�ֻ�ǲ��Ե�ʱ����Ҫ����������Ϸ�������Ķ���
		printf("��ѡ��>");		// ��ʾ���ѡ�� ��Ϸ ���� �˳���Ϸ
		scanf("%d", &input);

		// ������ҵ�ѡ����Ϣ���������ж�
		// ѡ�� 1 ������Ϸ
		// ѡ�� 0 ���˳���Ϸ
		switch (input) {
		// �����ѡ��ʹ�� PLAY �� EXIT ��Ŀ�������Ӵ���Ŀɶ���
		// ���ʹ�� 1 �� 0��֮��������������ѡ�񣬵�ѡ�������Ƚϴ�ʱ
		// �������ѡ������ݶ�Ӧ�Ƚ����ѵ����⣬����Ҵ�������
		case PLAY:
			game();
			break;
		case EXIT:
			printf("�˳���Ϸ��\n");
			break;
		// �ж�����Ƿ�ѡ��Ϸ�������Ƿ�����ʾ�������ѡ��
		// ����Ҫע�����Ϊʲô do...while ��ѭ�������� input
		// ��Ϊ������ѡ�� 1����ô��ʼ��Ϸ��ѡ�� 0�����˳���Ϸ
		// ����������ѡ��֮�⣬������ѡ���ǷǷ��ģ�������Щ���еķǷ�ѡ���Ƿ����
		// ���� input �Ϳ�����Ϊ do...while ѭ�����ж�����
		default:		// Ĭ��ѡ��
			printf("ѡ�����������ѡ��\n");	
			break;
		}
	} while (input);
}

int main()
{
	test();		// ר�����ڲ���
	system("pause");
	return 0;
}