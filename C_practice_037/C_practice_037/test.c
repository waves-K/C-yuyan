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






#include<stdio.h>
#include<windows.h>

int main()
{
	int a[10];
	int *p = &a[5];
	int *q = &a[8];

	char *m = (char*)&a[5];
	char *n = (char*)&a[8];
	printf("%d\n", q - p);
	printf("%d\n", p - q);
	printf("\n");
	printf("%d\n", n - m);
	printf("%d\n", m - n);
	system("pause");
	return 0;
}



