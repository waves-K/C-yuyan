#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// �˴����Ƕ�������ĳ��ȣ���ö���ɺ�
// ����δ���Գ��������չ��һ����Ҫ�޸������Ԫ�ظ���
// ֱ���޸ĺ궨�弴��
#define ROW 3
#define COL 3
// 1. �����ά�����ʾ����
char g_chess_board[ROW][COL];

void Init() {
	// �����̳�ʼ��
	for (int row = 0; row < ROW; ++row) {
		for (int col = 0; col < COL; ++col) {
			g_chess_board[row][col] = ' ';
		}
	}
}

void Print() {
	// ��ӡ����
	for (int row = 0; row < ROW; ++row) {
		printf("| %c | %c | %c |\n", g_chess_board[row][0],
			g_chess_board[row][1], g_chess_board[row][2]);
		if (row != ROW - 1) {
			// �������һ�л����һ���߽�
			printf("|---|---|---|\n");
		}
		
	}
}

void PlayerMove() {
	// �������
	// vsvim ��� => vim �༭ģʽ
	// vim ��ʷ����NB�Ĵ���༭��֮һ(Linux)
	while (1) {
		// 1. ��ʾ�������һ������
		printf("���������(��������row col)��");
		// 2. ��ȡ��ҵ�����
		int row = -1;
		int col = -1;
		scanf("%d %d", &row, &col);
		// 3. ����ҵ��������У�顣(��ԶҲ��Ҫ�����û�������)
		//	  ����������Ƿ�����ѭ����ʾ�û���������
		//		a��У�������Ƿ��Ǻ���Χ
		if (row < 0 || row >= ROW || col < 0 || col >= COL) {
			printf("���������Ƿ������������룡\n");
			continue;
		}
		//		b����ҵ�����������Ӧ��λ���Ƿ��Ѿ�����
		if (g_chess_board[row][col] != ' ') {
			// ��ǰλ���Ѿ���ռ���ˣ���������
			printf("��ǰλ���Ѿ����ӣ����������룡\n");
			continue;
		}
		// 4. ����������Ϸ����Ͱ������ϵĶ�Ӧλ������Ϊ 'x'
		g_chess_board[row][col] = 'x';
		break;
	}
}

void ComputerMove() {
	// ��������, �ѶȱȽϵͣ�������ȫ��Ե��
	// 1. �����������һ���У����������һ����
	// 2. �����ǰ���к����Ѿ���ռ�ã����ٲ���һ��
	printf("��������ӣ�\n");
	int row = 0;
	int col = 0;
	while (1) {
		row = rand() % ROW;	// [0, 2]
		col = rand() % COL;	// [0, 2]
		if (g_chess_board[row][col] == ' ') {
			g_chess_board[row][col] = 'o';
			break;
		}
	}
}

// ���˷��� 1���������� 0
int IsFull() {
	for (int row = 0; row < ROW; ++row) {
		for (int col = 0; col < COL; ++col) {
			if (g_chess_board[row][col] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}

// ʹ�� x ��ʾ��ң�ʹ�� o ��ʾ���ԡ�
// Լ�� CheckWinner ���������� x ��ʾ���ʤ��
// ������� o ��ʾ����ʤ��������һ�� q ��ʾ����
// ������� �ո� ��ʾʤ��δ��
char CheckWinner() {
	// �����Ϸ�Ƿ����
	// 1. �ȼ�����е����ǲ�������������һ��
	for (int row = 0; row < ROW; ++row) {
		if (g_chess_board[row][0] == g_chess_board[row][1]
			&& g_chess_board[row][0] == g_chess_board[row][2]
			&& g_chess_board[row][0] != ' ') {
			return g_chess_board[row][0];
		}
	}
	// 2. �ټ�����е����Ƿ�����һ��
	for (int col = 0; col < COL; ++col) {
		if (g_chess_board[0][col] == g_chess_board[1][col]
			&& g_chess_board[0][col] == g_chess_board[2][col]
			&& g_chess_board[0][col] != ' ') {
			return g_chess_board[0][col];
		}
	}
	// 3. ���Խ���
	if (g_chess_board[0][0] == g_chess_board[1][1]
		&& g_chess_board[0][0] == g_chess_board[2][2]
		&& g_chess_board[0][0] != ' ') {
		return g_chess_board[0][0];
	}
	if (g_chess_board[0][2] == g_chess_board[1][1]
		&& g_chess_board[0][2] == g_chess_board[2][0]
		&& g_chess_board[0][2] != ' ') {
		return g_chess_board[0][2];
	}
	// 4. ����Ƿ����
	if (IsFull()) {
		return 'q';
	}
	return ' ';
}



int main() {
	// 2. ��Ҫ�����̽��г�ʼ��(������԰������ʼ����ȫ�ǿո�)
	char winner = ' ';
	Init();
	while (1) {
		// 3. �ȴ�ӡһ������
		Print();
		// 4. ������ӣ�˳����һ����Ϸ�Ƿ����
		PlayerMove();
		winner = CheckWinner();
		if (winner != ' ') {
			// ��Ϸ����
			break;
		}
		// 5. �������ӣ�˳����һ����Ϸ�Ƿ����
		ComputerMove();
		winner = CheckWinner();
		if (winner != ' ') {
			// ��Ϸ����
			break;
		}
		// �ص�3��
	
	}
	if (winner == 'x') {
		printf("��һ�ʤ��\n");
	}
	else if (winner == 'o') {
		printf("���Ի�ʤ��\n");
	}
	else if (winner == 'q') {
		printf("���壡\n");
	}
	system("pause");
	return 0;
}