//int num = 5;
//-num == -5;

//��1����ӡ num �ĵ�ַ

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int num = 0;
//	printf("%p\n", &num); // %p ��ӡ��ַ��
//	printf("%x\n", &num); // %x ��ʮ���������ִ�ӡ
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	short s = 2;
//	printf("%d\n", sizeof(s = a + 3));	// ����������٣�
//	printf("%d\n", s);	// ����������٣�
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));	// �����������(arr)������������
//	printf("%d\n", sizeof(arr + 0));	//�����������(arr)���������Ԫ�صĵ�ַ
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	int y = a--;	
//	// ����--����ʹ�� a ,Ȼ��� a �����Լ������� x ��ֵ���� a �ĳ�ֵ 5 ���Լ����ֵ4��
//	printf("y = %d\n", y);
//	system("pause");
//	return 0;
//}

//int y = a++;
//printf("y = %d\n", y);


//#include<stdio.h>
//int main()
//{
//	int a = 5;
//	//00000000000000000000000000000101
//	//11111111111111111111111111111010
//	//11111111111111111111111111111001
//	//10000000000000000000000000000110
//	printf("%d\n", ~a);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 6;		// ���� a λ����
//	a = (int)3.14;	// ǿ������ת�����Ѹ�����(3.14)ת��Ϊ����
//	printf("a = %d\n", a);
//	system("pause");
//	return 0;
//}


//// ���1000-2000 ��֮�������
//
//#include<stdio.h>
//int main()
//{
//	int count = 0;	
//	int year = 0;
//	for (year = 1000; year <= 2000; year++) {
//		// �ж������������ܱ� 4 ���������ܱ� 100 �����������ܱ� 400 ������
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{ 
//			printf("%d ", year);	// �������
//			count++;	// ����
//		}
//	}
//	printf("\ncount = %d\n", count);	// ���1000-2000 ��֮����������
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	system("pause");
//	return 0;
//}
//// ��������Ľ����ʲô��

//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 0;
//	(a > 5) ? (b = 3) : (b = -3);
//	printf("b = %d\n", b);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 9;
//	int max = 0;
//	max = (a > b) ? a : b;
//	printf("max = %d\n", max);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);	// ���ű��ʽ
//	printf("c = %d\n", c);
//	system("pause");
//	return 0;
//}
//// c �Ľ���Ƕ��٣�


//int main()
//{
//	int arr[4] = { 5,3,4,1 };	// �����[ ] �����±����ò�����
//	arr[2] = 4;		// ��� [ ] �����±����ò�������arr ��ʾ������Ԫ�ص�ַ
//					// [ ] �������������� arr �� 2
//					// arr ��ʾ������Ԫ�ص�ַ��[2]��ʾ���������Ԫ��
//}



//#include<stdio.h>
//
////���庯��
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 5;
//	Add(a, b);	// ���ú����������()���Ǻ������ò�����
//				// ������������������Add��a��b
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//
struct Stu
{
	char name[10];
	int age;
	char sex[5];
	char id[13];
};
//
//int main()
//{
//	struct Stu stu;
//	strcpy(stu.name, "zhangsan");
//	stu.age = 20;
//	strcpy(stu.id, "2018010101010");
//	strcpy(stu.sex, "����");
//	printf("%s\n", stu.name);
//	printf("%d\n", stu.age);
//	printf("%s\n", stu.id);
//	printf("%s\n", stu.sex);
//	system("pause");
//	return 0;
//}


//int main()
//{
//	struct Stu stu;
//	struct Stu *pstu = &stu;
//	pstu->age = 20;
//	strcpy(pstu->name, "lisi");
//	return 0;
//}