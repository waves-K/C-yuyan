//int num = 5;
//-num == -5;

//例1：打印 num 的地址

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int num = 0;
//	printf("%p\n", &num); // %p 打印地址，
//	printf("%x\n", &num); // %x 以十六进制数字打印
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	short s = 2;
//	printf("%d\n", sizeof(s = a + 3));	// 这里输出多少？
//	printf("%d\n", s);	// 这里输出多少？
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));	// 这里的数组名(arr)代表整个数组
//	printf("%d\n", sizeof(arr + 0));	//这里的数组名(arr)代表的是首元素的地址
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int y = a--;	
//	// 后置--：先使用 a ,然后对 a 进行自减，这样 x 的值就是 a 的初值 5 。自减后的值4。
//	printf("y = %d\n", y);
//	system("pause");
//	return 0;
//}

//int y = a++;
//printf("y = %d\n", y);


//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	//00000000000000000000000000000101
//	//11111111111111111111111111111010
//	//11111111111111111111111111111001
//	//10000000000000000000000000000110
//	printf("%d\n", ~a);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 6;		// 定义 a 位整型
//	a = (int)3.14;	// 强制类型转换，把浮点数(3.14)转换为整型
//	printf("a = %d\n", a);
//	system("pause");
//	return 0;
//}


//// 输出1000-2000 年之间的闰年
//
//#include<stdio.h>
//int main()
//{
//	int count = 0;	
//	int year = 0;
//	for (year = 1000; year <= 2000; year++) {
//		// 判断闰年条件（能被 4 整除但不能被 100 整除，或者能被 400 整除）
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{ 
//			printf("%d ", year);	// 输出闰年
//			count++;	// 计数
//		}
//	}
//	printf("\ncount = %d\n", count);	// 输出1000-2000 年之间的闰年个数
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	system("pause");
//	return 0;
//}
//// 程序输出的结果是什么？

//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 0;
//	(a > 5) ? (b = 3) : (b = -3);
//	printf("b = %d\n", b);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 9;
//	int max = 0;
//	max = (a > b) ? a : b;
//	printf("max = %d\n", max);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);	// 逗号表达式
//	printf("c = %d\n", c);
//	system("pause");
//	return 0;
//}
//// c 的结果是多少？


//int main()
//{
//	int arr[4] = { 5,3,4,1 };	// 这里的[ ] 不是下标引用操作符
//	arr[2] = 4;		// 这个 [ ] 才是下表引用操作符，arr 表示数组首元素地址
//					// [ ] 的两个操作数是 arr 和 2
//					// arr 表示数组首元素地址，[2]表示数组第三个元素
//}



//#include<stdio.h>
//
////定义函数
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 5;
//	Add(a, b);	// 调用函数，这里的()就是函数引用操作符
//				// 接收了三个操作数：Add、a、b
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//
struct Stu
{
	char name[10];
	int age;
	char sex[5];
	char id[13];
};
//
//int main()
//{
//	struct Stu stu;
//	strcpy(stu.name, "zhangsan");
//	stu.age = 20;
//	strcpy(stu.id, "2018010101010");
//	strcpy(stu.sex, "保密");
//	printf("%s\n", stu.name);
//	printf("%d\n", stu.age);
//	printf("%s\n", stu.id);
//	printf("%s\n", stu.sex);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	struct Stu stu;
//	struct Stu *pstu = &stu;
//	pstu->age = 20;
//	strcpy(pstu->name, "lisi");
//	return 0;
//}