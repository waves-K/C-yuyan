#define _CRT_SECURE_NO_WARNINGS

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

// 使用函数指针数组实现


//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
//
////#pragma warning(disable:)
//
//int my_add(int x, int y) {
//	return x + y;
//}
//
//int my_sub(int x, int y) {
//	return x - y;
//}
//
//int my_mul(int x, int y) {
//	return x * y;
//}
//
//int my_div(int x, int y) {
//	if (y == 0) {
//		printf("div zero! error!\n");
//		return -1;
//	}
//	return x / y;
//}
//
//void menu() {
//	printf("###############################\n");
//	printf("#### 1. add         2. sub ####\n");
//	printf("#### 3. mul         4. div ####\n");
//	printf("#### 0. exit               ####\n");
//	printf("###############################\n");
//	printf("Place Select：");
//}
//
//int main()
//{
//	int(*p[5])(int, int) = {NULL, my_add, my_sub, my_mul, my_div};
//	int select = 0;
//	do {
//		menu();
//		scanf("%d", &select);
//		if (select >= 1 && select <= 4) {
//			int x, y,z;
//			printf("Please Enter Data<x, y>: ");
//			scanf("%d%d", &x, &y);
//			z = p[select](x,y);
//			printf("result is : %d\n", z);
//		}
//		else if (select == 0) {
//			printf("Bye!\n");
//			break;
//		}
//		else {
//			printf("Enter Error! optipn is [1, 4]\n");
//		}
//	} while (1);
//	system("pause");
//	return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>
//
//int my_add(int a, int b) {
//	return a + b;
//}
//
//int my_sub(int a, int b) {
//	return a - b;
//}
//
//int my_mul(int a, int b) {
//	return a * b;
//}
//
//int my_div(int a, int b) {
//	if (b == 0) {
//		printf("div zero! error!\n");
//		return -1;
//	}
//	return a / b;
//}
//
//int main()
//{
//	int a, b;
//	int input = 1;
//	int ret = 0;
//	while (input) {
//		printf("###############################\n");
//		printf("#### 1. add         2. sub ####\n");
//		printf("#### 3. mul         4. div ####\n");
//		printf("#### 0. exit               ####\n");
//		printf("###############################\n");
//		printf("Place Select：");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			printf("请输入操作数：");
//			scanf("%d %d", &a, &b);
//			ret = my_add(a, b);
//			break;
//		case 2:
//			printf("请输入操作数：");
//			scanf("%d %d", &a, &b);
//			ret = my_sub(a, b);
//			break;
//		case 3:
//			printf("请输入操作数：");
//			scanf("%d %d", &a, &b);
//			ret = my_mul(a, b);
//			break;
//		case 4:
//			printf("请输入操作数：");
//			scanf("%d %d", &a, &b);
//			ret = my_div(a, b);
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//		printf("ret = %d\n", ret);
//	}
//	system("pause");
//	return 0;
//}





// 指向函数指针数组的指针
//     只想函数指针数组的指针是一个  指针
//     指针指向一个 数组 ，数组的元素都是 函数指针；

// 定义一个 指向函数子镇数组的指针

//void test(const char* str) {
//	printf("%s\n", str);
//}
//
//int main()
//{
//	// 函数指针 pfun
//	void(*pfun)(const char*) = test;
//
//	// 函数指针的数组 funArr
//	void(*pfunArr[5])(const char* str);
//	pfunArr[0] = test;
//
//	// 指向函数指针数组 pfunArr 的指针 ppfunArr
//	void(*(*ppfunArr)[10])(const char*) = &pfunArr;
//	system("pause");
//	return 0;
//}





//// 使用 qsort 进行排序
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<search.h>
//#include<assert.h>
//#include<windows.h>
//
//// x 和 y 代表的是每一个元素的地址，而我们要进行比较的是每一个元素的内容
//// 所以用 *x 和 *y 进行比较
//// *x > *y = 1, *x < *y = -1, else = 0
//int int_cmp(const void *x, const void *y) {
//	if (*((int *)x) > *((int*)y)) {
//		return 1;
//	}
//	else if (*((int *)x) < *((int*)y)) {
//		return -1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int char_cmp(const void *x, const void *y) {
//	if (*((char *)x) > *((char*)y)) {
//		return 1;
//	}
//	else if (*((char *)x) < *((char*)y)) {
//		return -1;
//	}
//	else {
//		return 0;
//	}
//}
//
//void swap(char *x, char *y, int size) {
//	while (size--) {
//		*x ^= *y;
//		*y ^= *x;
//		*x ^= *y;
//		x++, y++;
//	}
//}
//
//void my_qsort(void *base, int num, int size, \
//	int(*cmp)(const void *, const void *)) {
//	assert(base);
//	assert(cmp);
//	int i = 0;
//	for (i = 0; i < num - 1; i++) {
//		int j = 0;
//		int flag = 0;
//		for (j = 0; j < num - 1 - i; j++) {
//			if (cmp((char*)base + j * size,\
//				(char*)base + (j + 1) * size) > 0) {
//				flag = 1;
//				swap((char*)base + j * size, \
//					(char*)base + (j + 1) * size, size);
//			}
//		}
//		if (flag == 0) {
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//	int a[] = { 3,23,5,5,4,32,634,6346,34,5423,34 };
//	int size = sizeof(a) / sizeof(a[0]);
//	char b[] = "bskdfhiubaksdhui";
//	int num = strlen(b);
//	my_qsort(a, size, sizeof(int), int_cmp);
//	my_qsort(b, num, sizeof(char), char_cmp);
//
//	int i = 0;
//	for (i = 0; i < size; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	printf("%s", b);
//	printf("\n");
//	system("pause");
//	return 0;
//}

// 在调用 qsort 的时候 ，只需要写一个一直类型匹配的回调函数



