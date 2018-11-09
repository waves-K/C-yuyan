// ����һ������:
// ʵ�ֺ��� init( ) ��ʼ������;
// ʵ�� reverse( ) �����������Ԫ�ص�����;
// ʵ�� empty( ) �������;
// Ҫ���Լ���ƺ�������������ֵ��

// ����˼·��
// ��һ�������� ʹ�ú��� ������� ���в����������ڴ��ε�ʱ���м�: ���鴫�δ�����������Ԫ�صĵ�ַ����������������/��С����������ڲ���Ҫ�õ������С����ô�����ں����ⲿ����������СȻ���ٽ��д��Ρ�
// �ڶ���Init( ) ������ʼ�����飬������������ÿһ��Ԫ�ظ�ֵ�����������ʹ��һ�� for ѭ���������ʼ��Ϊ 1-10 �����֡�
// ������Reverse( ) ����ʵ������Ԫ�����ã����ﶨ�������±�Ȼ�󽻻�����Ԫ�صķ���ʵ������Ԫ�ص����á�
// ���ģ�Empty( ) ����������飬�������Ϊ�������ʼ��Ϊȫ 0��

#include<stdio.h>
#include<stdlib.h>

// ���� Init( ) ������ɶ������ ��ʼ��
void InitArr(int arr[], int sz)
{
	int i = 0;
	// ���� for ѭ���������ʼ��Ϊ 1-10 
	for (i = 0; i < sz; i++)
	{
		arr[i] = i + 1;
	}
}

// �����ӡ����ĺ���
void PrintArr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		// ��ӡ�±�Ϊ i ��Ԫ��
		printf("%d ", arr[i]);
	}
	printf("\n");
}

// ���� reverse( ) ������ɶ�����Ԫ�ص����� 
void ReverseArr(int arr[], int sz)
{
	int left = 0;	// ���±�
	int right = sz - 1;	// ���±�

	// ���������� "�Գ�" ������Ԫ�ص�λ�ã�ֱ��Ԫ�����±� ���� ���±�
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;	// ���±��һ
		right--;	// ���±��һ
	}
}

// ���� Empty( ) ����ʵ���������
void EmptyArr(int arr[], int sz)
{
	int i = 0;

	// for ѭ���������ʼ��Ϊȫ 0
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);	// �����С

	// ���ó�ʼ������ĺ���
	InitArr(arr, sz);

	// ���ô�ӡ����ĺ���
	PrintArr(arr, sz);

	// ������������Ԫ�صĺ���
	ReverseArr(arr, sz);
	PrintArr(arr, sz);

	// ���� empty( ) ����ʵ���������
	EmptyArr(arr, sz);
	PrintArr(arr, sz);

	system("pause");
	return 0;
}