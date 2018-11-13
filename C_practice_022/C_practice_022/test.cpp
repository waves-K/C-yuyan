//int Add(int left, int right);
//double Add(int, int);
//
//// 这两个函数不能构成重载，因为实参都是整型，在调用的时候编译器不知道到底调用拿一个函数
////虽然这两个函数的返回值不相同，但函数重载与返回值无关。
//
//int main()
//{
//	Add(1, 2);
//	Add(1, 2);
//	return 0;
//}
//
//// 在 C++ 中如何让编译器用 C语言的方式进行编译？
////	extern "C"的作用就是：在C++工程中，把一个函数按照C语言的风格进行编译
//
//extern "C" int Add(int left, int right)
//{
//	return left + right;
//}
//
//int main()
//{
//	Add(1, 2);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//// C语言中：函数传参有几种方式？
//// 传值 和 传地址。	相同点：无论是传值还是传地址，编译器将来都会创建一个临时变量
////					不同点：
//
//
////	1.传值		优点：1.当不想修改外部的实参时，即使函数内部修改了也不会影响外部的实参
////					  2.代码写起来简单，而且不需要对指针进行解引用
////				缺点：相对于传地址，它不能修改外部的实参
//void Swap(int left, int right)
//{
//	int tmp = left;
//	left = right;
//	right = tmp;
//}
//
//// 2.传地址		优点：可以通过修改形参来达到改变外边实参的目的
////				缺点：1.有些情况下实参是不需要修改的，但是按照这种传参的方式又不得不按照指针的方式来传
////					  比如说现在在一个工程里定义了一个结构体，这个结构体的比较大，此时一定会选择传地址的
////					  方式进行传参，但是如果在拟参数的时候不够严谨的情况下，比如说给的是普通类型的指针，
////					  那么很有可能将来在函数体里操作代码时不小心就通过指针把外边的实参给修改了。
////					  2.每一次操作前都需要对他进行判空
//void Swap(int* pleft, int* pright)
//{
//	int tmp = *pleft;
//	*pleft = *pright;
//	*pright = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(a, b);
//	cout << a << " " << b << endl;
//	system("pause");
//	Swap(&a, &b);
//	cout << a << " " << b << endl;
//	system("pause");
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int& ra = a;
//	int& rra = a;
//	int& rb = ra;
//	
//	// 引用变量在哪个作用域中定义着就只可以在这个域中使用，出了这个作用域就不可以用了，
//	// 如这里的 rc 引用变量只能在 if 这个作用域中使用。 而 实体 只要在函数的作用域内就一直可以使用
//	//	说明实体的生命周期比引用的生命周期长
//	if (1)
//	{
//		int& rc = a;
//	}
//
//	ra = 20;
//	rb = b;
//
//	cout << "&a = " << &a << endl;
//	cout << "&ra = " << &ra << endl;
//	system("pause");
//	return 0;
//}


// 常引用

#include<iostream>
using namespace std;

int main()
{
	const int a = 10;	// 此时 a 时常量
	// 给 a 取一个别名，取一个普通类型的引用变量
	int& ra = a;	// 编译时就会报错，因为如果是普通类型的引用变量，就会把 a 的值给修改掉，而这里的 a 是一个常量，不能被修改。

	// 正确写法
	const int a = 10;
	const int& ra = a;

	return 0;
}