#include<stdio.h>
#include<stdlib.h>

int main()
{
	// a 是一个指针数组，里面的每个元素是一个 char*
	// char* 指向了对应的字符串的首元素
	char* a[] = { "work", "at", "alibaba" };
	char** pa = a;
		
	//typedef char* Charptr;	// 类型重定义
	//Charptr* a[] = { "work", "at", "alibaba" };

	//Charptr* pa = a;
	pa++;
	printf("%s\n", *pa);
	system("pause");
	return 0;
}