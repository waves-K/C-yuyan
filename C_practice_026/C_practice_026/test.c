//#include<stdio.h>
//#include<Windows.h>
//
//void *ret;	// void 是一个空类型，空类型是不可以定义变量的
//			// 定义一个变量最重要的就是开辟空间，开辟的空间大小与类型有关
//			// 但是 void* 就可以定义变量了，因为他是一个指针，
//
//void bug() {
//	int start = 0;
//	int *p = &start;
//	p += 2;
//	*p = (int)ret;
//	printf("haha, I am a bug!!\n");
//	Sleep(3000);
//}
//int fun(int x, int y) {
//	//printf("hello world!\n");
//	//int z = x + y;
//	//printf("%d\n", y);
//	//int *p = &x;
//	//p++;// 给指针加一，看起来是加一，实际上是加其只想类型的大小。比如指向的是整型，那么加一就相当于加四
//	//*p = 20;
//	//printf("%d\n", y);
//	int *p = &x;
//	p--;
//	ret = *p;
//	*p = (int)bug;
//	printf("I am fun function!!\n");
//	return 0;
//}
//
//int main()
//{
//	//printf("hello world!\n");
//	//fun();
//
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	printf("I am main function!\n");
//	c = fun(a, b);
//	// __asm 是往C语言当中插入一条汇编
//	__asm {
//		sub esp, 4
//	}
//	printf("you should run here! : %d\n", c);
//
//	system("pause");
//	return 0;
//}


// 接收一个整型值（无符号），把他转换为字符并打印它
// 例如输入：1234，输出1 2 3 4.

// 解题思路
//	1. 判断是否可以使用递归
//  2. 如果能，首先划分子问题，然后看子问题的规模是不是越来越小，最后是不是有递归出口

// 不使用递归解法：模10然后再除等10，这样的方法拿出来的顺序是4 3 2 1，此时可以把他们放在数组中，最后把它们倒叙的一个个打印出来就好了

// 递归方法求解
// 使用递归时就不能先打印 4 ，
//#include<stdio.h>
//#include<stdlib.h>
//#include<windows.h>
//
//void printInt(int x) {	
//	// 假设这里传进来的是 12
//	// 满足条件，所以递归，递归进去就成了12 / 10 = 1，
//	// 所以传进来就是 1，不满足条件，就打印出字符 ‘1’
//	// '1'字符打出之后函数返回，函数返回的时候返回到 printInt(x / 10);
//	// 
//	if (x > 9) {
//		printInt(x / 10);	// 这里进入的一次函数调用
//	}
//	putchar(x%10 + '0');	// putchar 往前线输出
//	putchar(' ');
//}
//
//int main()
//{
//	printInt(1234);
//	printf("\n");
//	system("pause");
//	return 0;
//}



// 编写函数不允许创建临时变量，求字符串的长度。

// 解题思路
// 1.字符串的长度在C语言当中是要以 '\0' 为鉴定符的
// 2.不断地让他逼近与 '\0' 
// 比如说有一个："abcdefg" 字符串，要求这个字符串的长度
// 其实就是在求 1 + "bcdefg" 的长度，
// 而"bcdefg" 的长度又是 1 + "cdefg"
// ....
// 最终会让字符串越来越短，最后短到'\0'
// 如果碰到'\0' 说明这个字符串的长度为 0
// 所以如果碰到'\0' 就直接 return 0

//#include<stdio.h>
//#include<stdlib.h>
//#include<Windows.h>
//
//// 因为我们要做的工作是求字符串长度，不会对字符串进行修改
//// 所以参数部分加上一个 const 作为修饰
//int myStrlen(const char * str) {
//	if (*str == '\0') {
//		return 0;
//	}
//	return 1 + myStrlen(str + 1);
//}
//
//int main()
//{
//	int len = myStrlen("hello world");
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}



// 求 n 的阶乘（不考虑溢出）

//#include<stdio.h>
//#include<stdlib.h>
//#include<windows.h>
//
//// 迭代法
////int factorial(int n) {
////	int sum = 1;
////	int i = 2;
////	for (i = 2; i <= n; i++) {
////		sum *= i;
////	}
////	return sum;
////}
//
//
//// 递归法
//int factorial_r(int n) {
//	// 5! 5*4! 5*4*3! ... 
//	if (n == 1) {
//		return 1;
//	}
//	return n * factorial_r(n - 1);
//}
//int main()
//{
//	//int n = factorial(5);
//	int n = factorial_r(5);
//	printf("%d\n", n);
//	system("pause");
//	return 0;
//}