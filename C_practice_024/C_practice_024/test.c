//	����һ������

//#include<stdio.h>
//
//int main()
//{
//	int arr1[10];
//
//	//���ַ����Ƿ������ȷ����һ������
//	int count = 10;
//	int arr2[count];	//����д���Ǵ���ģ�����Ĵ��������У�[ ]�е����ݱ����ǳ���������ʹ�ñ���
//
//	char arr3[10];	//����һ���ַ�����
//	float arr4[1];	//����һ������������
//	double arr[20];	//����һ��˫��������
//}

//	��ʼ������
//  ����ĳ�ʼ����ָ���ڴ��������ͬʱ�����������һЩ����ĳ�ʼֵ��

//int main()
//{
//	int arr1[10] = { 1,2,3 };	// ����ȫ��ʼ��
//	int arr2[] = { 1,2,3,4 };
//	int arr3[5] = { 1,2,3,4,5 };
//	char arr4[3] = { 'a','98','c' };
//	char arr5[] = { 'a','b','c' };
//	char arr6[] = "abcdef";
//	return 0;
//}



//	�������ڴ��еķ���

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[3] = { 'a','b','c' };
//	char* p = "abcdef";
//	return 0;
//}


//	һά�����ʹ��

//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//	һά�������ڴ��еĴ洢

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}
	system("pause");
	return 0;
}

