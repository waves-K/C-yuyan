#define _CRT_SECURE_NO_WARNINGS
// ��һ����������������ж��ֲ���

////����һ��
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int left = 0;
//	int mid = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	/*printf("��������Ҫ���ҵ����֣�");
//	scanf("%d", &key);*/
//	while (left <= right) {
//		mid = (left + right) / 2;
//		if (arr[mid] > key) {
//			right = mid - 1;
//		}
//		else if (arr[mid] < key) {
//			left = mid + 1;
//		}
//		else {
//			break;
//		}
//	}
//	if (left <= right) {
//		printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//	}
//	else {
//		printf("�Ҳ���\n");
//	}
//	system("pause");
//	return 0;
//}


//������������ʵ��

//#include<stdio.h>
//#include<stdlib.h>
//
//// ���� bainary_search ���ֲ��Һ���
//// ������int arr[] --> ������������
////	   int k --> ��Ҫ���ҵ�Ԫ��
////	   int sz --> �����С
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz;
//
//	// ��� ���±� <= ���±꣬����бȽ�
//	while (left <= right) {
//
//		int mid = (left + right) / 2;	// �����м�Ԫ��
//		//int mid = left + (right - left) / 2;	// �Ľ������м�Ԫ��
//
//		// �м�Ԫ�� �� Ҫ���ҵ�Ԫ�� ���бȽ�
//		if (arr[mid] > k)	
//		{	
//			right = mid - 1;	//����м�Ԫ�ش���Ҫ���ҵ�Ԫ�أ��ı����±�
//		}
//		else if (arr[mid] == k) 
//		{
//			return mid;			//����м�Ԫ�ص���Ҫ���ҵ�Ԫ�أ������м�Ԫ���±�
//		}
//		else {
//			left = mid + 1;		//����м�Ԫ��С��Ҫ���ҵ�Ԫ�أ��ı����±�
//		}
//	}
//  // �� ���±� > ���±� ʱ���� -1
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;	// �����ܴ�С
//	int ret = binary_search(arr, 7, sz);		// ���ú��������պ�������ֵ
//	if(ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else {
//	printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}

