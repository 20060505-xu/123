//202511716212
//18108133961@163.com
//徐任鸿
#include <stdio.h>

int main() {
    int n, i;
    int isPrime = 1; // 假设是质数

    printf("请输入一个小于50的正整数：");
    scanf("%d", &n);

    // 检查输入范围
    if (n <= 1 || n >= 50) {
        printf("输入无效，请输入1到49之间的正整数\n");
        return 0;
    }

    // 判断是否为质数
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = 0; // 说明能被整除，不是质数
            break;
        }
    }

    // 输出结果
    if (isPrime)
        printf("密钥安全，密码设置成功\n");
    else
        printf("密钥不安全，请重新输入\n");

    return 0;
}














