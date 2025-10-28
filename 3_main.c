//202511716212
//18108133961@163.com
//徐任鸿
#include<stdio.h>
int main()
{
int n;
int i=2;
int isPrime=1;

scanf("%d",&n);

if(n<=1||n>=50)
{
    printf("输入无效");
    return 0;
}
while (i<n)
{
  if (n%i==0)
  {
    isPrime=0;
    break;
  }
  i++;
}
  


    

if(isPrime)
  printf("密钥安全，密码设置成功\n");
else
  printf("密钥不安全，请重新输入\n");

  return 0;














}












         

 
