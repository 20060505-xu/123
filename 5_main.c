//202511716212
//18108133961@163.com
//徐任鸿
#include<stdio.h>
int main()
{
    int a[5];
    int sum = 0;
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
        printf("%d ", a[i]); 
    }
    a[4] = sum; 
  printf("%d", a[4]); 
    return 0;
}
