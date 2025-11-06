//202511716212
//18108133961@163.com
//徐任鸿
#include <stdio.h>
void a(int arr[],int n)
{
int i;
int j;
int temp;
for ( i = 0; i <n-1; i++)
{
    for ( j = 0; j < n-1-i; j++)
    {
        if (arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            
        }
        
    }
    
}
}
int main()
{
  int arr[10];
  int i;
  for ( i = 0; i <10; i++)
  {
    scanf("%d", &arr[i]);
  }
  a(arr, 10);
   for ( i = 0; i <10; i++)
   {
    printf("%d ",arr[i]);
   }
   return 0;
}
  




















