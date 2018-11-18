//	创建一个数组

//#include<stdio.h>

//int main()
//{
//	int arr1[10];
//
//	//这种方法是否可以正确创建一个数组
	//int count = 10;
	//int arr2[count];	//这种写法是错误的，数组的创建过程中，[ ]中的内容必须是常量，不能使用变量

//	char arr3[10];	//创建一个字符数组
//	float arr4[1];	//创建一个单精度数组
//	double arr[20];	//创建一个双精度数组
//}

//	初始化数组
//  数组的初始化是指，在创建数组的同时给数组的内容一些合理的初始值。

//int main()
//{
	//int arr1[10] = { 1,2,3 };	// 不完全初始化
	//int arr2[] = { 1,2,3,4 };
	//int arr3[5] = { 1,2,3,4,5 };
	//char arr4[3] = { 'a','98','c' };
	//char arr5[] = { 'a','b','c' };
	//char arr6[] = "abcdef";
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
//	// 打印整型数组时
//	for (i = 0; i < sz2; i++)
//	{
//		printf("%d ", arr2[i]);		// 打印整个数组
//	}
//
//	int sz3 = sizeof(arr3) / sizeof(arr3[0]);
//	for (i = 0; i < sz3; i++)
//	{
//		printf("%d ", arr3[i]);		// 打印整个数组
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 1, 2, 3 };	  // 不完全初始化，即：只初始化数组内的部分元素，剩下的元素默认为是 0 
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//
//	// 打印整型数组时
//	for (i = 0; i < sz1; i++)
//	{
//		printf("%d ", arr1[i]);		// 打印整个数组
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}


#if 0
int main()
{
	int arr1[10] = { 1, 2, 3 };	  //不完全初始化，即：只初始化数组内的部分元素，剩下的元素默认为是 0 
	int arr2[] = { 1, 2, 3, 4 };
	int arr3[5] = { 1,2,3,4,5 };
	char arr4[3] = { 'a','98','c' };	// 字符数组初始化，这样的初始化是不包含" \0 "即结束标志的。在进行数组求长度时就会出现随机值或者使用" %s "输出时就会出现乱码
	char arr5[] = { 'a','b','c' };
	char arr6[] = "abcdef";		// 这里的"abcdef"是字符串，这样的初始化方式默认为末尾有一个" \0 "，在进行字符串求长度 或者 使用" %s "输出操作时就不会产生 随机值 和 乱码。
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