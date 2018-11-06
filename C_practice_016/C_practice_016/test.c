#define _CRT_SECURE_NO_WARNINGS
// 对一个整型有序数组进行二分查找

////方法一：
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
//	/*printf("请输入需要查找的数字：");
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
//		printf("找到了，下标是：%d\n", mid);
//	}
//	else {
//		printf("找不到\n");
//	}
//	system("pause");
//	return 0;
//}


//方法二：函数实现

//#include<stdio.h>
//#include<stdlib.h>
//
//// 定义 bainary_search 二分查找函数
//// 参数：int arr[] --> 整型有序数组
////	   int k --> 需要查找的元素
////	   int sz --> 数组大小
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz;
//
//	// 如果 左下标 <= 右下标，则进行比较
//	while (left <= right) {
//
//		int mid = (left + right) / 2;	// 锁定中间元素
//		//int mid = left + (right - left) / 2;	// 改进锁定中间元素
//
//		// 中间元素 与 要查找的元素 进行比较
//		if (arr[mid] > k)	
//		{	
//			right = mid - 1;	//如果中间元素大于要查找的元素，改变右下标
//		}
//		else if (arr[mid] == k) 
//		{
//			return mid;			//如果中间元素等于要查找的元素，返回中间元素下标
//		}
//		else {
//			left = mid + 1;		//如果中间元素小于要查找的元素，改变左下标
//		}
//	}
//  // 当 左下标 > 右下标 时返回 -1
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;	// 数组总大小
//	int ret = binary_search(arr, 7, sz);		// 调用函数，接收函数返回值
//	if(ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else {
//	printf("找到了，下标是：%d\n", ret);
//	}
//	system("pause");
//	return 0;
//}

