#define _CRT_SECURE_NO_WARNINGS

//使用if...else...语句来描述下面的逻辑
//当 x > 0 时，y = 1;
//当 x == 0 时，y = 0;
//当 x < 0 时，y = -1;


#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入x的值：\nx = ");
//	scanf("%d", &x);
//	if (x > 0)
//		printf("y = 1\n");
//	else if (x == 0)
//		printf("y = 0\n");
//	else
//		printf("y = -1\n");
//	system("pause");
//	return 0;
//}

//输出 1-100 之间的基数

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 2 == 1){
//			printf("%d ", i);
//			count++;
//		}
//		else
//			// continue 结束本次循环
//			// break 跳出循环
//			continue;
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}

//判断两个数组中是否有相同的元素，有就输出“有”，没有就输出“没有”

//int main()
//{
//	int arr1[3] = { 0 };
//	int arr2[4] = { 0 };
//	int i = 0;
//	int j = 0;
//	printf("获取一个数组：\narr1[3] = ");
//	for (i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++) {
//		scanf("%d", &arr1[i]);
//	}
//	printf("\n获取另一个数组：\narr2[4] = ");
//	for(j = 0; j < sizeof(arr2) / sizeof(arr2[0]); j++) {
//		scanf("%d", &arr2[j]);
//	}
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
//		for (j = 0; j < sizeof(arr2) / sizeof(arr2[0]); j++) {
//			if (arr1[i] == arr2[j]) {
//				printf("有相同元素！\n");
//				system("pause");
//				//只要程序进入此处，就执行这里的 return 0 ，并且执行后就结束掉该程序。
//				return 0;
//			}
//		}
//	}
//	printf("没有相同元素！\n");
//	system("pause");
//	return 0;
//}

//return 可以结束掉这个函数，即返回它所在的函数
//eg:下面程序由于 age = 0 < 18; 输出“未成年”，执行第一个 return 0, 结束掉该函数，不打印“hehe”
//		如果 age = 20 > 18; 输出“成年”，跳过第一个 return 0, 执行第二个 return 0,打印“hehe”
//int main()
//{
//	int age = 0;
//	if (age < 18) {
//		printf("未成年\n");
//		system("pause");
//		return 0;
//	}
//	else {
//		printf("成年\n");
//	}
//	printf("hehe\n");
//	system("pause");
//	return 0;
//}

//浮点型和零进行比较

//这里的 #define EXP 0.001 是定义的标识符常量，用来规定精确度，即小数点后多少位有效
//由于浮点数在内存中以 二进制 的方式进行存储，所以有些 十进制 小数在内存中就无法精确存储
//这必然造成精度的丢失。一旦丢失就可能计算不准确，故浮点数不能用“ == ”直接比较。
//我们可以换一种思路：首先我们可以自己规定一个精确度，然后以这个为标准进行相关运算
//					再用减法来实现浮点数之间的比较。
//#define EXP 0.001
//int main()
//{
//	double i = 20.0;
//	double j = i / 6.0;		// 这里 j = 3.33333...
//	if (i == j * 6.0)		
//		printf("equal\n");
//	else
//		printf("not equal\n");
//	system("pause");
//	return 0;
//}

//判断一个浮点数是不是等于 0.0 的正确写法
//#define EXP 0.00001
//int main()
//{
//	double a = 0.0000001;
//	if ((a > -EXP) && (a < EXP))
//		printf("a = 0.0\n");
//	else
//		printf("a != 0.0\n");
//	system("pause");
//	return 0;
//}
////这里的结果是 a = 0.0

//推广：判断一个浮点数是不是等于 20.0
//
//#define EXP 0.00000001
//int main()
//{
//	double a = 0.0000000000001;
//	if(((a - 20.0)>-EXP && ((a - 20.0)<EXP)))
//		printf("是\n");
//	else
//		printf("不是\n");
//	system("pause");
//	return 0;
//}


// float: 4 字节（32 bit）
// double: 8 字节（64 bit），而内存只给了 52 个 bit 来存储小数点后面的数字

//求一元二次方程的解
//#include<math.h>
//#define EXP 0.00001
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	double disc = 0.0;
//	printf("请输入a,b,c的值：\n");
//	scanf("%lf%lf%lf", &a, &b, &c);
//	if ((a >= -EXP) &&(a <= EXP))
//		printf("不是一元二次方程！\n");
//	else {
//		disc = b * b - 4 * a * c;
//		if ((disc >= -EXP) && (disc <= EXP))
//			printf("%lf\n", (-b) / 2 * a);
//		else if (disc > 0.0)
//			printf("%lf  %lf\n", ((-b) + sqrt(disc)) / 2 * a, ((-b) - sqrt(disc)) / 2 * a);
//	}
//	system("pause");
//	return 0;
//}

//代码风格：
//    表示判断时，如果判断语句中有常量，最好把常量放在 等号 的 左边
//	  eg:
//		int num = 1;
//		if (5 == num) {
//			printf("hehe\n");
//		}



//switch 语句

//实现星期一到星期天的判断
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}

//改变要求
// 1. 输入 1-5 输出“workday”;
// 2. 输入 6-7 输出“weekend”

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("workday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	// default 的作用：
//	//    当表达式的值域所有的 case 标签的值都不匹配时，所有的语句都会被跳过
//	//但程序并不会终止，也不会报错，因为这种情况在 C 中并不认为适合错误。
//	//如果想要解决此问题，则可以在 switch 语句中加上一个 default：break;
//	// default 标签可以出现在任何一个 case 标签可以出现的位置，当 switch 表达式的值
//	//不匹配所有 case 标签的值时，这个 default 子句后面的语句就会执行。
//	//所以，每个 switch 语句只能有一个 default 子句。
//	default:
//		break;
//	}
//	system("pause");
//	return 0;
//}

//编程好习惯：在每个 switch 语句中都放一条 default 子句，甚至可以在后面加上一个 break;


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n) {
//	case 1:
//		m++;				// m == 3 
//	case 2:
//		n++;				// n == 2
//	case 3:
//		switch (n) {
//		case 1:
//			n++;			// n == 3
//		case 2:
//			m++;			// m == 4
//			n++;			// n == 4
//			break;			//结束内层 switch 语句
//		}
//	case 4:
//		m++;				// m == 5
//		break;				// 结束外层 switch 语句
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);	// m = 5, n = 3
//	system("pause");
//	return 0;
//}

// break 只会跳出自己的 switch


//goto 语句
//建议不要随意使用 goto 语句，不然会发生程序错乱
//一个关机程序：

//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("电脑将在 1 分钟后关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//
//	// strcmp 字符串比较，相同 == 0，不相同 != 0
//	if (0 == strcmp(input, "我是猪")) {
//		// shutdown -a  取消关机
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//用循环实现一个关机命令

//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//	while (1) {
//		printf("电脑将会在 1 分钟后关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		if (0 == strcmp(input, "我是猪")) {
//			system("shutdown -a");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

