#include"game.h"

int Menu() {
	printf("1.0 ��ʼ��Ϸ\n");
	printf("2.0 �˳���Ϸ\n");
	printf("����������ѡ��");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void Game() {

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