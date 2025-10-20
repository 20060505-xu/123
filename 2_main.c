//202511716212
//18108133961@163.com
//徐任鸿
#include<stdio.h>
int main()
{
    int score;
    scanf("%d", &score);
if (score<0 || score>100)
{
    ("分数输入错误\n");
}
else if (score>=90)
{
    printf("A\n");
}
else if (score>=80)
{
    printf("B\n");
}
else if (score>=70)
{
    printf("C\n");
}
else if (score>=60)
{
    printf("D\n");
}
else  {

    printf("E\n");
}

   return 0;







}
