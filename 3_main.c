//202511716212
//18108133961@163.com
//徐任鸿
#include <stdio.h>
int main()
{
  int num1 ,num2;
  char op ;
  
  
  scanf("%d %d %c",&num1, &num2, &op);

  switch (op) 
  {
  case '+':
       printf("%d\n", num1 + num2);
    break;
  case '-':
       printf("%d\n", num1 - num2);                      
     break;
  case '*':
       printf("%d\n", num1 * num2);
     break;
  case '/':
       if (num2 !=0)
           printf("%d\n",  num1 / num2);
       else 
           printf("错误\n");
       break;
  default:
      printf("无效运算符\n");
    
  }

         

 return 0;












}
