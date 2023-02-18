#include <stdio.h>

int main (){
 
 double num1;
 double num2;
 double result;
 char operator;

 printf("enter operator : ");
 scanf("%c", &operator);

 printf("enter no : ");
 scanf("%lf",&num1);

 printf("enter no 2 : ");
 scanf("%lf",&num2);

 switch (operator)
 {
    case '+':
     result = num1 + num2;
     printf("\nresult: %lf",result);

      break;

    case '-':
      result = num1 - num2;
      printf("\nresult: %lf",result);
      break;

     case '*':
     result = num1 * num2;
      printf("\nresult: %lf",result);
   break;
   
   case '/':
     result = num1/ num2;
      printf("\nresult: %lf",result);
      break;
 
 default:
     printf("\n%c is not a valid operator!!",operator);
  
 }

return 0;
}


