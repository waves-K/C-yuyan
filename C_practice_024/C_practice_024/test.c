//	����һ������

//#include<stdio.h>

//int main()
//{
//	int arr1[10];
//
//	//���ַ����Ƿ������ȷ����һ������
	//int count = 10;
	//int arr2[count];	//����д���Ǵ���ģ�����Ĵ��������У�[ ]�е����ݱ����ǳ���������ʹ�ñ���

//	char arr3[10];	//����һ���ַ�����
//	float arr4[1];	//����һ������������
//	double arr[20];	//����һ��˫��������
//}

//	��ʼ������
//  ����ĳ�ʼ����ָ���ڴ��������ͬʱ�����������һЩ����ĳ�ʼֵ��

//int main()
//{
	//int arr1[10] = { 1,2,3 };	// ����ȫ��ʼ��
	//int arr2[] = { 1,2,3,4 };
	//int arr3[5] = { 1,2,3,4,5 };
	//char arr4[3] = { 'a','98','c' };
	//char arr5[] = { 'a','b','c' };
	//char arr6[] = "abcdef";
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
	

	int arr[10] = { 1,3,3,4,5 };
	/*printf("%d ", arr);*/
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	char arr1[4] = { 'a','b','c','\0' };	
//	char arr2[] = { 'a',98,'c','\0' };	
//	char arr3[] = "abc";		
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	char arr1[4] = { 'a','b','c' };
//	char arr2[] = { 'a',98,'c', };
//	char arr3[] = "abc";
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", strlen(arr3));
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int arr[4] = { 1,2,3,4,5 };
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr2[] = { 1, 2, 3, 4 };
//	int arr3[5] = { 1,2,3,4,5 };	
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	int i = 0;
//
//	// ��ӡ��������ʱ
//	for (i = 0; i < sz2; i++)
//	{
//		printf("%d ", arr2[i]);		// ��ӡ��������
//	}
//
//	int sz3 = sizeof(arr3) / sizeof(arr3[0]);
//	for (i = 0; i < sz3; i++)
//	{
//		printf("%d ", arr3[i]);		// ��ӡ��������
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 1, 2, 3 };	  // ����ȫ��ʼ��������ֻ��ʼ�������ڵĲ���Ԫ�أ�ʣ�µ�Ԫ��Ĭ��Ϊ�� 0 
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//
//	// ��ӡ��������ʱ
//	for (i = 0; i < sz1; i++)
//	{
//		printf("%d ", arr1[i]);		// ��ӡ��������
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}


#if 0
int main()
{
	int arr1[10] = { 1, 2, 3 };	  //����ȫ��ʼ��������ֻ��ʼ�������ڵĲ���Ԫ�أ�ʣ�µ�Ԫ��Ĭ��Ϊ�� 0 
	int arr2[] = { 1, 2, 3, 4 };
	int arr3[5] = { 1,2,3,4,5 };
	char arr4[3] = { 'a','98','c' };	// �ַ������ʼ���������ĳ�ʼ���ǲ�����" \0 "��������־�ġ��ڽ��������󳤶�ʱ�ͻ�������ֵ����ʹ��" %s "���ʱ�ͻ��������
	char arr5[] = { 'a','b','c' };
	char arr6[] = "abcdef";		// �����"abcdef"���ַ����������ĳ�ʼ����ʽĬ��Ϊĩβ��һ��" \0 "���ڽ����ַ����󳤶� ���� ʹ��" %s "�������ʱ�Ͳ������ ���ֵ �� ���롣
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	for (i = 0; i < sz1; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");

	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	for (i = 0; i < sz2; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");

	int sz3 = sizeof(arr3) / sizeof(arr3[0]);
	for (i = 0; i < sz3; i++)
	{
		printf("%d ", arr3[i]);
	}
	printf("\n");

	printf("%s ", arr4);
	printf("\n");

	printf("%s ", arr5);
	printf("\n");

	printf("%s ", arr6);
	printf("\n");
	system("pause");
	return 0;
}
#endif