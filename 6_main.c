//202511716212
//18108133961@163.com
//徐任鸿
#include<stdio.h>
int sum(int arr[],int n)
{
int a=0;
for ( int i = 0; i < n; i++)
{
    a+=arr[i];
}
return a;



}
int product(int arr[],int n)
{
int b=1;
for ( int i = 0; i < n; i++)
{
    b*=arr[i];
}
return b;



}
int main()
{
int i;
int arr[5];

for ( i = 0; i < 5; i++)
{
    scanf("%d", &arr[i]);
}
int p=sum (arr,5);
int q=product(arr,5);
printf("%d %d\n",p ,q);
return 0;








}

















