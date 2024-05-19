#include <stdio.h>
#include <string.h>

// c99新增头文件, 确保类型在各个系统中功能相同
#include <stdint.h>
#include <inttypes.h>

// 提供整数和浮点数类型大小限制的相关信息
#include <limits.h>
#include <float.h>

// 提供字符分析函数
#include <ctype.h>

char name[40];
int powers[8] = {1, 2, 3, 4,5};
int var[] = {1, 2,3 ,4};
int spec[] = {[5]=999, 222};
int* spec_ptr = spec;
int* spec_ptr2 = &spec[2];

const PI = 3.14159265;
#define PI 3.14

void print_array(int* arr, int len);

void print_array(int arr[], int len) {
    for (int i =0; i<len; i++) {
        printf("%d ", arr[i]);
    }
}

int main(int argc, char* arvc[]) {
    printf("%lu %lu\n", sizeof(powers), sizeof(*powers));
    printf("%lu %lu\n", sizeof(var), sizeof(*var));
    printf("%lu %lu\n", sizeof(spec), sizeof(*spec));
    print_array(powers, 8);
    return 0;
}

void const_test() {
    const char * arr1 = {1, 2, 3}; // 数组元素是const
    char * const arr2 = {1, 2, 3}; // 数组本身是const
    // arr1[0] = 99;
    arr1 = arr2;
    arr2[0] = 99;
    // arr2 = arr1;
}

void func1() {
    printf("Hello World\n");
}

/*
指针的操作
1. 赋值
2. 解引用
3. 取地址
4. 指针与整数相加
5. 递增指针
6. 指针减去一个整数
7. 递减指针
8. 指针求差
9. 比较
*/