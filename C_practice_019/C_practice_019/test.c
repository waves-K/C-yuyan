//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

// ��ͨ����ʵ�֣�

//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int line = 0;
//	int i = 0;
//	int j = 0;
//	printf("������������line = ");
//	scanf("%d", &line);
//	for (i = 1; i <= line; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}



// ������ʵ��

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

// ����������� Print( )
void Print(line)
{
	int i = 0;	// ����
	int j = 0;	// ÿ�е�����

	for (i = 1; i <= line; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d*%2d=%3d  ", i, j, i*j);
		}
		printf("\n");	// һ�д�ӡ��� ����
	}
}

int main()
{
	int line = 0;
	printf("������������line = ");
	scanf("%d", &line);	// ����һ�����֣�ȷ����ӡ�˷��ھ��������
	// �����������
	Print(line);
	system("pause");
	return 0;
}