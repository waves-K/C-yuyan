//C_practice_003

#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
//1.������A�е����ݺ�����B�е����ݽ��н�����������һ����
//����˼·��������Ҫ�Ӽ��̻�ȡ����������ͬ������
//			Ȼ�������������±���ȵ�ֵ���н���
//			����������Ҫ����һ����ʱ���� tmp ��Ϊֵ����������
#include<stdio.h>
//int main()
//{
//	int a[5] = { 0 };
//	int b[5] = { 0 };
//	int temp = 0;
//	int i = 0;
//
//	//��ȡ����
//	printf("��������������Ϊ 5 �����飺\n");
//	printf("a[5]= ");
//	for (i = 0; i < 5; i++) {
//		scanf("%d", &a[i]);
//	}
//	printf("b[5]= ");
//	for (i = 0; i < 5; i++) {
//		scanf("%d", &b[i]);
//	}
//
//
//	//�����������±���ͬ��Ԫ�ؽ���ֵ����
//	for (i = 0; i < 5; i++) {
//		tmp = a[i];
//		a[i] = b[i];
//		b[i] = tmp;
//	}
//
//	//���������Ľ��
//	printf("������Ľ��Ϊ��\na[5] = ");
//	for (i = 0; i < 5; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\nb[5] = ");
//	for (i = 0; i < 5; i++) {
//		printf("%d ", b[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//����Ľ�
//int main()
//{
//	int arr1[5] = { 0 };
//	int arr2[5] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	printf("��ȡ�������飺\narr1[5] = ");
//	for (i = 0; i < sz; i++) {
//		scanf("%d", arr1);
//	}
//	printf("arr2[5] = ");
//	for (i = 0; i < sz; i++) {
//		scanf("%d", arr2);
//	}
//	
//	for (i = 0; i < sz; i++) {
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < sz; i++) {
//		printf("arr1[5] = %d \n", arr1[i]);
//	}
//	for (i = 0; i < sz; i++) {
//		printf("arr2[5] = %d \n", arr2[i]);
//	}
//	
//	system("pause");
//	return 0;
//}


//2. ����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ��
//����˼·���������ǿ��Խ�1-100֮�������Ϊ�������ż����
//			Ȼ��ֱ������ͣ�������������͵Ľ����ż������͵Ľ�������

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum1 = 0;
//	double sum2 = 0;
//	double sum = 0;

//��������ͣ�ע�⣺����һ���� 1.0 / i�� ������1 / i
//	for (i = 1; i <= 99; i += 2) {
//		sum1 = (sum1 + 1.0 / i);	
//	}					

//ż�������
//	for (i = 2; i <= 100; i += 2) {
//		sum2 = (sum2 - 1.0 / i);	
//	}

//	sum = sum1 + sum2;
//	printf("%lf\n", sum);
//	system("pause");
//	return 0;
//}


//��������
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//
//	for (i = 1; i <= 100; i++) {
//		sum = sum + flag * 1.0 / i;
//		flag = flag * (-1);
//	}
//
//	printf("sum = %lf\n", sum);
//	system("pause");
//	return 0;
//}


//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
//����˼·�����Ƚ�1-99֮��������Ϊ��λ����ʮλ����
//			Ȼ��ֱ���9�Ƚϣ������Ⱦͼ�һ�����򲻼�
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 100; i++) {
//		if(i%10 == 9){			//�жϸ�λ���Ƿ����9
//			count++;
//		}
//		if (i / 10 == 9) {		//�ж�ʮλ���Ƿ����9
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	system("pause");
//	return 0;
//}