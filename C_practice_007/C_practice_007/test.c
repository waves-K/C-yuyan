//whileѭ��

//	��һ��������Ҫ�ظ��ܶ�ε�ʱ�����ǾͿ���ʹ�� while ѭ����ʵ��

//�﷨�ṹ��
//	while(���ʽ)
//		{ѭ�����;}

//����ִ�����̣�
//		�����жϱ��ʽ�� ��� ��
//		���Ϊ �� ��������ִ��ѭ����䣻
//		���Ϊ �� ��������ѭ����

//eg:����Ļ�ϴ�ӡ 1-10 ������
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10) {
//		printf("%d ", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}

//		���������˽⵽������ʹ�� while ������ظ�ĳ���£�
//	��ô���� while ����е� ���ʽ Ϊ�棬��������Ҫ����ѭ��ʱ
//	���Ǿ���Ҫ�õ� break �� continue ������������������ǵ�����
//	���������Ǿ�˵˵ break �� continue ��ʹ��Ч���Լ����ߵ�����
//	
// break ����
//		�� while ѭ����ֻҪ���� break, ��ֹͣ�������е�ѭ����һֱ��ѭ����ֹ��
//	����break ʱ����������ֹ while ѭ���ġ�
//eg:
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10) {
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	system("pause");
//	return 0;
//}
////�������� 1 2 3 4 


// continue ����
//		�� while ѭ���� continue �������ǣ�
//		��ֹ����ѭ����Ҳ����˵����ѭ���� continue ��ߵĴ��벻����ִ�У�
//	����ֱ����ת�� while ����е� �жϲ��֣�������һ��ѭ����ڵ��жϡ�

//eg1:
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10) {
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}
//�������� 2 3 4 6 7 8 9 10

////eg2:
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//
//	//������ʽ�жϻ�ȡ���ַ��ǲ��� �ļ�������־ 'crtl + z'
//	//������ǣ����������ַ�
//	// EOF = end of file(�ļ�������־)
//	while ((ch = getchar()) != EOF) {
//		putchar(ch);
//	}
//	system("pause");
//	return 0;
//}

////eg3:
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF) {
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//
//		// fflush(stdin) ˢ�����뻺����
//		fflush(stdin);
//	}
//	system("pause");
//	return 0;
//}




//???????


////eg4: getchar ������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char password[10] = {0};
	int ch = 0;
	printf("���������룺>");
	scanf("%s", password);
	while (strcmp(ch = getchar(),"123456" ) != 0); {
		;
	}
	printf("��ȷ��(Y/N)��>");
	ch = getchar();
	if (ch == "Y") {
		printf("OK!\n");
	}
	else if (ch == "N") {
		printf("NO\n");
	}
	system("pause");
	return 0;
}



//��ʾ����ַ��������ƶ������м���
//˼·��
//		��ȷ����Ҫ���������ַ������飬һ�������洢��Ҫ��ӡ���ַ�����һ������ʵ��Ŀ��
//	Ȼ��������Ԫ�ؽ����±�ķ�ʽ���д�ӡ������ѧ����������� left �� right


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit ...";
//	char arr2[] = "##################";
//	int left = 0;
//
//	//int right = sizeof(arr1)/sizeof(arr1[0]) - 2
//	// sizeof ������Ԫ�ص��ֽ��������� \n �� \0, ����������Ҫ �� 2
//
//	// strlen ���ַ������ȣ����� \n ,���� - 1 ���Ǽ�ȥ \n 
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//
//	// while ѭ��ʵ��
//	//while (left <= right) {
//
//	// Sleep(1000) ˯�� 1000 ��; 
//	// sleep �� Windows �ĺ���������Ҫ����#include<windows.h>
//	//	Sleep(1000);
//	//	arr2[left] = arr1[left];
//	//	arr2[right] = arr1[right];
//	//	left++;
//	//	right--;
//	//	printf("%s\n", arr2);
//	//}
//
//	// for ѭ��ʵ��
//	for (left = 0, right = strlen(arr1) - 1; left <= right; left++, right--) {
//		Sleep(1000);
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//	}
//
//	system("pause");
//	return 0;
//}


//2. ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�½���Ρ�
//(ֻ���������������룬���������ȷ����ʾ��¼�ɹ���������ξ�����������˳�����)

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char psw[10] = "";
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 3; i++) {
//		printf("���������룺>");
//		scanf("%s", psw);
//
//		// strcmp �Ƚ������ַ���
//		if (strcmp(psw, "password") == 0)
//			break;
//	}
//	if (3 == i) {
//		printf("��½ʧ�ܣ�\n");
//	}
//	else
//	{
//		printf("��½�ɹ���\n");
//	}
//	system("pause");
//	return 0;
//}


//���� n �Ľ׳�

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	printf("����� n ��ֵ��\nn = ");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		ret = ret * i;
//	}
//	printf("n! = %d\n", ret);
//	system("pause");
//	return 0;
//}


//���� 1��+ 2��+ �� + n!

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	printf("����� n ��ֵ��\nn = ");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}


//��һ�����������в��Ҿ����ĳ������ n ��
//�۰���ҷ���

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 7;
//	int mid = 0;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		if (arr[mid] > key) {
//			right = mid - 1;
//		}
//		else if (arr[mid] < key) {
//			left = mid + 1;
//		}
//		else
//			break;
//	}
//	if (left <= right)
//		printf("�ҵ��ˣ��±���%d\n", mid);
//	else
//		printf("�Ҳ���\n");
//	system("pause");
//	return 0;
//}




//?????????


//���ʵ��һ�����ֲ��Һ���

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 7;
//	int mid = 0;
//	int bin_search(int arr[], int left, int right, int key);
//	{
//		int mid = 0;
//		while (left <= right) {
//			mid = (left + right) >> 1;
//			if (arr[mid] > key) {
//				right = mid - 1;
//			}
//			else if (arr[mid] < key) {
//				left = mid + 1;
//			}
//			else
//			{
//				system("pause");
//				return mid;//�ҵ��ˣ������±�
//			}
//		}
//		system("pause");
//		return -1;//�Ҳ���
//	}
//}



//��������Ϸ


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("************************************\n");
	printf("**************  1.play  ************\n");
	printf("**************  0.exit  ************\n");
	printf("************************************\n");
}
//TDD-������������
//RAND_MAX--rand �����ܷ�������������ֵ
void game()
{
	int random_num = rand() % 100 + 1;
	int input = 0;
	while (1) {
		printf("������µ�����>:");
		scanf("%d", &input);
		if (input > random_num) {
			printf("�´���\n");
		}
		else if (input < random_num) {
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do {
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ��������������룡\n");
			break;
		}
	} 
	while (input);
	system("pause");
	return 0;
}
