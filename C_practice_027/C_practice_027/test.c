//1.
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//


//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++) {
//		for (b = 1; b <= 5; b++) {
//			for (c = 1; c <= 5; c++) {
//				for (d = 1; d <= 5; d++) {
//					for (e = 1; e <= 5; e++) {
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1)) {
//							if(a * b * c * d * e == 120){
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}



//2.
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ�
//��һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
//

//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++) {
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3) {
//			printf("%c\n", killer);
//		}
//	}
//	system("pause");
//	return 0;
//}


//3.����Ļ�ϴ�ӡ������ǡ�
//
//    1
//   1 1
//  1 2 1
// 1 3 3 1
//1 4 5 4 1

//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			if (j == 0) {
//				arr[i][j] = 1;
//			}
//			if (i == j) {
//				arr[i][j] = 1;
//			}
//			if ((i > 1) && (j > 0)) {
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j <= i; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//4. �ܽ���������֪ʶ��дһƪ���͡�

//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 0; a <= 5; a++) {
//		for (b = 0; b <= 5; b++) {
//			for (c = 0; c <= 5; c++) {
//				for (d = 0; d <= 5; d++) {
//					for (e = 0; e <= 5; e++) {
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1)) {
//							if (a * b * c * d * e == 120) {
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b,
//									c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++) {
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd')
//			+ (killer != 'd') == 3) {
//			printf("%c\n", killer);
//		}
//	}
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			if (j == 0) {
//				arr[i][j] = 1;
//			}
//			if (j == i) {
//				arr[i][j] = 1;
//			}
//			if ((i > 1) && (j > 0)) {
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//
//	int k = 0;
//	for (i = 0; i < 10; i++) {
//		for (k = i; k < 10 - 1; k++) {
//			printf("   ");
//		}
//		for (j = 0; j <= i; j++) {
//			printf("%3d   ", arr[i][j]);
//			
//		}
//		printf("\n");
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			if (j == 0) {
//				arr[i][j] = 1;
//			}
//			if (j == i) {
//				arr[i][j] = 1;
//			}
//			if ((i > 1) && (j > 0)) {
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	int k = 0;
//	for (i = 0; i < 10; i++) {
//		for (k = i; k < 10 - 1; k++) {
//			printf("   ");
//		}
//		for (j = 0; j <= i; j++) {
//			printf("%3d   ", arr[i][j]);
//		}
//		printf("\n");
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}



#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (j == 0) {
				arr[i][j] = 1;
			}
			if (j == i) {
				arr[i][j] = 1;
			}
			if ((i > 1) && (j > 0)) {
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	int k = 0;
	for (i = 0; i < 10; i++) {
		for (k = i; k < 10 - 1; k++) {
			printf("   ");
		}
		for (j = 0; j <= i; j++) {
			printf("%3d   ", arr[i][j]);
		}
		printf("\n");
		printf("\n");
	}
	system("pause");
	return 0;
}