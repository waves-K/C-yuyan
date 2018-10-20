//C_practice_001


//打印100~200之间的素数，且计算素数个数
//素数，就是除了1和他本身，不能被其他数整除的数字
//方法一：用100到200之间的每一个数字除以2到其本身
//前面的那一个数字，如果此过程中出现整除的现象，
//则该数不是素数，如果没有整除的现象，则该数为素数输出
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for(j = 2; j <= i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}
//方法二：使用sqrt函数对方法一进行优化sqrt函数就是平方根，非素数可以写成
//除了1和他本身的a*b方式，而a、b之间必有一个小于等于ab之积的开平方根
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}
//方法三
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}
////输出乘法口诀表
//首先清楚乘法口诀表的结构：
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);// %2d 的作用是输出的结果位两字符右对齐，如果不够两个字符则用空格补齐
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//
////判断1000~2000年之间的闰年
//首先明确什么是闰年：能被 4 整除并且不能被 100 整除，或者能被 400 整除的数
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//	printf("1000-2000年之间的所有闰年：\n");
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//		if (year % 400 == 0)	//这里能被 400 整除的条件和上边的条件是 或者 的关系，
//								//如果用else的话就成了对立关系，就会导致结果出错
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n共有%d个闰年\n", count);
//	system("pause");
//	return 0;
//}
