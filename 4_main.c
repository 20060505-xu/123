//202511716212
//18108133961@163.com
//徐任鸿
#include <stdio.h>
int main()
{
 int a, b, c;
 scanf("%d %d %d",&a, &b, &c);
 if (a<=0|| b<=0||c<=0)
 { 
    printf("无效");
 }
 else if (a + b> c&&a + c> b&&c + b>a )
 {
    printf("可以组成三角形");
 }
else{
 
     printf("不能组成三角形");
 }
 
    return 0;

 








}
