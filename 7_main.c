//202511716212
//18108133961@163.com
//徐任鸿
#include<stdio.h>
void a(int arr[],int n)
{
int i;
int temp;

for ( i = 0; i <n/2; i++)
{
    temp=arr[i];
    arr[i]=arr[n-1-i];
    arr[n-1-i]=temp;

    
}
}
int main()
{
 int arr[5];
 int i;
 for ( i = 0; i <5; i++)
 {
    scanf("%d", &arr[i]);
 }
  a(arr,5);
  for ( i = 0; i < 5; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;

}
































