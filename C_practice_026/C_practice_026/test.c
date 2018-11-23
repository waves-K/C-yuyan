#include<stdio.h>
#include<Windows.h>

void bug() {
	printf("haha, I am a bug!!\n");
	Sleep(3000);
}
int fun(int x, int y) {
	//printf("hello world!\n");
	//int z = x + y;
	//printf("%d\n", y);
	//int *p = &x;
	//p++;// 给指针加一，看起来是加一，实际上是加其只想类型的大小。比如指向的是整型，那么加一就相当于加四
	//*p = 20;
	//printf("%d\n", y);
	int *p = &x;
	p--;
	*p = (int)bug;
	printf("I am fun function!!\n");
	return 0;
}

int main()
{
	//printf("hello world!\n");
	//fun();

	int a = 1;
	int b = 2;
	int c = 0;
	printf("I am main function!\n");
	c = fun(a, b);
	printf("you should run here! : %d\n", c);

	system("pause");
	return 0;
}