////	����
//
////C�����н�������������ֵ��
//
////	1. ��ֵ
//void Swap(int left, int right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}
////	�ŵ㣺�����ĸ����ò���Ӱ���ⲿ��ʵ��
////	ȱ�㣺����ͨ���������β����ı��ⲿ��ʵ��
//
//
////	2. ����ַ
//void Swap(int* pLeft, int* pRight)
//{
//	int temp = *pLeft;
//	*pLeft = *pRight;
//	*pRight = temp;
//}
////	�ŵ㣺����ͨ���޸ĺ������β����ı���ߵ�ʵ��
////	ȱ�㣺�����ĸ����ã���ʱ����ı���ߵ�ʵ�Σ���ָ����Ҫ�пա����ܶ�ָ�����յ�һ�㡢д�����鷳��ÿ�ζ�Ҫ������
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	return 0;
//}

/*
//	C++ �н�����������������

//	����
//	1. ������ò����¶���һ�����������Ǹ��Ѵ��ڵı���ȡ��һ��������
//			����������Ϊ���ñ��������ڴ�ռ䣬�����������ñ�������һ���ڴ�ռ䡣

#include<iostream>
using namespace std;

// ��֤����ʵ������ñ�������һ���ڴ�ռ�
int main()
{
	int a = 10;
	int& ra = a;
	//	doulle& ra = a;	����д��

	ra = 20;
	cout << &a << endl;
	cout << &ra << endl;
	return 0;
}

//	���õļ�������
int main()
{
	//int& ra;	�����ڶ���ʱ�����ʼ��

	//	һ�����������ж������
	int a = 10;
	int& ra = a;
	int&rra = a;

	//	����һ������һ��ʵ�壬�ٲ�����������ʵ�塰һ��һ���ơ�
	int a = 10;
	int b = 20;

	int& ra = a;
	int& rra = a;
	ra = b;	// �����൱���Ǹ� ra ��ֵ������������
	&ra = b;	// ����� & �������õı�ǣ�����ȡ��ַ����ֻ�������͵ĺ���������ñ�־��

	// ���������õ��������ڳ� ���� ʵ����������ڳ�

	if (1)
	{
		// ����� rb ���� b �ı���������������ֻ��������� if ����У���������������ʧЧ��
		//�������õ���������û��ʵ����������ڳ�
		int& rb = b;
	}

	return 0;
}
*/

#include<iostream>
using namespace std;

/*
//	������ (const ���εı���)

int main()
{
	// ��һ�����
	const int a = 10;
	const int& ra = a;

	// �ڶ������
	const int& b = 10;	// ��һ������ȡһ������

	// ���������
	double d = 12.34;
	int& rd = d;

	const int& rd = d;	// ��Ȼ����ͨ�����룬���ǽ����������Ԥ�ڵ�
						// ����� rd �� d ��������ͬ�Ķ���������ͨ���鿴��ַ�ķ�ʽ������֤
}
*/



/*
//	���õ�ʹ�ó���

//  1. ������

//	���������õķ�ʽ���н��գ������ left ���൱���� a �ı�����right ���൱���� b �ı���
void Swap(int& left, int& right)
{
	int temp = left;
	left = right;
	right = temp;
}

//	ע�⣺������������͵Ĳ��������ں������в���Ҫ�ı��βΣ���ô��� const �������á�Ŀ���Ǳ�֤����İ�ȫ
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


//  2. ������ֵ

//	ע�⣺��������õķ�ʽ��Ϊ�����ķ���ֵ���ͣ����ܷ���ջ�ϵĿռ�
//	���صı�������������һ��Ҫ�Ⱥ������������ڳ�
int& TestRet(int& ret)
{
	int ret = 10;	// ret ��ջ�ϵĿռ䣬��ջ�ռ����ź����Ľ����Ѿ���ϵͳ�ջ�
	return ret;
}

int main()
{
	int b = 10;
	int a = TestRet(b);	// a �����õĿռ�Ϊһ����Ч�Ŀռ�
	printf("%d\n", a);	// 10
	printf("%d\n", a);	// 10
	printf("%d\n", a);	// 10

	int& a = TestRet(b);
	printf("%d\n", a);	// 10
	printf("%d\n", a);	// ���ֵ
	printf("%d\n", a);	// ���ֵ
	return 0;
}
*/


/*
//	��ֵ �� ������Ч�ʱȽ�

#include<Windows.h>
struct A
{
	int array[10000];
	int _size;
};

void TestRef(A param)	//	��ֵ
{}

void TestRef(A* param)	//	����ַ
{}

void TestRef(A& param)	//	������
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


//	ָ������õ����� **����Ҫ** 
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
//	���ۣ����ú�ָ���ڵײ�Ĵ���ʽ��ȫһ�£������ڵײ���ǰ���ָ���������
*/


void Swap(int* left, int* right)	// ��ʱ����
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