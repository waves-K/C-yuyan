//C_practice_002


//1. �����������α�����ֵ��������ֵ�����ݽ��н�����
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	int t = 0;
	printf("���������������ֱ��a,b:\n");
	scanf("%d%d", &a, &b);
	t = a;
	a = b;
	b = t;
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}


//2. ����������ʱ���������������������ݣ������⣩
//����һ��
//ʹ����ѧ�������мӼ�����
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("��������������a��b��\n");
//	scanf("%d%d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}
//��������
//ʹ�����ķ�������ֵ����
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("����������������a,b:\n");
//	scanf("%d%d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}

//3. ��10 �����������ֵ��

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a[10] = {0};
//	int max = 0;
//	printf("����������10��������\n");
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i <= 9; i++)
//	{
//		max = a[0];
//		if (a[i] > max) {
//			max = a[i];
//		}
//	}
//	printf("��10�������������ǣ�%d\n", max);
//	system("pause");
//	return 0;
//}


//4. �����������Ӵ�С�����
//�������бȽϣ��ʵ�����ֵ
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	printf("������������������\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b) {
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (b < c) {
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d>%d>%d\n", a, b, c);
//	system("pause");
//	return 0;
//}


//5. �������������Լ����
//����һ��
//շת����������������нϴ��������С������
//			  �������Ϊ 0�����С��������
//			  �������������Լ���������
//			  ����Ϊ 0�����ý�С����������
//			  ����ֱ������Ϊ 0������Ϊ 0 ʱ
//			  �Ľ�С���������Լ���� 
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	printf("��������������������\n");
//	scanf("%d%d", &a, &b);
//	if (a < b) {
//		t = a;
//		a = b;
//		b = t;
//	}
//	while (a % b != 0) {
//		int temp = 0;
//		temp = a % b;
//		a = b;
//		b = temp;
//	}
//	printf("a,b�����Լ��Ϊ��%d", b);
//	system("pause");
//	return 0;
//}
