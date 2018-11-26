//5.写一个宏可以将一个数字的奇数位和偶数位交换。
//

//#include<stdio.h>
//#include<windows.h>
//
//#define EXCHANGE(x)\
//	((((x) & 0xAAAAAAAA)>>1 | (((x) & 0x55555555)<<1))
//
//int main()
//{
//	unsigned int a = 1234;
//	printf("%u\n", EXCHANGE(a)));
//	system("pause");
//	return 0;
//}

//6.使用宏实现两个数中求较大值。

//#include<stdio.h>
//#include<windows.h>
//
//#define MAX(x,y) ((x) > (y) ? (x) : (y))
//
//int main()
//{
//	printf("%d\n", MAX(10, 20));
//	system("pause");
//	return 0;
//}
//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
//

#include<stdio.h>
//#include<windows.h>
//
//unsigned int reverse(unsigned int a) {
//	unsigned int flag = 0x1;
//	unsigned int ret = 0;
//	int i = 0;
//	while (i < 32) {
//		if (a & (flag << i)) {
//			ret |= (flag << (32 - i - 1));
//		}
//		i++;
//	}
//	return ret;
//}
//
//int main()
//{
//	unsigned int a = 1234;
//
//	unsigned int b = reverse(a);
//	printf("%u\n", b);
//	system("pause");
//	return 0;
//}

//2.不使用（a + b） / 2这种方式，求两个数的平均值。
//

//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	printf("%d\n", b + (a - b) / 2);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	printf("%d\n", (a & b) + ((a ^ b) >> 1));
//	system("pause");
//	return 0;
//}

//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）

//#include<stdio.h>
//#include<windows.h>
//
//int find_single(int a[], int size) {
//	int i = 1;
//	int tmp = a[0];
//	for (i = 0; i < size; i++) {
//		tmp ^= a[i];
//	}
//	return tmp;
//}
//
//int main()
//{
//	int a[] = { 1,1,2,2,3,3,4,4,5,5,7 };
//	int size = sizeof(a) / sizeof(a[0]);
//	int ret = find_single(a, size);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//4.
//有一个字符数组的内容为:"student a am i", 请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。只能开辟有限个空间（空间个数和字符串的长度无关）。

// 两次逆置
// 1. 局部逆置
// 2. 整体逆置

#include<stdio.h>
#include<windows.h>

// 逆置
void reverse(char *start, char *end) {
	while (start < end) {
		*start ^= *end;
		*end ^= *start;
		*start ^= *end;
		start++, end--;
	}
}

void reverseStr(char *str) {
	char *pp = str;
	char *p = str;
	while (*p != '\0') {
		if (*p == ' ') {
			reverse(pp, p - 1);
			p++;
			pp = p;
			continue;
		}
		p++;
	}
	reverse(pp, p - 1);
	reverse(str, p - 1);
}

int main()
{
	char str[] = "student a am i";
	
	reverseStr(str);

	printf("%s\n", str);
	system("pause");
	return 0;
}