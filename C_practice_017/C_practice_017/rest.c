#define _CRT_SECURE_NO_WARNINGS
//    ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���


//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int num = 0;
//	printf("������һ������");
//	scanf("%d", &num);
//	for (i = 1; i <= num; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d * %d = %2d  ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

////����˷��ھ���
//��������˷��ھ���Ľṹ��
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);// %2d ������������Ľ��λ���ַ��Ҷ��룬������������ַ����ÿո���
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


// ����ʵ��

#include<stdio.h>
#include<stdlib.h>

int lll(int i, int j)
{
	return (i*j);
}
int main()
{
	int i = 0;
	int j = 0;
	int num = 0;
	printf("������һ������");
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		for (j = 1; j <= i; j++) {
			int ret = lll(i, j);
			printf("%d * %d = %2d  ", i, j, ret);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}