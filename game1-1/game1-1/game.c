// ��Ϸʵ��ģ��
// �������õ�ϰ�ߣ����Ѵ�������߼�д�ú��Ȳ���һ�£�������д���Ƿ��������
// ��Ҫ�ż�����ߵ�ʵ��һ����д��

#include "game.h"

// ���̳�ʼ��
void InitBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}

// ��ӡ����
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

// �����
void PlayerMove(char board[ROW][COL], int row, int col) {
//	printf("����ߣ�\n");	// ���ڲ���
	int x = 0;
	int y = 0;
	printf("����ߣ�");
	while (1) {
		printf("���������꣺");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = 'X';
				break;
			}
			else {
				printf("���걻ռ�ã��������������꣺\n");
			}
		}
		else {
			printf("����Ƿ����������������꣺\n");
		}
	}
}

// ������
void ComputerMove(char board[ROW][COL], int row, int col) {
//	printf("�����ߣ�\n");	// ���ڲ���
	int x = 0;
	int y = 0;
	printf("�����ߣ�\n");
	// ���귶Χ x[0-2], y[0-2]
	// ʹ�� rand �������������
	// rand ����ʹ��֮ǰ��Ҫ���� Srand 
	// ������������ߵ��ã�������������ߣ�ֻҪȥ���������
	// ��ô��������������ֻ��Ҫ����һ�ξ͹��ˣ�����ҪƵ���������������
	// Ƶ��������������ᵼ���������õ� ����������������Զ�������ڵ���Щ����
	// ������ test �����е��ã���Ϊ test ���������� main ������ֻ�����һ��
	while (1) {
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = 'O';
			break;
		}
	}
}

// ע�⣺һ������£����ǲ��� IsFull ��������ŵ�ͷ�ļ���
//		���Ǿͷ������Ҫע��������ơ�
//	IsFull ��������ж�����Ƿ�ƽ�֣��ж���Ϸ�Ƿ�����
//  �������ֻ��Ϊ�����ж���Ӯ��ʱ����һ��
//	�������������û��Ҫ��©��ȥ������ֻ���ڲ���Ҫ��
//  ���Բ���Ҫ����������ͷ�ļ���ȥ��ֱ�������ﶨ��

// ��� IsFull ��������Ҫ��©�����ȥ��
// ֻ��Ҫ�����Դ�ļ������ CheckWin ���������ʹ��
// Ϊ�˱���ͱ��˳�ͻ���������������ʱ������ǰ�����һ�� static
// static ���κ������������ֻ���ڵ�ǰ���Դ�ļ���ʹ��
// ����������Դ�ļ��ڲ�ʹ�ã����ʱ���ⲿ�������Ա�����ڲ���������
// �����Ļ��ͱ����� ISFull ���������ʹ����"������"���������
// ��ʱ����Ҳ�Ϳ������Լ��Ĵ����ж���һ�� IsFull �������
// ͬʱҲ��֤������������ͻ����һ����������
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

// �ж���Ӯ
char CheckWin(char board[ROW][COL], int row, int col) {
	int i = 0;
	// �ж����Ƿ�Ԫ����ͬ
	for (i = 0; i < row; i++) {
		if (board[i][0] == board[i][1]
			&& board[i][0] == board[i][2]
			&& board[i][0] != ' '){
			return board[i][0];
		}
	}
	// �ж����Ƿ�Ԫ����ͬ
	for (i = 0; i < col; i++) {
		if (board[0][i] == board[1][i]
			&& board[0][i] == board[2][i]
			&& board[0][i] != ' ') {
			return board[0][i];
		}
	}
	// �ж϶Խ���Ԫ���Ƿ���ͬ
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
	// �ж������Ƿ����ˣ����˷��� 'Q',û������ ' '
	if (IsFull(board, row, col) ) {
		return 'Q';		// ƽ��
	}
	return ' ';	  // ����
}