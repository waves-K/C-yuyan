// 指针 +- 整数

//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int n = 10;
//	char *pc = (char*)&n;
//	int *pi = &n;
//	printf(" &n  -> %p\n", &n);
//	printf(" pc  -> %p\n", pc);
//	printf(" pi  -> %p\n", pi);
//	printf("pc+1 -> %p\n", pc + 1);
//	printf("pi+1 -> %p\n", pi + 1);
//	system("pause");
//	return 0;
//}



// 解引用指针

//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int n = 0x11223344;
//	char *pc = (char*)&n;
//	int *pi = &n;
//	*pc = 0x55;
//	*pi = 0;
//
//	system("pause");
//	return 0;
//}





//#include<stdio.h>
//#include<windows.h>

//int main()
//{
//	int a[10];
//	int *p = &a[5];
//	int *q = &a[8];
//
//	char *m = (char*)&a[5];
//	char *n = (char*)&a[8];
//	printf("%d\n", q - p);
//	printf("%d\n", p - q);
//	printf("\n");
//	printf("%d\n", n - m);
//	printf("%d\n", m - n);
//	system("pause");
//	return 0;
//}


//1. 将一个数组中的数据按相反的顺序存储；
//int a[10] = { 1,2,3,4,5,6,7,8,9,0 }
//处理完成之后，数组的内容变成{ 0,9,8,7,6,5,4,3,2,1 }

//方法一：
//#include<stdio.h>
//#include<Windows.h>
//
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	int size = sizeof(a) / sizeof(a[0]);
//	int *start = a;
//	int *end = a + size - 1;
//	while (start < end) {
//		*start ^= *end;
//		*end ^= *start;
//		*start ^= *end;
//		start++;
//		end--;
//	}
//	printf("a[] = ");
//	for (; i < size; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}




//2. 分别数组和指针两种方式对 10 个整数由大到小排序
//数组法：
//#include<stdio.h>
//#include<Windows.h>
//
//void my_Sort(int a[], int size) {
//	int i = 0;
//	for (; i < size - 1; i++) {
//		int j = 0;
//		int flag = 0;
//		for (; j < size - 1 - i; j++) {
//			if (a[j] < a[j + 1]) {
//				flag = 1;
//				a[j] ^= a[j + 1];
//				a[j + 1] ^= a[j];
//				a[j] ^= a[j + 1];
//			}
//		}
//		if (flag == 0) {
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int a[] = { 3,2,5,32,2,5,7,8,4,0 };
//	int size = sizeof(a) / sizeof(a[0]);
//	int i = 0;
//	printf("a[] = ");
//	for (i = 0; i < size; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	my_Sort(a, size);
//	printf("a[] = ");
//	for(i = 0; i < size; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}


// 指针法
//#include<stdio.h>
//#include<Windows.h>
//
//void my_Sort(int a[], int size) {
//	int i = 0;
//	for (; i < size - 1; i++) {
//		int *p = a;
//		int flag = 0;
//		for (; p < a + size - 1; p++) {
//			if (*p < *(p + 1)) {
//				flag = 1;
//				*p ^= *(p + 1);
//				*(p + 1) ^= *p;
//				*p ^= *(p + 1);
//			}
//		}
//		if (flag == 0) {
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int a[] = { 3,2,5,32,2,5,7,8,4,0 };
//	int size = sizeof(a) / sizeof(a[0]);
//	int i = 0;
//	printf("a[] = ");
//	for (i = 0; i < size; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	my_Sort(a, size);
//	printf("a[] = ");
//	for(i = 0; i < size; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}



