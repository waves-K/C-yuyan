//5.дһ������Խ�һ�����ֵ�����λ��ż��λ������
//

//#include<stdio.h>
//#include<windows.h>
//
//#define EXCHANGE(x)\
//	((((x) & 0xAAAAAAAA)>>1 | (((x) & 0x55555555)<<1))
//
//int main()
//{
//	unsigned int a = 1234;
//	printf("%u\n", EXCHANGE(a)));
//	system("pause");
//	return 0;
//}

//6.ʹ�ú�ʵ������������ϴ�ֵ��

//#include<stdio.h>
//#include<windows.h>
//
//#define MAX(x,y) ((x) > (y) ? (x) : (y))
//
//int main()
//{
//	printf("%d\n", MAX(10, 20));
//	system("pause");
//	return 0;
//}
//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
//

#include<stdio.h>
//#include<windows.h>
//
//unsigned int reverse(unsigned int a) {
//	unsigned int flag = 0x1;
//	unsigned int ret = 0;
//	int i = 0;
//	while (i < 32) {
//		if (a & (flag << i)) {
//			ret |= (flag << (32 - i - 1));
//		}
//		i++;
//	}
//	return ret;
//}
//
//int main()
//{
//	unsigned int a = 1234;
//
//	unsigned int b = reverse(a);
//	printf("%u\n", b);
//	system("pause");
//	return 0;
//}

//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
//

//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	printf("%d\n", b + (a - b) / 2);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	printf("%d\n", (a & b) + ((a ^ b) >> 1));
//	system("pause");
//	return 0;
//}

//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩

//#include<stdio.h>
//#include<windows.h>
//
//int find_single(int a[], int size) {
//	int i = 1;
//	int tmp = a[0];
//	for (i = 0; i < size; i++) {
//		tmp ^= a[i];
//	}
//	return tmp;
//}
//
//int main()
//{
//	int a[] = { 1,1,2,2,3,3,4,4,5,5,7 };
//	int size = sizeof(a) / sizeof(a[0]);
//	int ret = find_single(a, size);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//4.
//��һ���ַ����������Ϊ:"student a am i", ���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���

// ��������
// 1. �ֲ�����
// 2. ��������

#include<stdio.h>
#include<windows.h>

// ����
void reverse(char *start, char *end) {
	while (start < end) {
		*start ^= *end;
		*end ^= *start;
		*start ^= *end;
		start++, end--;
	}
}

void reverseStr(char *str) {
	char *pp = str;
	char *p = str;
	while (*p != '\0') {
		if (*p == ' ') {
			reverse(pp, p - 1);
			p++;
			pp = p;
			continue;
		}
		p++;
	}
	reverse(pp, p - 1);
	reverse(str, p - 1);
}

int main()
{
	char str[] = "student a am i";
	
	reverseStr(str);

	printf("%s\n", str);
	system("pause");
	return 0;
}