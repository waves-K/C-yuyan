#define _CRT_SECURE_NO_WARNINGS

//ʹ��if...else...���������������߼�
//�� x > 0 ʱ��y = 1;
//�� x == 0 ʱ��y = 0;
//�� x < 0 ʱ��y = -1;


#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("������x��ֵ��\nx = ");
//	scanf("%d", &x);
//	if (x > 0)
//		printf("y = 1\n");
//	else if (x == 0)
//		printf("y = 0\n");
//	else
//		printf("y = -1\n");
//	system("pause");
//	return 0;
//}

//��� 1-100 ֮��Ļ���

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++) {
//		if (i % 2 == 1){
//			printf("%d ", i);
//			count++;
//		}
//		else
//			// continue ��������ѭ��
//			// break ����ѭ��
//			continue;
//	}
//	printf("\ncount = %d\n", count);
//	system("pause");
//	return 0;
//}

//�ж������������Ƿ�����ͬ��Ԫ�أ��о�������С���û�о������û�С�

//int main()
//{
//	int arr1[3] = { 0 };
//	int arr2[4] = { 0 };
//	int i = 0;
//	int j = 0;
//	printf("��ȡһ�����飺\narr1[3] = ");
//	for (i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++) {
//		scanf("%d", &arr1[i]);
//	}
//	printf("\n��ȡ��һ�����飺\narr2[4] = ");
//	for(j = 0; j < sizeof(arr2) / sizeof(arr2[0]); j++) {
//		scanf("%d", &arr2[j]);
//	}
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
//		for (j = 0; j < sizeof(arr2) / sizeof(arr2[0]); j++) {
//			if (arr1[i] == arr2[j]) {
//				printf("����ͬԪ�أ�\n");
//				system("pause");
//				//ֻҪ�������˴�����ִ������� return 0 ������ִ�к�ͽ������ó���
//				return 0;
//			}
//		}
//	}
//	printf("û����ͬԪ�أ�\n");
//	system("pause");
//	return 0;
//}

//return ���Խ�������������������������ڵĺ���
//eg:����������� age = 0 < 18; �����δ���ꡱ��ִ�е�һ�� return 0, �������ú���������ӡ��hehe��
//		��� age = 20 > 18; ��������ꡱ��������һ�� return 0, ִ�еڶ��� return 0,��ӡ��hehe��
//int main()
//{
//	int age = 0;
//	if (age < 18) {
//		printf("δ����\n");
//		system("pause");
//		return 0;
//	}
//	else {
//		printf("����\n");
//	}
//	printf("hehe\n");
//	system("pause");
//	return 0;
//}

//�����ͺ�����бȽ�

//����� #define EXP 0.001 �Ƕ���ı�ʶ�������������涨��ȷ�ȣ���С��������λ��Ч
//���ڸ��������ڴ����� ������ �ķ�ʽ���д洢��������Щ ʮ���� С�����ڴ��о��޷���ȷ�洢
//���Ȼ��ɾ��ȵĶ�ʧ��һ����ʧ�Ϳ��ܼ��㲻׼ȷ���ʸ����������á� == ��ֱ�ӱȽϡ�
//���ǿ��Ի�һ��˼·���������ǿ����Լ��涨һ����ȷ�ȣ�Ȼ�������Ϊ��׼�����������
//					���ü�����ʵ�ָ�����֮��ıȽϡ�
//#define EXP 0.001
//int main()
//{
//	double i = 20.0;
//	double j = i / 6.0;		// ���� j = 3.33333...
//	if (i == j * 6.0)		
//		printf("equal\n");
//	else
//		printf("not equal\n");
//	system("pause");
//	return 0;
//}

//�ж�һ���������ǲ��ǵ��� 0.0 ����ȷд��
//#define EXP 0.00001
//int main()
//{
//	double a = 0.0000001;
//	if ((a > -EXP) && (a < EXP))
//		printf("a = 0.0\n");
//	else
//		printf("a != 0.0\n");
//	system("pause");
//	return 0;
//}
////����Ľ���� a = 0.0

//�ƹ㣺�ж�һ���������ǲ��ǵ��� 20.0
//
//#define EXP 0.00000001
//int main()
//{
//	double a = 0.0000000000001;
//	if(((a - 20.0)>-EXP && ((a - 20.0)<EXP)))
//		printf("��\n");
//	else
//		printf("����\n");
//	system("pause");
//	return 0;
//}


// float: 4 �ֽڣ�32 bit��
// double: 8 �ֽڣ�64 bit�������ڴ�ֻ���� 52 �� bit ���洢С������������

//��һԪ���η��̵Ľ�
//#include<math.h>
//#define EXP 0.00001
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	double disc = 0.0;
//	printf("������a,b,c��ֵ��\n");
//	scanf("%lf%lf%lf", &a, &b, &c);
//	if ((a >= -EXP) &&(a <= EXP))
//		printf("����һԪ���η��̣�\n");
//	else {
//		disc = b * b - 4 * a * c;
//		if ((disc >= -EXP) && (disc <= EXP))
//			printf("%lf\n", (-b) / 2 * a);
//		else if (disc > 0.0)
//			printf("%lf  %lf\n", ((-b) + sqrt(disc)) / 2 * a, ((-b) - sqrt(disc)) / 2 * a);
//	}
//	system("pause");
//	return 0;
//}

//������
//    ��ʾ�ж�ʱ������ж�������г�������ðѳ������� �Ⱥ� �� ���
//	  eg:
//		int num = 1;
//		if (5 == num) {
//			printf("hehe\n");
//		}



//switch ���

//ʵ������һ����������ж�
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}

//�ı�Ҫ��
// 1. ���� 1-5 �����workday��;
// 2. ���� 6-7 �����weekend��

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) {
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("workday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	// default �����ã�
//	//    �����ʽ��ֵ�����е� case ��ǩ��ֵ����ƥ��ʱ�����е���䶼�ᱻ����
//	//�����򲢲�����ֹ��Ҳ���ᱨ����Ϊ��������� C �в�����Ϊ�ʺϴ���
//	//�����Ҫ��������⣬������� switch ����м���һ�� default��break;
//	// default ��ǩ���Գ������κ�һ�� case ��ǩ���Գ��ֵ�λ�ã��� switch ���ʽ��ֵ
//	//��ƥ������ case ��ǩ��ֵʱ����� default �Ӿ��������ͻ�ִ�С�
//	//���ԣ�ÿ�� switch ���ֻ����һ�� default �Ӿ䡣
//	default:
//		break;
//	}
//	system("pause");
//	return 0;
//}

//��̺�ϰ�ߣ���ÿ�� switch ����ж���һ�� default �Ӿ䣬���������ں������һ�� break;


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n) {
//	case 1:
//		m++;				// m == 3 
//	case 2:
//		n++;				// n == 2
//	case 3:
//		switch (n) {
//		case 1:
//			n++;			// n == 3
//		case 2:
//			m++;			// m == 4
//			n++;			// n == 4
//			break;			//�����ڲ� switch ���
//		}
//	case 4:
//		m++;				// m == 5
//		break;				// ������� switch ���
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);	// m = 5, n = 3
//	system("pause");
//	return 0;
//}

// break ֻ�������Լ��� switch


//goto ���
//���鲻Ҫ����ʹ�� goto ��䣬��Ȼ�ᷢ���������
//һ���ػ�����

//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("���Խ��� 1 ���Ӻ�ػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//
//	// strcmp �ַ����Ƚϣ���ͬ == 0������ͬ != 0
//	if (0 == strcmp(input, "������")) {
//		// shutdown -a  ȡ���ػ�
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//��ѭ��ʵ��һ���ػ�����

//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//	while (1) {
//		printf("���Խ����� 1 ���Ӻ�ػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		if (0 == strcmp(input, "������")) {
//			system("shutdown -a");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}

