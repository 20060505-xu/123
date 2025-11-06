//202511716212
//18108133961@163.com
//徐任鸿
#include<stdio.h>
#include<stdio.h>
int main()
{
int a[3][3];
int b[3][3];
int i;
int j;
for ( i = 0; i < 3; i++)
{
    for (j= 0; j<3; j++)
    {
        scanf("%d", &a[i][j]);
    }
    
}
for ( i = 0; i <3; i++)
{
    for  (j = 0; j< 3; j++)
    {
        b[j][i]=a[i][j];
    }
    
}





for ( i = 0; i <3; i++)
{
    for ( j= 0; j < 3; j++)
    {
        printf("%d ", b[i][j]);
    }
    printf("\n");
}
return 0;





























 }
 
























