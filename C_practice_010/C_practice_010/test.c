#define _CRT_SECURE_NO_WARNINGS
//编写代码实现：求一个整数存储在内存中的二进制中的 1 的个数。

//方法一：
//	这种方法虽然容易想到，但是有比较大的缺陷。
//比如：这种方法只能求大于 0 的数的二进制位中 1 的个数

//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int num = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	while (num) {
//		if (num % 2 == 1) {
//			count++;
//		}
//		num = num / 2;
//	}
//	printf("二进制中 1 的个数 = %d\n", count);
//	system("pause");
//	return 0;
//}



//方法二：
//	较方法一的优点是：可以计算 负数 的二进制中 1 的个数，
//但是每一个数都必须循环 32 次，效率低

//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	int i = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	for (i = 0; i < 32; i++) {

//		//	>> 移位操作符，表示右移 i 位
//		//	& 按位与操作符，全一为 1 ，其余都为 0 
//		if (((num >> i) & 1) == 1) {
//			count++;
//		}
//	}
//	printf("二进制中 1 的个数 = %d\n", count);
//	system("pause");
//	return 0;
//}


//方法三：
//

//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int count = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	while (num) {
//		count++;
//		num = num & (num - 1);
//		//假设 num = 3
//		//第一次按位与
//		//00000000 00000000 00000000 00000011
//		//00000000 00000000 00000000 00000010
//
//		//第二次按位与
//		//00000000 00000000 00000000 00000010
//		//00000000 00000000 00000000 00000001
//
//		//最终结果
//		//00000000 00000000 00000000 00000000
//	}
//	printf("二进制中 1 的个数 = %d\n", count);
//	system("pause");
//	return 0;
//}