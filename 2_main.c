//202511716212
//18108133961@163.com
//徐任鸿
#include <stdio.h>
int main() {
    int arr[5];
    int *p = arr;  // 指针指向数组首地址
    
    // 输入数组元素
    printf("请输入5个整数：");
    for (int i = 0; i < 5; i++) {
        scanf("%d", p + i);  // 指针偏移访问数组元素
    }
    
    // 元素乘以2
    for (int i = 0; i < 5; i++) {
        *(p + i) *= 2;  // 解引用指针修改值
    }
    
    // 打印结果
    printf("处理后数组：");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }
    return 0;
}




























 }
 
























