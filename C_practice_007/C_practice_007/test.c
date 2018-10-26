//while循环

//	当一个事情需要重复很多次的时候我们就可以使用 while 循环来实现

//语法结构：
//	while(表达式)
//		{循环语句;}

//语句的执行流程：
//		首先判断表达式的 真假 ；
//		如果为 真 ，就向下执行循环语句；
//		如果为 假 ，就跳出循环。

//eg:在屏幕上打印 1-10 的数字
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10) {
//		printf("%d ", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}

//		以上我们了解到了怎样使用 while 语句来重复某件事，
//	那么，当 while 语句中的 表达式 为真，但我们需要跳出循环时
//	我们就需要用到 break 或 continue 来帮助我们来完成我们的需求
//	接下来我们就说说 break 和 continue 的使用效果以及两者的区别
//	
// break 介绍
//		在 while 循环中只要遇到 break, 就停止后面所有的循环，一直到循环终止。
//	即：break 时用来永久终止 while 循环的。
//eg:
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10) {
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	system("pause");
//	return 0;
//}
////输出结果： 1 2 3 4 


// continue 介绍
//		在 while 循环中 continue 的作用是：
//		终止本次循环，也就是说本次循环中 continue 后边的代码不会再执行，
//	而是直接跳转到 while 语句中的 判断部分，进行下一次循环入口的判断。

//eg1:
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10) {
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
//输出结果： 2 3 4 6 7 8 9 10

////eg2:
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//
//	//这里表达式判断获取的字符是不是 文件结束标志 'crtl + z'
//	//如果不是，就输出这个字符
//	// EOF = end of file(文件结束标志)
//	while ((ch = getchar()) != EOF) {
//		putchar(ch);
//	}
//	system("pause");
//	return 0;
//}

////eg3:
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF) {
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//
//		// fflush(stdin) 刷新输入缓存区
//		fflush(stdin);
//	}
//	system("pause");
//	return 0;
//}




//???????


////eg4: getchar 深层理解
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char password[10] = {0};
	int ch = 0;
	printf("请输入密码：>");
	scanf("%s", password);
	while (strcmp(ch = getchar(),"123456" ) != 0); {
		;
	}
	printf("请确认(Y/N)：>");
	ch = getchar();
	if (ch == "Y") {
		printf("OK!\n");
	}
	else if (ch == "N") {
		printf("NO\n");
	}
	system("pause");
	return 0;
}



//演示多个字符从两端移动，向中间汇聚
//思路：
//		先确定需要创建两个字符串数组，一个用来存储需要打印的字符串，一个用来实现目标
//	然后用数组元素交换下标的方式进行打印，这里学会利用数组的 left 和 right


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit ...";
//	char arr2[] = "##################";
//	int left = 0;
//
//	//int right = sizeof(arr1)/sizeof(arr1[0]) - 2
//	// sizeof 求数组元素的字节数，包括 \n 和 \0, 所以最终需要 减 2
//
//	// strlen 求字符串长度，包含 \n ,所以 - 1 就是减去 \n 
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//
//	// while 循环实现
//	//while (left <= right) {
//
//	// Sleep(1000) 睡眠 1000 毫; 
//	// sleep 是 Windows 的函数，所以要引用#include<windows.h>
//	//	Sleep(1000);
//	//	arr2[left] = arr1[left];
//	//	arr2[right] = arr1[right];
//	//	left++;
//	//	right--;
//	//	printf("%s\n", arr2);
//	//}
//
//	// for 循环实现
//	for (left = 0, right = strlen(arr1) - 1; left <= right; left++, right--) {
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//	}
//
//	system("pause");
//	return 0;
//}


//2. 编写代码实现，模拟用户登录情景，并且只能登陆三次。
//(只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则退出程序)

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char psw[10] = "";
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 3; i++) {
//		printf("请输入密码：>");
//		scanf("%s", psw);
//
//		// strcmp 比较两个字符串
//		if (strcmp(psw, "password") == 0)
//			break;
//	}
//	if (3 == i) {
//		printf("登陆失败！\n");
//	}
//	else
//	{
//		printf("登陆成功！\n");
//	}
//	system("pause");
//	return 0;
//}


//计算 n 的阶乘

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	printf("请给定 n 的值：\nn = ");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		ret = ret * i;
//	}
//	printf("n! = %d\n", ret);
//	system("pause");
//	return 0;
//}


//计算 1！+ 2！+ … + n!

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	printf("请给定 n 的值：\nn = ");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}


//在一个有序数组中查找具体的某个数字 n 。
//折半查找法：

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 7;
//	int mid = 0;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		if (arr[mid] > key) {
//			right = mid - 1;
//		}
//		else if (arr[mid] < key) {
//			left = mid + 1;
//		}
//		else
//			break;
//	}
//	if (left <= right)
//		printf("找到了，下标是%d\n", mid);
//	else
//		printf("找不到\n");
//	system("pause");
//	return 0;
//}




//?????????


//如果实现一个二分查找函数

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 7;
//	int mid = 0;
//	int bin_search(int arr[], int left, int right, int key);
//	{
//		int mid = 0;
//		while (left <= right) {
//			mid = (left + right) >> 1;
//			if (arr[mid] > key) {
//				right = mid - 1;
//			}
//			else if (arr[mid] < key) {
//				left = mid + 1;
//			}
//			else
//			{
//				system("pause");
//				return mid;//找到了，返回下标
//			}
//		}
//		system("pause");
//		return -1;//找不到
//	}
//}



//猜数字游戏


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("************************************\n");
	printf("**************  1.play  ************\n");
	printf("**************  0.exit  ************\n");
	printf("************************************\n");
}
//TDD-测试驱动开发
//RAND_MAX--rand 函数能返回随机数的最大值
void game()
{
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1) {
		printf("请输入猜的数字>:");
		scanf("%d", &input);
		if (input > random_num) {
			printf("猜大了\n");
		}
		else if (input < random_num) {
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do {
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新输入！\n");
			break;
		}
	} 
	while (input);
	system("pause");
	return 0;
}
