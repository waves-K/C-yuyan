//// 编写一个程序，可以一直接收键盘字符，
////如果是小写字符就输出对应的大写字符，
////如果是大写字符就输出对应的小写字符，
////如果是数字就不输出。
//
//// 解题思路：
////第一步：一直接收一个字符（while 循环实现）
////第二步：判断这个字符是啥（if 判断语句实现）
////第三步：按照题目要求进行大小写字符之间的转化
////（由于题目要求大小写字符之间的转换，所以采用 
////  大写字符的 (Ascii + 32) 来得到对应的 小写字符;
////  小写字符的 (Ascii - 32) 来得到对应的 大写字符;
////  字符‘0’到‘9’不输出）
//
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int ch = 0;
//
//	// 实现一直接收字符
//	while ((ch = getchar()) != EOF)		// getcher() 获取一个字符；EOF 文件结束标志
//	{
//		// 小写字符转换为大写字符
//		if (ch >= 'a' && ch <= 'z')
//		{
//			putchar(ch - 32);
//		}
//		// 大写字符转换为小写字符
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			putchar(ch + 32);
//		}
//		// 数字不输出
//		else if (ch >= '0' && ch <= '9')
//		{
//			;
//		}
//		// 其他字符直接输出
//		else
//		{
//			putchar(ch);
//		}
//	}
//	system("pause");
//	return 0;
//}


//写一个函数返回参数二进制中 1 的个数，如：15 的二进制码  0000 1111 中有 4 个 1。

//解题思路：
//第一步：得到这个参数的二进制序列
//第二步：用合适的方法对该二进制序列中的 1 进行计数
//第三步：得到最终结果
//
//细致讲解：
//1、如何得到一个数的 二进制 序列呢？
//首先我们打个比方：比如我们要得到一个 十进制 数的每一位时，
//我们可以采取 " 对这个数 模10 除10 ，直到这个数变为 0 "，的方法得到我们想要的效果。
//那么，对于得到一个参数的 二进制 序列我们可以采取类似的方法，
//即：对这个参数 模2 除2，直到这个参数变为 0 。这样我们就可以得到一个参数的二进制序列了。
//
//2、怎样对这个参数的二进制序列中的 1 进行计数呢？
//在得到这个参数的 二进制 序列时，我们采取了" 对这个参数进行 模2 除2 ，直到这个参数变为 0"操作，
//在这个参数变为 0 之前，每进行一次这样的操做，计数器就加" 1 "，
//这样就可以得到这个参数的 二进制 中 " 1 " 的个数。

//#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include<stdlib.h>
//
//int count_one_bit(int m)
//{
//	int count = 0;
//	// 当 m == 0 时停止循环
//	while (m)
//	{
//		// 得到参数二进制序列中的一个 1 
//		if (m % 2 == 1)
//		{
//			count++;
//		}
//		// 去掉得到的这个 1 
//		m /= 2;
//	}
//	// 返回计数器 count 的值
//	return count;
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个参数：");
//	scanf("%d", &num);
//	int count = count_one_bit(num);
//	// 输出参数二进制中 1 的个数
//	printf("count = %d\n", count);
//	system("pause");
//	return 0;
//}


// 代码改进：
//使用 操作符 来实现得到一个参数的 二进制 序列中 1 的个数。
//具体操作：对这个参数的二进制码 左移(>> ) i 位，并按位与(&) 1，
//如果 按位与" 1 " 结果为 1 ，就给计数器加 " 1 "，直到 i == 32。


//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int count_one_bit(int m)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		// 对参数的二进制码 右移 i 位并按位与 1，判断结果是否等于 1
//		if (((m >> i) & 1) == 1)
//		{
//			// 满足条件 计数器加 1
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	printf("请输入一个参数：");
//	scanf("%d", &num);
//	int count = count_one_bit(num);
//	printf("count = %d\n", count);
//	system("pause");
//	return 0;
//}

// 对于上述方法，仍然有缺点，就是对于任意给定的参数，无论这个参数的二进制序列中有几个 1 ，
//我们的循环都必须循环 32 次，那么为了得到更简单的办法，我们就有了终极版方法

//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int count_one_bit(int m)
//{
//	int count = 0;
//	while (m)
//	{
//		// 丢掉 m 二进制中 最右边的一个 1
//		m = m & (m - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	printf("请输入一个参数：");
//	scanf("%d", &num);
//	int count = count_one_bit(num);
//	printf("count = %d\n", count);
//	system("pause");
//	return 0;
//}