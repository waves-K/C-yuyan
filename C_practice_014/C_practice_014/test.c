//// 打印 100-200 之间的素数
//
//
//
////#include<stdio.h>
////#include<stdlib.h>
////
////int main()
////{
////	int i = 0;
////	int j = 0;
////	int count = 0;	// 计数
////
////	for (i = 100; i <= 200; i++){
////		for (j = 2; j <= i; j++){
////			if (i % j == 0) {
////				break;
////			}
////		}
////
////		// 当 j == i 的时候，说明小于 i 的所有整数都不能被 i 整除，即：i 是素数
////		if (j == i) {
////			printf("%d ", i);	// 打印素数
////			count++;	// 统计 100-200 之间素数的个数
////		}
////	}
////	printf("\ncount = %d\n", count);
////	system("pause");
////	return 0;
////}
//
////打印100~200之间的素数，且计算素数个数
////素数，就是除了1和他本身，不能被其他数整除的数字
////方法一：用100到200之间的每一个数字除以2到其本身
////前面的那一个数字，如果此过程中出现整除的现象，
////则该数不是素数，如果没有整除的现象，则该数为素数输出
////#include<stdio.h>
////int main()
////{
////	int i = 0;
////	int count = 0;
////	for(i = 100; i <= 200; i++)
////	{
////		int j = 0;
////		for(j = 2; j <= i; j++)
////		{
////			if (i%j == 0)
////			{
////				break;
////			}
////		}
////		if (i == j)
////		{
////			count++;
////			printf("%d ", i);
////		}
////	}
////	printf("\ncount = %d\n", count);
////	system("pause");
////	return 0;
////}
////方法二：使用sqrt函数对方法一进行优化sqrt函数就是平方根，非素数可以写成
////除了1和他本身的a*b方式，而a、b之间必有一个小于等于ab之积的开平方根
////#include<stdio.h>
////#include<math.h>
////int main()
////{
////	int i = 0;
////	int count = 0;
////	for (i = 100; i <= 200; i++)
////	{
////		int j = 0;
////		for (j = 2; j <= sqrt(i); j++)
////		{
////			if (i % j == 0)
////			{
////				break;
////			}
////		}
////		if (j > sqrt(i))
////		{
////			count++;
////			printf("%d ", i);
////		}
////	}
////	printf("\ncount = %d\n", count);
////	system("pause");
////	return 0;
////}
////方法三
////#include<stdio.h>
////#include<math.h>
////int main()
////{
////	int i = 0;
////	int count = 0;
////	for(i = 101; i <= 200; i += 2)
////	{
////		int j = 0;
////		for (j = 2; j <= sqrt(i); j++)
////		{
////			if (i % j == 0)
////			{
////				break;
////			}
////		}
////		if (j > sqrt(i))
////		{
////			count++;
////			printf("%d ", i);
////		}
////	}
////	printf("\ncount = %d\n", count);
////	system("pause");
////	return 0;
////}
//
//
////方法四：函数实现
//
//
//#include<stdio.h>
//#include<stdlib.h>
//
//// 定义函数
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++) {
//		if (n % j == 0) {
//			return 0;
//		}
//		if(j == n){
//			return 1;
//		}
//	}
//}
//
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++) {
//
//		// 函数调用
//		// is_primt(i) 表示如果 i 是素数
//		if (is_prime(i)) {
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}