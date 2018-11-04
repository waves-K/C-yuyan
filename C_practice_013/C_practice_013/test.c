#define _CRT_SECURE_NO_WARNINGS
//完成猜数字游戏。
//		首先要生成一个随机数，开始游戏后这个随机数就不再改变
//
//	rand 函数生成随机数，他的功能是：返回一个 (0 - RAND_MAX)->(0 - 32767) 的一个随机整数，
//srand 设置随机数生成的一个起点，在调用 rand 函数之前设置，可以用 时间(time) 来作为随机数的起点
//time 的返回值是 time_t, time_t 其实是一个类型 -- 整数
//time 函数返回的是：当前程序执行这个 time 函数的时候的时间点 和 计算机的起始时间的一个差值
//计算机的起始时间：1970.01.01.00:00:00

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

// 设置游戏菜单，开始(1)/退出(0)
void menu()
{
	printf("*******************************\n");
	printf("***********  1. play  *********\n");
	printf("***********  0. exit  *********\n");
	printf("*******************************\n");
}

// 设置游戏
void game()
{
	//time_t  是 time 的返回值

	//1. 生成随机数：rand 函数,这个函数可以生成随机数，他是一个库函数
	int ret = 0;
	int tmp = 0;
	ret = rand()%100;	// 生成一个 0 - 99 的随机数
	
	//ret = rend;
	//printf("%d\n", ret);	// 测试游戏是否可以玩

	//2. 猜数字（循环）
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &tmp);
		if (tmp > ret) 
		{
			printf("猜大了\n");
		}
		else if (tmp < ret) 
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}

int main()
{
	int input = 0;

	//(unsigned int)time(NULL) 强制类型转换，把 time 这个函数的类型转换为 unsigned int 型
	//NULL 是 time 函数的参数，time 函数是一个 指针 ，所以传一个 空指针

	//在这里的作用是每玩一次游戏，随机数的起点改变一次
	//如果放在 gime() 里，则随机数的起点一直不改变，失去的游戏的意义
 	srand((unsigned int)time(NULL));	

	//do…while 循环使程序至少执行一次

	do
	{
		//选择 1 或 0， 来决定 玩游戏 还是 退出游戏
		menu();	// menu 菜单函数
		printf("请选择:>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			// 玩游戏
			game();
			//printf("玩游戏\n");	// 测试是否可以进入游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}

	} while (input);
}