#include<stdio.h>
int main(){
    int num1,num2,sum=0;
    printf("Input two number(integer): ");
    scanf("%d%d",&num1,&num2);

    for(int i=num1;i<=num2;i++){
        if(i%7!=0){
            sum+=i;
        }
    }
    printf("Sum of all numbers between said number (inclusive) not divisible by 7:%d\n",sum);
    return 0;
}