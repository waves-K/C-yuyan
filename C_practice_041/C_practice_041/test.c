#include<stdio.h>
#include<stdlib.h>

int main()
{
	// a ��һ��ָ�����飬�����ÿ��Ԫ����һ�� char*
	// char* ָ���˶�Ӧ���ַ�������Ԫ��
	char* a[] = { "work", "at", "alibaba" };
	char** pa = a;
		
	//typedef char* Charptr;	// �����ض���
	//Charptr* a[] = { "work", "at", "alibaba" };

	//Charptr* pa = a;
	pa++;
	printf("%s\n", *pa);
	system("pause");
	return 0;
}