//int Add(int left, int right);
//double Add(int, int);
//
//// �������������ܹ������أ���Ϊʵ�ζ������ͣ��ڵ��õ�ʱ���������֪�����׵�����һ������
////��Ȼ�����������ķ���ֵ����ͬ�������������뷵��ֵ�޹ء�
//
//int main()
//{
//	Add(1, 2);
//	Add(1, 2);
//	return 0;
//}
//
//// �� C++ ������ñ������� C���Եķ�ʽ���б��룿
////	extern "C"�����þ��ǣ���C++�����У���һ����������C���Եķ����б���
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
//// C�����У����������м��ַ�ʽ��
//// ��ֵ �� ����ַ��	��ͬ�㣺�����Ǵ�ֵ���Ǵ���ַ���������������ᴴ��һ����ʱ����
////					��ͬ�㣺
//
//
////	1.��ֵ		�ŵ㣺1.�������޸��ⲿ��ʵ��ʱ����ʹ�����ڲ��޸���Ҳ����Ӱ���ⲿ��ʵ��
////					  2.����д�����򵥣����Ҳ���Ҫ��ָ����н�����
////				ȱ�㣺����ڴ���ַ���������޸��ⲿ��ʵ��
//void Swap(int left, int right)
//{
//	int tmp = left;
//	left = right;
//	right = tmp;
//}
//
//// 2.����ַ		�ŵ㣺����ͨ���޸��β����ﵽ�ı����ʵ�ε�Ŀ��
////				ȱ�㣺1.��Щ�����ʵ���ǲ���Ҫ�޸ĵģ����ǰ������ִ��εķ�ʽ�ֲ��ò�����ָ��ķ�ʽ����
////					  ����˵������һ�������ﶨ����һ���ṹ�壬����ṹ��ıȽϴ󣬴�ʱһ����ѡ�񴫵�ַ��
////					  ��ʽ���д��Σ�����������������ʱ�򲻹��Ͻ�������£�����˵��������ͨ���͵�ָ�룬
////					  ��ô���п��ܽ����ں��������������ʱ��С�ľ�ͨ��ָ�����ߵ�ʵ�θ��޸��ˡ�
////					  2.ÿһ�β���ǰ����Ҫ���������п�
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
//	// ���ñ������ĸ��������ж����ž�ֻ�������������ʹ�ã��������������Ͳ��������ˣ�
//	// ������� rc ���ñ���ֻ���� if �����������ʹ�á� �� ʵ�� ֻҪ�ں������������ھ�һֱ����ʹ��
//	//	˵��ʵ����������ڱ����õ��������ڳ�
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


// ������

#include<iostream>
using namespace std;

int main()
{
	const int a = 10;	// ��ʱ a ʱ����
	// �� a ȡһ��������ȡһ����ͨ���͵����ñ���
	int& ra = a;	// ����ʱ�ͻᱨ������Ϊ�������ͨ���͵����ñ������ͻ�� a ��ֵ���޸ĵ���������� a ��һ�����������ܱ��޸ġ�

	// ��ȷд��
	const int a = 10;
	const int& ra = a;

	return 0;
}