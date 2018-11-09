// 创建一个数组:
// 实现函数 init( ) 初始化数组;
// 实现 reverse( ) 函数完成数组元素的逆置;
// 实现 empty( ) 清空数组;
// 要求自己设计函数参数，返回值。

// 解题思路：
// 第一：本题是 使用函数 针对数组 进行操作，所以在传参的时候切记: 数组传参传的是数组首元素的地址，而不是数组内容/大小，如果函数内部需要用到数组大小，那么必须在函数外部计算出数组大小然后再进行传参。
// 第二：Init( ) 函数初始化数组，即：给数组中每一个元素赋值，下面代码是使用一个 for 循环将数组初始化为 1-10 的数字。
// 第三：Reverse( ) 函数实现数组元素逆置，这里定义左右下标然后交换两个元素的方法实现数组元素的逆置。
// 第四：Empty( ) 函数清空数组，可以理解为将数组初始化为全 0。

#include<stdio.h>
#include<stdlib.h>

// 定义 Init( ) 函数完成对数组的 初始化
void InitArr(int arr[], int sz)
{
	int i = 0;
	// 采用 for 循环将数组初始化为 1-10 
	for (i = 0; i < sz; i++)
	{
		arr[i] = i + 1;
	}
}

// 定义打印数组的函数
void PrintArr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		// 打印下标为 i 的元素
		printf("%d ", arr[i]);
	}
	printf("\n");
}

// 定义 reverse( ) 函数完成对数组元素的逆置 
void ReverseArr(int arr[], int sz)
{
	int left = 0;	// 左下标
	int right = sz - 1;	// 右下标

	// 交换数组内 "对称" 的两个元素的位置，直到元素左下标 等于 右下标
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;	// 左下标加一
		right--;	// 右下标减一
	}
}

// 定义 Empty( ) 函数实现清空数组
void EmptyArr(int arr[], int sz)
{
	int i = 0;

	// for 循环将数组初始化为全 0
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);	// 数组大小

	// 调用初始化数组的函数
	InitArr(arr, sz);

	// 调用打印数组的函数
	PrintArr(arr, sz);

	// 调用逆置数组元素的函数
	ReverseArr(arr, sz);
	PrintArr(arr, sz);

	// 调用 empty( ) 函数实现清空数组
	EmptyArr(arr, sz);
	PrintArr(arr, sz);

	system("pause");
	return 0;
}