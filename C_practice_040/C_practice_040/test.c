//#include<stdio.h>
//#include<stdlib.h>
//
//void test() {
//	printf("hehe\n");
//}
//
//int main()
//{
//	printf("%p\n", test);
//	printf("%p\n", &test);
//	int(*p)() = test;
//	p = test;
//	printf("%p\n", p);
//	system("pause");
//	return 0;
//}




// 函数指针数组的用途： 转移表

// 使用哈部署指针数组实现


#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

//#pragma warning(disable:)

int my_add(int x, int y) {
	return x + y;
}

int my_sub(int x, int y) {
	return x - y;
}

int my_mul(int x, int y) {
	return x * y;
}

int my_div(int x, int y) {
	if (y == 0) {
		printf("div zero! error!\n");
		return -1;
	}
	return x / y;
}

void menu() {
	printf("###############################\n");
	printf("#### 1. add         2. sub ####\n");
	printf("#### 3. mul         4. div ####\n");
	printf("#### 0. exit               ####\n");
	printf("###############################\n");
	printf("Place Select：");
}

int main()
{
	int(*p[5])(int, int) = {NULL, my_add, my_sub, my_mul, my_div};
	int select = 0;
	do {
		menu();
		scanf("%d", &select);
		if (select >= 1 && select <= 4) {
			int x, y,z;
			printf("Please Enter Data<x, y>: ");
			scanf("%d%d", &x, &y);
			z = p[select](x,y);
			printf("result is : %d\n", z);
		}
		else if (select == 0) {
			printf("Bye!\n");
			break;
		}
		else {
			printf("Enter Error! optipn is [1, 4]\n");
		}
	} while (1);
	system("pause");
	return 0;
}



#include<stdio.h>

int my_add(int a, int b) {
	return a + b;
}

int my_sub(int a, int b) {
	return a - b;
}

int my_mul(int a, int b) {
	return a * b;
}

int my_div(int a, int b) {
	if (b == 0) {
		printf("div zero! error!\n");
		return -1;
	}
	return a / b;
}

int main()
{
	int a, b;
	int input = 1;
	int ret = 0;
	while (input) {
		printf("###############################\n");
		printf("#### 1. add         2. sub ####\n");
		printf("#### 3. mul         4. div ####\n");
		printf("#### 0. exit               ####\n");
		printf("###############################\n");
		printf("Place Select：");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("请输入操作数：");
			scanf("%d %d", &a, &b);
			ret = add(a, b);
			break;
		case 2:
			printf("请输入操作数：");
			scanf("%d %d", &a, &b);
			ret = sub(a, b);
			break;
		case 3:
			printf("请输入操作数：");
			scanf("%d %d", &a, &b);
			ret = mul(a, b);
			break;
		case 4:
			printf("请输入操作数：");
			scanf("%d %d", &a, &b);
			ret = div(a, b);
			break;
		default:
			printf("选择错误\n");
			break;
		}
		printf("ret = %d\n", ret);
	}
	return 0;
}