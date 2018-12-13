#include<stdio.h>
int main()
{
	int a[10];

	int *p = &a[5];
	int *q = &a[8];

	char *m = (char*)&a[5];
	char *n = (char*)&a[8];
	printf("%d\n", q - p);
	printf("%d\n", p - q);
	printf("%d\n", n - m);
	printf("%d\n", m - n);
	system("pause");
	return 0;
}