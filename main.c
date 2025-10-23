//202511716212
//18108133961@163.com
//徐任鸿
#include <stdio.h>
int main()
{
  double num1 ,num2;
  char op ;
  
  
  scanf("%lf %c %lf",&num1, &op, &num2);

  switch (op) 
  {
  case '+':
       printf("%f+%f=%f\n", num1, num2, num1+num2);
    break;
  case '-':
       printf("%f-%f=%f\n", num1, num2, num1-num2);                      
     break;
  case '*':
       printf("%f*%f=%f\n", num1, num2, num1*num2);
     break;
  case '/':
       if (num2 !=0)
           printf("%f/%f=%f\n", num1, num2, num1/num2);
       else 
           printf("错误\n");
       break;
  default:
      printf("无效运算符\n");
    
  }

         

 return 0;
