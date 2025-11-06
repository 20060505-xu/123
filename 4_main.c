//202511716212
//18108133961@163.com
//徐任鸿
#include <stdio.h>
int power(int a, int b)
{
 int result=1;
 for (int i = 0; i < b; i++)
 {
    result *=a;
 }
 return result;





}
int main()
{
int sum=0;
for (int  i = 0; i <=5; i++)
{
    sum +=power(i,2);
}
printf("%d",sum);
return 0;
}





