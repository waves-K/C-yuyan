//// ��ӡ 100-200 ֮�������
//
//
//
////#include<stdio.h>
////#include<stdlib.h>
////
////int main()
////{
////	int i = 0;
////	int j = 0;
////	int count = 0;	// ����
////
////	for (i = 100; i <= 200; i++){
////		for (j = 2; j <= i; j++){
////			if (i % j == 0) {
////				break;
////			}
////		}
////
////		// �� j == i ��ʱ��˵��С�� i ���������������ܱ� i ����������i ������
////		if (j == i) {
////			printf("%d ", i);	// ��ӡ����
////			count++;	// ͳ�� 100-200 ֮�������ĸ���
////		}
////	}
////	printf("\ncount = %d\n", count);
////	system("pause");
////	return 0;
////}
//
////��ӡ100~200֮����������Ҽ�����������
////���������ǳ���1�����������ܱ�����������������
////����һ����100��200֮���ÿһ�����ֳ���2���䱾��
////ǰ�����һ�����֣�����˹����г�������������
////������������������û�����������������Ϊ�������
////#include<stdio.h>
////int main()
////{
////	int i = 0;
////	int count = 0;
////	for(i = 100; i <= 200; i++)
////	{
////		int j = 0;
////		for(j = 2; j <= i; j++)
////		{
////			if (i%j == 0)
////			{
////				break;
////			}
////		}
////		if (i == j)
////		{
////			count++;
////			printf("%d ", i);
////		}
////	}
////	printf("\ncount = %d\n", count);
////	system("pause");
////	return 0;
////}
////��������ʹ��sqrt�����Է���һ�����Ż�sqrt��������ƽ����������������д��
////����1���������a*b��ʽ����a��b֮�����һ��С�ڵ���ab֮���Ŀ�ƽ����
////#include<stdio.h>
////#include<math.h>
////int main()
////{
////	int i = 0;
////	int count = 0;
////	for (i = 100; i <= 200; i++)
////	{
////		int j = 0;
////		for (j = 2; j <= sqrt(i); j++)
////		{
////			if (i % j == 0)
////			{
////				break;
////			}
////		}
////		if (j > sqrt(i))
////		{
////			count++;
////			printf("%d ", i);
////		}
////	}
////	printf("\ncount = %d\n", count);
////	system("pause");
////	return 0;
////}
////������
////#include<stdio.h>
////#include<math.h>
////int main()
////{
////	int i = 0;
////	int count = 0;
////	for(i = 101; i <= 200; i += 2)
////	{
////		int j = 0;
////		for (j = 2; j <= sqrt(i); j++)
////		{
////			if (i % j == 0)
////			{
////				break;
////			}
////		}
////		if (j > sqrt(i))
////		{
////			count++;
////			printf("%d ", i);
////		}
////	}
////	printf("\ncount = %d\n", count);
////	system("pause");
////	return 0;
////}
//
//
////�����ģ�����ʵ��
//
//
//#include<stdio.h>
//#include<stdlib.h>
//
//// ���庯��
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++) {
//		if (n % j == 0) {
//			return 0;
//		}
//		if(j == n){
//			return 1;
//		}
//	}
//}
//
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 100; i <= 200; i++) {
//
//		// ��������
//		// is_primt(i) ��ʾ��� i ������
//		if (is_prime(i)) {
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}