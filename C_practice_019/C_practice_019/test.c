//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。

// 普通方法实现：

//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	int j = 0;
//	printf("请输入行数：line = ");
//	scanf("%d", &line);
//	for (i = 1; i <= line; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}



// 函数法实现

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

// 定义输出函数 Print( )
void Print(line)
{
	int i = 0;	// 行数
	int j = 0;	// 每行的项数

	for (i = 1; i <= line; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d*%2d=%3d  ", i, j, i*j);
		}
		printf("\n");	// 一行打印完后 换行
	}
}

int main()
{
	int line = 0;
	printf("请输入行数：line = ");
	scanf("%d", &line);	// 接收一个数字，确定打印乘法口诀表的行数
	// 调用输出函数
	Print(line);
	system("pause");
	return 0;
}