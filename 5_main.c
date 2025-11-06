//202511716212
//18108133961@163.com
//徐任鸿
#include<stdio.h>
int a(int a1 ,int an, int step)
{
int n=(an-a1)/step+1;
int S=(a1+an)*n/2;
return S;

}
int main()
{
 int S=a(1,100,1);
 printf("%d",S);
 return 0;



}
