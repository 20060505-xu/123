//202511716212
//18108133961@163.com
//徐任鸿
#include <stdio.h>

int main() {
    int n, i = 2;
    int isPrime = 1;  // 标记是否为质数

    printf("请输入一个小于50的正整数：");
    scanf("%d", &n);

    // 判断输入范围
    if (n <= 1 || n >= 50) {
        printf("输入无效，请输入1到50之间的正整数。");
        return 0;
    }

    // 判断是否为质数（使用while循环）
    while (i < n) {
        if (n % i == 0) {
            isPrime = 0;  // 能被整除，不是质数
            break;
        }
        i++;
    }

    // 输出结果（中文逗号）
    if (isPrime)
        printf("密钥安全，密码设置成功");
    else
        printf("密钥不安全，请重新输入");

    return 0;
}









         

 
