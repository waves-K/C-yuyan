#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int Menu() {
	printf("1. ��ʼ��Ϸ\n");
	printf("0. �˳���Ϸ\n");
	printf("����������ѡ��");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

#define MINE_COUNT 10
#define ROW 10
#define COL 10

// ʹ�ö�ά��������ʾɨ�׵ĵ�ͼ���˴���Ҫʹ��������ά����
// ��һ����ά�����ʾ���׵�����
// �ڶ�����ά�����ʾ�û������ĵ�ͼ
// ɨ�׵ĵ�ͼ��С�� 9 * 9����������׼���������ά���鶨��� 11 * 11
// ��ʱ���ǵĵ�ͼ����Ч��Χ [1, ROW] �� [1, COL]

// ���� mine_map, ʹ�� '0',��ʾ���ǵ��ף�ʹ�� '1' ��ʾ�ǵ���
char mine_map[ROW + 2][COL + 2];

// show_map ��ʹ�� '*'����ʾδ�򿪵ķ��飬���ڴ򿪵ķ��飬��ʹ�þ������������ʾ
char show_map[ROW + 2][COL + 2];

void Init(char mine_map[ROW + 2][COL + 2], char show_map[ROW + 2][COL + 2]) {
	// 1. ��������г�ʼ��
	// ���� mine_map, �Ȱ����е�Ԫ�ض����ó� '0'
	memset(mine_map, '0', (ROW + 2) * (COL + 2));
	// ���� show_map, �Ȱ����е�Ԫ�ض����ó� '*'
	memset(show_map, '*', (ROW + 2) * (COL + 2));

	// 2. ����Ĳ�������
	srand(time(0));
	int mine_count = MINE_COUNT;
	while (mine_count > 0) {
		// �����ѭ�����漴���õ��ף�ÿ���������һ������ --mine_count
		// [1, ROW]
		int row = rand() % 9 + 1;
		int col = rand() % 9 + 1;
		if (mine_map[row][col] == '0') {
			mine_map[row][col] = '1';
			--mine_count;
		}
	}
}

void DisplayMap(char map[ROW + 2][COL + 2]) {
	printf("    ");
	// ��ӡ��һ�е����ݣ��ĸ��ո� + ÿһ�е�����
	for (int col = 1; col <= COL; ++col) {
		printf("%d ", col);
	}
	printf("\n");
	// ��ӡ����ĵ�ͼ
	// ��ӡ�ڶ��У���ͼ���ϱ߿�
	for (int col = 1; col <= COL; ++col) {
		printf("---");
	}
	printf("\n");
	// ���д�ӡ��ͼ�еľ�������
	for (int row = 1; row <= ROW; ++row) {
		// �ȴ�ӡ���к�
		// 1 => 01  2 => 02  10 => 10
		printf("%02d| ", row);
		for (int col = 1; col <= COL; ++col) {
			printf("%c ", map[row][col]);
		}
		printf("\n");
	}
}

// ��Ҫͳ�� row, col λ�õ�Ԫ����Χ�м����ף����Ұѽ�����µ�
// show_map ��
void UpdateShowMap(char show_map[ROW + 2][COL + 2],
	char mine_map[ROW + 2][COL + 2], int row, int col) {
	int mine_count = 0;
	mine_count = (mine_map[row - 1][col - 1] - '0')
		+ (mine_map[row - 1][col] - '0')
		+ (mine_map[row - 1][col + 1] - '0')
		+ (mine_map[row][col - 1] - '0')
		+ (mine_map[row][col + 1] - '0')
		+ (mine_map[row + 1][col - 1] - '0')
		+ (mine_map[row + 1][col] - '0')
		+ (mine_map[row + 1][col + 1] - '0');
	show_map[row][col] = '0' + mine_count;

	//if (mine_map[row - 1][col - 1] == '1') {
	//	++mine_count;
	//}

	//row - 1, col - 1;
	//row - 1, col;
	//row - 1, col + 1;
	//row, col - 1;
	//row, col;	// ��ǰλ�ñ���
	//row, col + 1;
	//row + 1; col - 1;
	//row + 1, col;
	//row + 1, col + 1;
}

void Game() {
	// 1. ��ʼ����ͼ(mine_map, show_map)����������
	int not_mine_count = 0;
	Init(mine_map, show_map);
	// 2. �ȴ�ӡ show_map.
	DisplayMap(show_map);
	while (1) {
		// 3. ��ʾ�û�������������[1, ROW][1, COL]
		int row = 0;
		int col = 0;
		printf("������Ҫ����ķ�������(row, col):");
		scanf("%d %d", &row, &col);
		// 4. ���û�����ĺϷ��Խ����ж��������������ʾ�û���������
		if (row <= 0 || row > ROW || col <= 0 || col > COL) {
			printf("�������벻�Ϸ������������룡\n");
			continue;
		}
		// 5. �ж���ҵ�ǰ�Ƿ���ף�������ף���Ϸ���������Ҵ�ӡ����
		if (mine_map[row][col] == '1') {
			printf("��Ϸ������\n");
			DisplayMap(mine_map);
			break;
		}
		// 6. ���û���ף��ж�һ������Ƿ�ʤ��(ʤ���������Ѿ������ķ����� �ﵽ�� ��ͼ�������� - ���׵ĸ���)����ʱ����Ϸʤ��
		++not_mine_count;
		if (not_mine_count == ROW * COL - MINE_COUNT) {
			printf("ɨ�׳ɹ���\n");
			DisplayMap(mine_map);
			break;
		}
		// 7. �����Ϸû��ʤ��������Ҫͳ��һ�µ�ǰλ����Χ�м����ף���ӡ show_map �ص� 3.
		UpdateShowMap(show_map,mine_map,row,col);
		DisplayMap(show_map);
	}
		
}

void Start() {
	while (1) {
		int choice = Menu();
		if (choice == 0) {
			printf("�˳���Ϸ��\n");
			break;
		}
		Game();
	}
}

int main()
{
	Start();
	system("pause");
	return 0;
}