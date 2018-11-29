//如何写出面试官满意的代码
//模拟实现 strlen 三种方式
//方式一：
//#include<stdio.h>
//#include<windows.h>
//
//int mystrlen(const char *msg) {
//	int count = 0;
//	while (*msg) {
//		msg++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	const char *msg = "0123456789";
//	printf("strlen(msg) = %d\n", mystrlen(msg));
//	system("pause");
//	return 0;
//}


// 方法二：（递归）
//#include<stdio.h>
//#include<windows.h>
//
//int mystrlen_r(const char *msg) {
//	if (*msg == '\0') {
//		return 0;
//	}
//	return 1 + mystrlen_r(msg + 1);
//}
//
//int main()
//{
//	const char *msg = "123456789";
//	printf("strlen(msg) = %d\n", mystrlen_r(msg));
//	system("pause");
//	return 0;
//}



// 方式三(指针)

//#include<stdio.h>
//#include<windows.h>
//
//int mystrlen_p(const char *msg) {
//	char *p = msg;
//	while (*p != 0) {
//		p++;
//	}
//	return p - msg;
//}
//
//int main()
//{
//	const char *msg = "123456789";
//	printf("strlen(msg) = %d\n", mystrlen_p(msg));
//	system("pause");
//	return 0;
//}



//2. 模拟实现 strcpy
// 1. 参数顺序
// 2. 函数功能，停止条件
// 3. assert
// 4. const 修饰指针
// 5. 函数返回值

//方法一：

//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//char *my_strcpy(char *dst, const char *src) {
//	assert(dst);
//	assert(src);
//	char *ret = dst;
//	while (*src != '\0') {
//		*dst = *src;
//		dst++, src++;
//	}
//	*dst = *src;
//	return ret;
//}
//
//int main()
//{
//	const char *src = "abcdef1234";
//	char dst[32];
//
//	my_strcpy(dst, src);
//	printf("dst = %s\n", dst);
//	system("pause");
//	return 0;
//}



// 方法二：简化代码

//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//char *my_strcpy(char *dst, const char *src) {
//	assert(dst);
//	assert(src);
//	char *ret = dst;
//	while (*dst++ = *src++) {
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	const char *src = "abcdef1234";
//	char dst[32];
//	printf("src = %s\n", src);
//	my_strcpy(dst, src);
//	printf("dst = %s\n", dst);
//	system("pause");
//	return 0;
//}


// 3. 模拟实现 strcat (字符串拼接)

//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//char *my_strcat(char *dst, const char *src) {
//	assert(dst != NULL);
//	assert(src);
//	char *ret = dst;
//	while (*dst) {
//		dst++;
//	}
//	while (*dst++ = *src++) {
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	const char *src = "abcde1234";
//	char dst[32] = "xyz";
//	printf("src = %s\n", src);
//	printf("dst = %s\n", dst);
//
//	my_strcat(dst, src);
//	printf("dst = %s\n", dst);
//	system("pause");
//	return 0;
//}



//模拟实现 strstr (字串问题)

//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//char *my_strstr(const char *str, const char *sub_str) {
//	assert(str);
//	if (*sub_str == '\0'){
//		return str;
//	}
//	const char *str_begin = str;
//	const char *p;
//	const char *q;
//	while (*str_begin) {
//		p = str_begin;
//		q = sub_str;
//		while (*p == *q && *p != '\0' && *q != '\0') {
//			p++,q++;
//		}
//		if (*q == '\0') {
//			return str_begin;
//		}
//		if (*p == '\0') {
//			return NULL;
//		}
//		str_begin++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	const char *src = "abcd1234";
//	char dst[32] = "cd";
//	char *ret = my_strstr(src, dst);
//	if (ret) {
//		printf("%s\n", ret);
//	}
//	else{
//		printf("NULL!\n");
//	}
//	system("pause");
//	return 0;
//}



//5. 模拟实现 strcmp

//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//int my_strcmp(const char *str1, const char *str2) {
//	assert(str1);
//	assert(str2);
//	while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2) {
//		str1++, str2++;
//	}
//	if (*str1 && *str2) {
//		if (*str1 > *str2) {
//			return 1;
//		}
//		else {
//			return -1;
//		}
//	}
//	if (*str1 == '\0' && *str2 == '\0') {
//		return 0;
//	}
//	if (*str1 == '\0') {
//		return -1;
//	}
//		return 1;
//}
//
//int main()
//{
//	const char *str1 = "abcd1234";
//	const char *str2 = "abfde";
//	printf("%d\n", my_strcmp(str1, str2));
//	system("pause");
//	return 0;
//}




//6. 模拟实现 memcpy

//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//
//void *my_memcpy(void *dst, void *src, int count) {
//	assert(dst);
//	assert(src);
//	char *d = (char*)dst;
//	char *s = (char*)src;
//	while (count--) {
//		*d = *s;
//		d++, s++;
//	}
//	return dst;
//}
//
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int b[5];
//	my_memcpy(b, a, sizeof(a));
//	system("pause");
//	return 0;
//}


//void *mymemcpy(void *dst, const void *src, int count) {
//	void *ret = dst;
//
//	/*
//	 * copy from lower addresses to higher addesses
//	 */
//	while (count--) {
//		*(char *)dst = *(char*)src;
//		dst = (char*)dst + 1;
//		src = (char*)src + 1;
//	}
//	return (ret);
//}


//int main()
//{
//	const char *msg = "hello world!";
//	char buf[32];
//	my_memcpy(buf, msg, strlen(msg) + 1);
//	return 0;
//}



//7. 模拟实现 memmove

//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//#include<string.h>
//
//void *my_memmove(void *dst, const void *src, int count) {
//	assert(dst);
//	assert(src);
//	void *ret = dst;
//	char *d = (char*)dst;
//	char *s = (char*)src;
//	if (d > s && d < s + count) {
//		s = s + count - 1;
//		d = d + count - 1;
//		while (count--) {
//			*d = *s;
//			d--, s--;
//		}
//	}
//	else {
//		while (count--) {
//			*d = *s;
//			d++, s++;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	const char *msg = "hello world";
//	char buf[32] = "hello world";
//	my_memmove(buf + 1, buf, strlen(buf) + 1);
////	my_nennove(buf, buf + 1, strlen(buf) + 1);
//	system("pause");
//	return 0;
//}


void *memmove(void *dst, const void *src, int count) {
	void *ret = dst;
	if (dst <= src || (char*)dst >= ((char*)src + count)) {
		/*
		*Non-Overlapping Buffers
		*copy from lower addresses to higher adresses
		*/
		while (count--) {
			*(char*)dst = *(char*)src;
			dst = (char*)dst + 1;
			src = (char*)src + 1;
		}
	}
	else{
		/*
		*Overlapping Buffers
		*copy from higher addresses to lower addresses
		*/
		dst = (char*)dst + count - 1;
		src = (char*)src + count - 1;

		while (count--) {
			*(char*)dst = *(char*)src;
			dst = (char*)dst - 1;
			src = (char*)src - 1;
		}
	}
	return ret;
}