//  �ж� 1000-2000 ��֮�������

//����һ��

//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//
//	// for ѭ����ȡ 1000-2000 ��֮������
//	for (year = 1000; year <= 2000; year++) {
//
//		// ��һ���ж�������������ܱ� 4 �����������ܱ� 100 ����
//		if ((year % 4 == 0) && (year % 100 != 0)) {
//			printf("%d ", year);	// ��ӡ����
//			count++;	// ������ͳ������ĸ���
//		}
//
//		// �ڶ����ж�������������ܱ� 400 ����
//		if (year % 400 == 0) {
//			printf("%d ", year);	// ��ӡ����
//			count++;	// ������ͳ������ĸ���
//		}
//	}
//	printf("\ncount = %d \n", count);
//	system("pause");
//	return 0;
//}


////������������ʵ��
//

//#include<stdio.h>
//#include<stdlib.h>
//
//// ��������
//int is_leap(int y)
//{
//	// ������ж�����
//	// ���������ͷ��� 1 �������������ͷ��� 0 .
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//
//	for (year = 1000; year <= 2000; year++) {
//		// �������ã��������ֵΪ 1 ���ӡ�����򲻴�ӡ
//		if (is_leap(year)) {
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}


// ��������

//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//
//	// for ѭ����ȡ 1000-2000 ��֮������
//	for (year = 1000; year <= 2000; year++) {
//
//		// �ж�������������ܱ� 4 �����������ܱ� 100 �����������ܱ� 400 ����
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) 
//		{
//			printf("%d ", year);	// ��ӡ����
//			count++;	// ������ͳ������ĸ���
//		}
//	}
//	printf("\ncount = %d \n", count);
//	system("pause");
//	return 0;
//}