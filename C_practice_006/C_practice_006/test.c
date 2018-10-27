//#define _CRT_SECURE_NO_WARNINGS
//1.完成猜数字游戏。
//		首先要生成一个随机数，开始游戏后这个随机数就不再改变

//	rand 函数生成随机数，他的功能是：返回一个 (0 - RAND_MAX)->(0 - 32767) 的一个随机整数，
//srand 设置随机数生成的一个起点，在调用 rand 函数之前设置，可以用 时间(time) 来作为随机数的起点
//time 的返回值是 time_t, time_t 其实是一个类型 -- 整数
//time 函数返回的是：当前程序执行这个 time 函数的时候的时间点 和 计算机的起始时间的一个差值
//计算机的起始时间：1970.01.01.00:00:00

//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//// 设置游戏菜单，开始/退出
//void menu()
//{
//	printf("*******************************\n");
//	printf("***********  1. play  *********\n");
//	printf("***********  0. exit  *********\n");
//	printf("*******************************\n");
//}
//
//// 设置游戏
//void game()
//{
//	//time_t  是 time 的返回值
//
//	//1. 生成随机数：rand 函数,这个函数可以生成随机数，他是一个库函数
//	int ret = 0;
//	int tmp = 0;
//	ret = rand()%100;	//生成一个 0 - 99 的一个随机数
//	
//	//ret = rend;
//	//printf("%d\n", ret);	//测试游戏是否可以玩
//
//	//2. 猜数字（循环）
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &tmp);
//		if (tmp > ret) {
//			printf("猜大了\n");
//		}
//		else if (tmp < ret) {
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//
//	//(unsigned int)time(NULL) 强制类型转换，把 time 这个函数的类型转换为 unsigned int 型
//	//NULL 是 time 函数的参数，time 函数是一个 指针 ，所以传一个 空指针
//
//	//在这里的作用是每玩一次游戏，随机数的起点改变一次
//	//如果放在 gime() 里，则随机数的起点一直不改变，失去的游戏的意义
// 	srand((unsigned int)time(NULL));	
//
//	//do…while 循环使程序至少执行一次
//
//	do
//	{
//		//选择 1 或 0， 来决定 玩游戏 还是 退出游戏
//		menu();	// menu 菜单函数
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			// 玩游戏
//			game();
//			//printf("玩游戏\n");	// 测试是否可以进入游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//}



//2.写代码可以在整型有序数组中查找想要的数字，找到了返回下标，找不到返回 - 1.（折半查找）
//
//方法一：遍历每个元素

//方法二：二分查找

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int left = 0;	//左下标
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;	//右下标
//	int mid = 0;	
//
//	while (left <= right) {
//		mid = (left + right) / 2;	//中间元素下标
//
//		if (arr[mid] == key) {
//			printf("找到了:%d\n",mid);
//			break;
//		}
//		else if (arr[mid] > key) {
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//	}
//
//	//如果所查找的元素不在给定数组中，即找不到
//	if (left > right) {
//		printf("找不到\n");
//		system("pause");
//		return -1;
//	}
//	system("pause");
//	return 0;
//}

//调试:F10 走一步，F11 进入函数内部

//用一个简单的加法函数说明 函数传参时的一些问题：

// 这里的 x 是 a 的一份临时拷贝，a 占几个字节，x 就占几个字节
//		如果这里传的是一个很大的数组，那么就太浪费空间了，数组在创建时一定会开辟一块空间
//	所以在数组传参时只是把这块空间的地址传过去。

//	数组传参不是把整个数组全部传过去，而仅仅是把数组首元素的地址传过去
//
//那么地址为什么时 4 个字节呢
//		首先我们知道我们的电脑有 32 位系统 和 64 位系统，
//	32位系统是由于这台电脑有 32 根地址线，每一根地址线都是由(0 或 1)信号组成，每一个(0 或 1)代表 1 bit
//所以 32 位系统就有 32 bit = 4 byte(字节)

//	64位系统是由于这台电脑有 64 根地址线，每一根地址线都是由(0 或 1)信号组成，每一个(0 或 1)代表 1 bit
//所以 64 位系统就有 64 bit = 8 byte

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Add(a, b);
//}

////函数法
//// binary_search  二分查找
//// binary:二进制    search:查找
//
////在这里要注意：
////	函数内部是不可以传数组的，只能传数组首元素的地址
//int binary_search(int arr[], int key, int sz)
//{
//	int left = 0;	//左下标
//
//	//这里如果用 int right = sizeof(arr)/sizeof(arr[0]) - 1  就会出错，原理见上注释
//
//	int right = sz - 1;	//右下标
//
//	while (left <= right) {
//		int mid = (left + right) / 2;	//中间元素下标
//
//		if (arr[mid] == key) {
//			return mid;		//找到了
//		}
//		else if (arr[mid] > key) {
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//	}
//	//如果所查找的元素不在给定数组中，即找不到
//		return -1;		//找不到
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);	//求数组元素个数
//
//	//函数传参 binary_search(arr,key)   括号内部的就是传入的参数
//	//函数返回值 int ret = binary_search()  ret 就是函数的返回值
//	int ret = binary_search(arr, key, sz);
//	if (ret == -1) {
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}



//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 
//密码错误，可以重新输入，最多输入三次。三次均错，则提示退出程序。

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char psw[10] = "";
//	int i = 0;
//
//	// for 循环控制登录次数
//	for (i = 0; i < 3; i++) {
//		printf("请输入密码:>");
//		scanf("%d", psw);
//
//		//strcmp 两个字符串比较
//		if (strcmp(psw, "123456") == 0) {
//			printf("登录成功！\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误！\n");
//		}
//	}
//	if (3 == i) {
//		printf("登陆失败！\n");
//	}
//	system("pause");
//	return 0;
//}



//4.编写一个程序，可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ch = 0;
	printf("请输入一个字符:\n");
	while ((ch = getcher()) != EOF) {
		if (ch >= 'a' && ch <= 'z') {
			printf("%c", ch - 32);
		}
		else if (ch >= 'A' && ch <= 'Z') {
			printf("%c", ch + 32);
		}
		else if (ch >= '0'&&ch <= '9')
			printf("输入有误，请重新输入\n");
		else
			;
	}
	printf("\n");
	system("pause");
	return 0;
}