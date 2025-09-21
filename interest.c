#include<stdio.h>
int main(){
    int principal,loan_principal,rate,days;
    printf("Input loan amount(0 to quit): ");
    printf("\nInput interest rate: ");
    printf("\nInput terms of the loan in days: ");
    printf("\nInput loan principal amount(0 t0 quit): ");

    scanf("%d%d%d",&principal,&rate,&days,&loan_principal);

   
 float interest=principal*rate*days/365;
 
 printf("The interest amount is $%.2f",interest);
 printf("\nInput loan principal amount(0 t0 quit): \n");
 

  return 0;
}