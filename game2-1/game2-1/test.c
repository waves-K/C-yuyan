#include"game.h"

int Menu() {
	printf("1.0 开始游戏\n");
	printf("2.0 退出游戏\n");
	printf("请输入您的选择：");
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
			printf("退出游戏！\n");
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