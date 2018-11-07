#define _CRT_SECURE_NO_WARNINGS
//    实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。


//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int num = 0;
//	printf("请输入一个数：");
//	scanf("%d", &num);
//	for (i = 1; i <= num; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d * %d = %2d  ", i, j, i*j);
//		}
//		printf("\n");
//	}
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


// 函数实现

#include<stdio.h>
#include<stdlib.h>

int lll(int i, int j)
{
	return (i*j);
}
int main()
{
	int i = 0;
	int j = 0;
	int num = 0;
	printf("请输入一个数：");
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		for (j = 1; j <= i; j++) {
			int ret = lll(i, j);
			printf("%d * %d = %2d  ", i, j, ret);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}