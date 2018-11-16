//	创建一个数组

//#include<stdio.h>
//
//int main()
//{
//	int arr1[10];
//
//	//这种方法是否可以正确创建一个数组
//	int count = 10;
//	int arr2[count];	//这种写法是错误的，数组的创建过程中，[ ]中的内容必须是常量，不能使用变量
//
//	char arr3[10];	//创建一个字符数组
//	float arr4[1];	//创建一个单精度数组
//	double arr[20];	//创建一个双精度数组
//}

//	初始化数组
//  数组的初始化是指，在创建数组的同时给数组的内容一些合理的初始值。

//int main()
//{
//	int arr1[10] = { 1,2,3 };	// 不完全初始化
//	int arr2[] = { 1,2,3,4 };
//	int arr3[5] = { 1,2,3,4,5 };
//	char arr4[3] = { 'a','98','c' };
//	char arr5[] = { 'a','b','c' };
//	char arr6[] = "abcdef";
//	return 0;
//}



//	数组在内存中的分配

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[3] = { 'a','b','c' };
//	char* p = "abcdef";
//	return 0;
//}


//	一维数组的使用

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



//	一维数组在内存中的存储

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

