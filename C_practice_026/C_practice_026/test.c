//#include<stdio.h>
//#include<Windows.h>
//
//void *ret;	// void ��һ�������ͣ��������ǲ����Զ��������
//			// ����һ����������Ҫ�ľ��ǿ��ٿռ䣬���ٵĿռ��С�������й�
//			// ���� void* �Ϳ��Զ�������ˣ���Ϊ����һ��ָ�룬
//
//void bug() {
//	int start = 0;
//	int *p = &start;
//	p += 2;
//	*p = (int)ret;
//	printf("haha, I am a bug!!\n");
//	Sleep(3000);
//}
//int fun(int x, int y) {
//	//printf("hello world!\n");
//	//int z = x + y;
//	//printf("%d\n", y);
//	//int *p = &x;
//	//p++;// ��ָ���һ���������Ǽ�һ��ʵ�����Ǽ���ֻ�����͵Ĵ�С������ָ��������ͣ���ô��һ���൱�ڼ���
//	//*p = 20;
//	//printf("%d\n", y);
//	int *p = &x;
//	p--;
//	ret = *p;
//	*p = (int)bug;
//	printf("I am fun function!!\n");
//	return 0;
//}
//
//int main()
//{
//	//printf("hello world!\n");
//	//fun();
//
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	printf("I am main function!\n");
//	c = fun(a, b);
//	// __asm ����C���Ե��в���һ�����
//	__asm {
//		sub esp, 4
//	}
//	printf("you should run here! : %d\n", c);
//
//	system("pause");
//	return 0;
//}


// ����һ������ֵ���޷��ţ�������ת��Ϊ�ַ�����ӡ��
// �������룺1234�����1 2 3 4.

// ����˼·
//	1. �ж��Ƿ����ʹ�õݹ�
//  2. ����ܣ����Ȼ��������⣬Ȼ��������Ĺ�ģ�ǲ���Խ��ԽС������ǲ����еݹ����

// ��ʹ�õݹ�ⷨ��ģ10Ȼ���ٳ���10�������ķ����ó�����˳����4 3 2 1����ʱ���԰����Ƿ��������У��������ǵ����һ������ӡ�����ͺ���

// �ݹ鷽�����
// ʹ�õݹ�ʱ�Ͳ����ȴ�ӡ 4 ��
//#include<stdio.h>
//#include<stdlib.h>
//#include<windows.h>
//
//void printInt(int x) {	
//	// �������ﴫ�������� 12
//	// �������������Եݹ飬�ݹ��ȥ�ͳ���12 / 10 = 1��
//	// ���Դ��������� 1���������������ʹ�ӡ���ַ� ��1��
//	// '1'�ַ����֮�������أ��������ص�ʱ�򷵻ص� printInt(x / 10);
//	// 
//	if (x > 9) {
//		printInt(x / 10);	// ��������һ�κ�������
//	}
//	putchar(x%10 + '0');	// putchar ��ǰ�����
//	putchar(' ');
//}
//
//int main()
//{
//	printInt(1234);
//	printf("\n");
//	system("pause");
//	return 0;
//}



// ��д��������������ʱ���������ַ����ĳ��ȡ�

// ����˼·
// 1.�ַ����ĳ�����C���Ե�����Ҫ�� '\0' Ϊ��������
// 2.���ϵ������ƽ��� '\0' 
// ����˵��һ����"abcdefg" �ַ�����Ҫ������ַ����ĳ���
// ��ʵ�������� 1 + "bcdefg" �ĳ��ȣ�
// ��"bcdefg" �ĳ������� 1 + "cdefg"
// ....
// ���ջ����ַ���Խ��Խ�̣����̵�'\0'
// �������'\0' ˵������ַ����ĳ���Ϊ 0
// �����������'\0' ��ֱ�� return 0

//#include<stdio.h>
//#include<stdlib.h>
//#include<Windows.h>
//
//// ��Ϊ����Ҫ���Ĺ��������ַ������ȣ�������ַ��������޸�
//// ���Բ������ּ���һ�� const ��Ϊ����
//int myStrlen(const char * str) {
//	if (*str == '\0') {
//		return 0;
//	}
//	return 1 + myStrlen(str + 1);
//}
//
//int main()
//{
//	int len = myStrlen("hello world");
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}



// �� n �Ľ׳ˣ������������

//#include<stdio.h>
//#include<stdlib.h>
//#include<windows.h>
//
//// ������
////int factorial(int n) {
////	int sum = 1;
////	int i = 2;
////	for (i = 2; i <= n; i++) {
////		sum *= i;
////	}
////	return sum;
////}
//
//
//// �ݹ鷨
//int factorial_r(int n) {
//	// 5! 5*4! 5*4*3! ... 
//	if (n == 1) {
//		return 1;
//	}
//	return n * factorial_r(n - 1);
//}
//int main()
//{
//	//int n = factorial(5);
//	int n = factorial_r(5);
//	printf("%d\n", n);
//	system("pause");
//	return 0;
//}