//  判断 1000-2000 年之间的闰年

//方法一：

//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//
//	// for 循环获取 1000-2000 年之间的年份
//	for (year = 1000; year <= 2000; year++) {
//
//		// 第一个判断闰年的条件：能被 4 整除，但不能被 100 整除
//		if ((year % 4 == 0) && (year % 100 != 0)) {
//			printf("%d ", year);	// 打印闰年
//			count++;	// 计数，统计闰年的个数
//		}
//
//		// 第二个判断闰年的条件：能被 400 整除
//		if (year % 400 == 0) {
//			printf("%d ", year);	// 打印闰年
//			count++;	// 计数，统计闰年的个数
//		}
//	}
//	printf("\ncount = %d \n", count);
//	system("pause");
//	return 0;
//}


////方法二：函数实现
//

//#include<stdio.h>
//#include<stdlib.h>
//
//// 函数定义
//int is_leap(int y)
//{
//	// 闰年的判断条件
//	// 如果是闰年就返回 1 ，如果不是闰年就返回 0 .
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//
//	for (year = 1000; year <= 2000; year++) {
//		// 函数调用，如果返回值为 1 则打印，否则不打印
//		if (is_leap(year)) {
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}


// 方法三：

//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//
//	// for 循环获取 1000-2000 年之间的年份
//	for (year = 1000; year <= 2000; year++) {
//
//		// 判断闰年的条件：能被 4 整除，但不能被 100 整除；或者能被 400 整除
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) 
//		{
//			printf("%d ", year);	// 打印闰年
//			count++;	// 计数，统计闰年的个数
//		}
//	}
//	printf("\ncount = %d \n", count);
//	system("pause");
//	return 0;
//}