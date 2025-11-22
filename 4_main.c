//202511716212
//18108133961@163.com
//徐任鸿
#include <stdio.h>

void add_one(int *arr, int length) {
    for (int i = 0; i < length; i++) {
        *(arr + i) = *(arr + i) + 1;   // 指针方式访问数组
    }
}

int main() {
    int arr[5];

    // 输入 5 个整数
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // 调用函数，使数组每个元素自增
    add_one(arr, 5);

    // 输出结果
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
