//C_practice_002


//1. 给定两个整形变量的值，将两个值的内容进行交换。
#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	printf("请输入两个整数分别给a,b:\n");
//	scanf("%d%d", &a, &b);
//	t = a;
//	a = b;
//	b = t;
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}


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

//按二进制异或
//	如：num1 = 3; num2 = 5
//		转换为二进制码为：num1 = (011); num2 = (101)
//		num1^num2 = (011)^(101) = (110), 把 num1^num2 的结果赋给 num1;
//		此时 num1 = 6 = (110), num2 = 5 = (101);
//		num1^num2 = (110)^(101) = (011), 把 num1^num2 的结果赋给 num2;
//		此时 num1 = 6 = (110), num2 = 3 = (011);
//		num1^num2 = (110)^(011) = (101), 把 num1^num2 的结果赋给 num1;
//		此时 num1 = (101) = 5, num2 = (011) = 3;
//		完成值交换。

//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入两个整数给:\n");
//	scanf("%d%d", &num1,num2);
//	printf("num1 = %d, num2 = %d\n",num1,num2);
//	num1 = num1^num2;
//	num2 = num1^num2;
//	num1 = num1^num2;
//	printf("num1 = %d ,num2 = %d\n", num1, num2);
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
//	printf("请任意输入10个整数：\na[10] = ");
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i <10 ; i++)
//	{
//		max = a[0];
//		if (a[i] > max) {
//			max = a[i];
//		}
//	}
//	printf("max = %d\n", max);
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
//	printf("a = %d, b = %d, c = %d\n", a, b, c);
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

//函数法

//定义函数，进行值交换
//void Swap(int *px, int *py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请获取三个数：\n");
//	scanf("%d%d%d", &a, &b, &c);
//	printf("a = %d, b = %d, c = %d", a,b,c);
//
//	//调用函数 Swap
//	//实参传递给形参（值传递）
//	//形参是实参的一份临时拷贝，对形参的修改不会改变实参。
//
//	if (a < b) {
//	
//	//这里仍然是把 实参 传递给 形参， 只是这里是 传地址
//	//本质上都是值传递
//		Swap(&a, &b);
//	}
//	if (a < c) {
//		Swap(&a, &c);
//	}
//	if (b < c) {
//		Swap(&b, &c);
//	}
//	printf("\n%d>%d>%d\n", a, b, c);
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


//改进：

//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("请给出num1、num2的值：\n");
//	scanf("%d%d", &num1, &num2);
//	while (num1%num2 != 0) {
//		int tmp = num1 % num2;
//		num1 = num2;
//		num2 = tmp;
//	}
//	printf("最大公约数为：%d\n", num2);
//	system("pause");
//	return 0;
//}



//求两个数的最小公倍数

//	解题思路：首先明确最小公倍数怎么算：
//		假设要求 a、b 这两个数的最小公倍数，则最小公倍数 = a * b / a和b的最大公约数
//	所以要求最小公倍数，先求最大公约数，然后用两个数之积/最大公约数
//
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	printf("请获取num1、num2的值：\n");
//	scanf("%d%d", &num1, &num2);
//	num3 = num1 * num2;
//	while (num1%num2 != 0) {
//		int tmp = num1 % num2;
//		num1 = num2;
//		num2 = tmp;
//	}
//	num3 = num3 / num2;
//	printf("最小公倍数为：%d\n", num3);
//	system("pause");
//	return 0;
//}
