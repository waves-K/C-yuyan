//C_practice_001


//��ӡ100~200֮����������Ҽ�����������
//���������ǳ���1�����������ܱ�����������������
//����һ����100��200֮���ÿһ�����ֳ���2���䱾��
//ǰ�����һ�����֣�����˹����г�������������
//������������������û�����������������Ϊ�������
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for(j = 2; j <= i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}
//��������ʹ��sqrt�����Է���һ�����Ż�sqrt��������ƽ����������������д��
//����1���������a*b��ʽ����a��b֮�����һ��С�ڵ���ab֮���Ŀ�ƽ����
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}
//������
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
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
//
////�ж�1000~2000��֮�������
//������ȷʲô�����꣺�ܱ� 4 �������Ҳ��ܱ� 100 �����������ܱ� 400 ��������
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//	printf("1000-2000��֮����������꣺\n");
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//		if (year % 400 == 0)	//�����ܱ� 400 �������������ϱߵ������� ���� �Ĺ�ϵ��
//								//�����else�Ļ��ͳ��˶�����ϵ���ͻᵼ�½������
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\n����%d������\n", count);
//	system("pause");
//	return 0;
//}
