#include<stdio.h>
int main(){
    //a and b are two variables
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    //swap values of a and b
   a=a+b;
   b=a-b;
   a=a-b;

    printf("After swapping the Value of a=%d and b=%d\n",a,b);
    return 0;
}