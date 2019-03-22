#include<stdio.h>
#include<stdlib.h>

// CmpInt 是 qsort 的比较函数。CmpInt 调用时机不是由程序员自己决定的，
// 而是由 qsort 内部来决定的。像这种风格的函数，就叫 “回调函数”。
int CmpInt(const void* p1, const void* p2){
   int* a = (int*)p1;
   int* b = (int*)p2;
   // 如果 *a < *b, 相当于让函数返回真。*a >= *b, 函数就返回假
   // p1 和 p2, 如果期望 p2 指向的元素在 p1 的前面，返回真
   // 如果期望 p1 指向的元素在 p2 的前面，返回假
   return *a < *b;
}

int main(){
    int arr[] = {9, 5, 2, 7};
    // qsort 实现是基于快速排序算法
    // qsort 这个函数其实非常的丑陋以至于以后再也不会用它了
    // std::sort 
    qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), CmpInt);
    int i = 0;
    for(; i < 4; ++i){
        printf("%d\n", arr[i]);
    }
    system("pause");
    return 0;
}
