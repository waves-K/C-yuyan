//C_practice_003

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
//1.将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//解题思路：首先需要从键盘获取两个长度相同的数组
//			然后让两个数组下标相等的值进行交换
//			这里我们需要定义一个临时变量作为值交换的桥梁
#include<stdio.h>
//int main()
//{
//	int a[5] = { 0 };
//	int b[5] = { 0 };
//	int temp = 0;
//	int i = 0;
//
//	//获取数组
//	printf("请输入两个长度为 5 的数组：\n");
//	printf("a[5]= ");
//	for (i = 0; i < 5; i++) {
//		scanf("%d", &a[i]);
//	}
//	printf("b[5]= ");
//	for (i = 0; i < 5; i++) {
//		scanf("%d", &b[i]);
//	}
//
//
//	//两个数组中下标相同的元素进行值交换
//	for (i = 0; i < 5; i++) {
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//
//	//输出交换后的结果
//	printf("交换后的结果为：\na[5] = ");
//	for (i = 0; i < 5; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\nb[5] = ");
//	for (i = 0; i < 5; i++) {
//		printf("%d ", b[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//代码改进
int main()
{
	int arr1[5] = { 0 };
	int arr2[5] = { 0 };

}


//2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
//解题思路：首先我们可以将1-100之间的数分为奇数项和偶数项
//			然后分别进行求和，最后把奇数项求和的结果和偶数项求和的结果在求和

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum1 = 0;
//	double sum2 = 0;
//	double sum = 0;

//奇数项求和，注意：这里一定是 1.0 / i， 而不是1 / i
//	for (i = 1; i <= 99; i += 2) {
//		sum1 = (sum1 + 1.0 / i);	
//	}					

//偶数项求和
//	for (i = 2; i <= 100; i += 2) {
//		sum2 = (sum2 - 1.0 / i);	
//	}

//	sum = sum1 + sum2;
//	printf("%lf\n", sum);
//	system("pause");
//	return 0;
//}


//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
//解题思路：首先将1-99之间的数拆分为个位数和十位数，
//			然后分别与9比较，如果相等就加一，否则不加
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 100; i++) {
//		if(i%10 == 9){			//判断个位数是否等于9
//			count++;
//		}
//		if (i / 10 == 9) {		//判断十位数是否等于9
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}
