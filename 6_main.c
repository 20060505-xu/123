//202511716212
//18108133961@163.com
//徐任鸿
#include<stdio.h>
int main()
{
    int a[5];
    int num, i;
    for ( i = 0; i <5; i++)
    {
        do
        {
            scanf("%d" ,&num);
        } while (num%2!=0);
        
        a[i]=num;
        printf("%d ", a[i]);
    }

    return 0;





    







}
