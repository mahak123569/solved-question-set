// To calculate the sum of two integers
#include <stdio.h>

int main() {
   int num1,num2,Sum;
   printf("Enter a number1: ");
   scanf("%d",&num1);
   printf("Enter a number2: ");
   scanf("%d",&num2);
   
   Sum=num1+num2;
   printf("The sum of two integers %d and %d is = %d",num1,num2,Sum);
   return 0;
}