////	引用
//
////C语言中交换两个变量的值：
//
////	1. 传值
//void Swap(int left, int right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}
////	优点：函数的副作用不会影响外部的实参
////	缺点：不能通过函数的形参来改变外部的实参
//
//
////	2. 传地址
//void Swap(int* pLeft, int* pRight)
//{
//	int temp = *pLeft;
//	*pLeft = *pRight;
//	*pRight = temp;
//}
////	优点：可以通过修改函数的形参来改变外边的实参
////	缺点：函数的副作用（有时候不想改变外边的实参）、指针需要判空、可能对指针掌握的一般、写起来麻烦，每次都要解引用
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	return 0;
//}

/*
//	C++ 中交换两个变量的内容

//	引用
//	1. 概念：引用不是新定义一个变量，而是给已存在的变量取了一个别名，
//			编译器不会为引用变量开辟内存空间，它和它的引用变量共用一块内存空间。

#include<iostream>
using namespace std;

// 验证引用实体和引用变量共用一块内存空间
int main()
{
	int a = 10;
	int& ra = a;
	//	doulle& ra = a;	错误写法

	ra = 20;
	cout << &a << endl;
	cout << &ra << endl;
	return 0;
}

//	引用的几个特性
int main()
{
	//int& ra;	引用在定义时必须初始化

	//	一个变量可以有多个引用
	int a = 10;
	int& ra = a;
	int&rra = a;

	//	引用一旦引用一个实体，再不能引用其他实体“一夫一妻制”
	int a = 10;
	int b = 20;

	int& ra = a;
	int& rra = a;
	ra = b;	// 这里相当于是给 ra 赋值，而不是引用
	&ra = b;	// 这里的 & 不是引用的标记，而是取地址。他只有在类型的后面才是引用标志。

	// 到底是引用的生命周期长 还是 实体的生命周期长

	if (1)
	{
		// 这里的 rb 就是 b 的别名，它的作用域只局限与这个 if 语句中，出了这个作用域就失效了
		//所以引用的生命周期没有实体的生命周期长
		int& rb = b;
	}

	return 0;
}
*/

#include<iostream>
using namespace std;

/*
//	常引用 (const 修饰的变量)

int main()
{
	// 第一种情况
	const int a = 10;
	const int& ra = a;

	// 第二种情况
	const int& b = 10;	// 给一个常量取一个别名

	// 第三种情况
	double d = 12.34;
	int& rd = d;

	const int& rd = d;	// 虽然可以通过编译，但是结果不是我们预期的
						// 这里的 rd 和 d 是两个不同的东西，可以通过查看地址的方式进行验证
}
*/



/*
//	引用的使用场景

//  1. 做参数

//	参数以引用的方式进行接收，这里的 left 就相当于是 a 的别名，right 就相当于是 b 的别名
void Swap(int& left, int& right)
{
	int temp = left;
	left = right;
	right = temp;
}

//	注意：如果是引用类型的参数，但在函数体中不需要改变形参，最好传递 const 类型引用。目的是保证代码的安全
void TestRef(const int& a)
{

}
int main()
{
	int a = 10;
	int b = 20;
	Swap(a, b);
	return 0;
}


//  2. 做返回值

//	注意：如果以引用的方式作为函数的返回值类型，不能返回栈上的空间
//	返回的变量的生命周期一定要比函数的生命周期长
int& TestRet(int& ret)
{
	int ret = 10;	// ret 是栈上的空间，而栈空间随着函数的结束已经被系统收回
	return ret;
}

int main()
{
	int b = 10;
	int a = TestRet(b);	// a 所引用的空间为一段无效的空间
	printf("%d\n", a);	// 10
	printf("%d\n", a);	// 10
	printf("%d\n", a);	// 10

	int& a = TestRet(b);
	printf("%d\n", a);	// 10
	printf("%d\n", a);	// 随机值
	printf("%d\n", a);	// 随机值
	return 0;
}
*/


/*
//	传值 和 传引用效率比较

#include<Windows.h>
struct A
{
	int array[10000];
	int _size;
};

void TestRef(A param)	//	传值
{}

void TestRef(A* param)	//	传地址
{}

void TestRef(A& param)	//	传引用
{}

void Test()
{
	A a;
	size_t begin = GetTickCount();
	for (size_t i = 0; i < 10000; i++)
	{
		TestRef(a);
		TestRef(&a);
		TestRef(a);
	}

	size_t end = GetTickCount();
	cout << end - begin << endl;
}

int main()
{
	Test();
	return 0;
}
*/


//	指针和引用的区别？ **很重要** 
/*
int main()
{
	int a = 10;
	int* pa = &a;
	*pa = 20;

	int& ra = a;
	ra = 20;
	return 0;
}
//	结论：引用和指针在底层的处理方式完全一致，引用在底层就是按照指针来处理的
*/


void Swap(int* left, int* right)	// 临时变量
{
	int temp = *left;
	*left = *right;
	*right = temp;
}

void Swap(int& Left, int& Right)
{
	int temp = Left;
	Left = Right;
	Right = temp;
}

int main()
{
	int a = 1;
	int b = 2;
	Swap(&a, &b);	//
	Swap(a, b);
	return 0;
}