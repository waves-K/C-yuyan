//C_practice_002


//1. 给定两个整形变量的值，将两个值的内容进行交换。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	int t = 0;
	printf("请输入两个整数分别给a,b:\n");
	scanf("%d%d", &a, &b);
	t = a;
	a = b;
	b = t;
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}


//2. 不允许创建临时变量，交换两个数的内容（附加题）
//方法一：
//使用数学方法进行加减运算
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个整数a，b：\n");
//	scanf("%d%d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}
//方法二：
//使用异或的方法进行值交换
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个整数给a,b:\n");
//	scanf("%d%d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}

//3. 求10 个整数中最大值。

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a[10] = {0};
//	int max = 0;
//	printf("请任意输入10个整数：\n");
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i <= 9; i++)
//	{
//		max = a[0];
//		if (a[i] > max) {
//			max = a[i];
//		}
//	}
//	printf("这10个数中最大的数是：%d\n", max);
//	system("pause");
//	return 0;
//}


//4. 将三个数按从大到小输出。
//两两进行比较，适当交换值
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	printf("请输入任意三个数：\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b) {
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (b < c) {
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d>%d>%d\n", a, b, c);
//	system("pause");
//	return 0;
//}


//5. 求两个数的最大公约数。
//方法一：
//辗转相除法：用两个数中较大的数除以小的数，
//			  如果余数为 0，则较小的数就是
//			  这两个数的最大公约数；如果余
//			  数不为 0，则用较小的数除以余
//			  数，直到余数为 0，余数为 0 时
//			  的较小数就是最大公约数。 
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	printf("请输入两个任意整数：\n");
//	scanf("%d%d", &a, &b);
//	if (a < b) {
//		t = a;
//		a = b;
//		b = t;
//	}
//	while (a % b != 0) {
//		int temp = 0;
//		temp = a % b;
//		a = b;
//		b = temp;
//	}
//	printf("a,b的最大公约数为：%d", b);
//	system("pause");
//	return 0;
//}
