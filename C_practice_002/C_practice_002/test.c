//C_practice_002


//1. �����������α�����ֵ��������ֵ�����ݽ��н�����
#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int t = 0;
//	printf("���������������ֱ��a,b:\n");
//	scanf("%d%d", &a, &b);
//	t = a;
//	a = b;
//	b = t;
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}


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

//�����������
//	�磺num1 = 3; num2 = 5
//		ת��Ϊ��������Ϊ��num1 = (011); num2 = (101)
//		num1^num2 = (011)^(101) = (110), �� num1^num2 �Ľ������ num1;
//		��ʱ num1 = 6 = (110), num2 = 5 = (101);
//		num1^num2 = (110)^(101) = (011), �� num1^num2 �Ľ������ num2;
//		��ʱ num1 = 6 = (110), num2 = 3 = (011);
//		num1^num2 = (110)^(011) = (101), �� num1^num2 �Ľ������ num1;
//		��ʱ num1 = (101) = 5, num2 = (011) = 3;
//		���ֵ������

//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("����������������:\n");
//	scanf("%d%d", &num1,num2);
//	printf("num1 = %d, num2 = %d\n",num1,num2);
//	num1 = num1^num2;
//	num2 = num1^num2;
//	num1 = num1^num2;
//	printf("num1 = %d ,num2 = %d\n", num1, num2);
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
//	printf("����������10��������\na[10] = ");
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i <10 ; i++)
//	{
//		max = a[0];
//		if (a[i] > max) {
//			max = a[i];
//		}
//	}
//	printf("max = %d\n", max);
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
//	printf("a = %d, b = %d, c = %d\n", a, b, c);
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

//������

//���庯��������ֵ����
//void Swap(int *px, int *py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("���ȡ��������\n");
//	scanf("%d%d%d", &a, &b, &c);
//	printf("a = %d, b = %d, c = %d", a,b,c);
//
//	//���ú��� Swap
//	//ʵ�δ��ݸ��βΣ�ֵ���ݣ�
//	//�β���ʵ�ε�һ����ʱ���������βε��޸Ĳ���ı�ʵ�Ρ�
//
//	if (a < b) {
//	
//	//������Ȼ�ǰ� ʵ�� ���ݸ� �βΣ� ֻ�������� ����ַ
//	//�����϶���ֵ����
//		Swap(&a, &b);
//	}
//	if (a < c) {
//		Swap(&a, &c);
//	}
//	if (b < c) {
//		Swap(&b, &c);
//	}
//	printf("\n%d>%d>%d\n", a, b, c);
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


//�Ľ���

//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("�����num1��num2��ֵ��\n");
//	scanf("%d%d", &num1, &num2);
//	while (num1%num2 != 0) {
//		int tmp = num1 % num2;
//		num1 = num2;
//		num2 = tmp;
//	}
//	printf("���Լ��Ϊ��%d\n", num2);
//	system("pause");
//	return 0;
//}



//������������С������

//	����˼·��������ȷ��С��������ô�㣺
//		����Ҫ�� a��b ������������С������������С������ = a * b / a��b�����Լ��
//	����Ҫ����С���������������Լ����Ȼ����������֮��/���Լ��
//
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	printf("���ȡnum1��num2��ֵ��\n");
//	scanf("%d%d", &num1, &num2);
//	num3 = num1 * num2;
//	while (num1%num2 != 0) {
//		int tmp = num1 % num2;
//		num1 = num2;
//		num2 = tmp;
//	}
//	num3 = num3 / num2;
//	printf("��С������Ϊ��%d\n", num3);
//	system("pause");
//	return 0;
//}
