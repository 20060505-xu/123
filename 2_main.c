//202511716212
//18108133961@163.com
//徐任鸿
#include<stdio.h>
int main()
{
 int i;
 int a;
 int b;
 int c;
 int flag=0;
 for ( i = 100; i <=999; i++)
 {
    a=i/100;
    b=(i/10)%10;
    c=i%10;
 
 if (i==a*a*a+b*b*b+c*c*c)
 {
    if (flag==0)
    {
    printf("%d" ,i);
    flag=1;
    }
    else
    {
        printf(" %d", i);
    }
    
 }
}
   return 0;
 
 
 








