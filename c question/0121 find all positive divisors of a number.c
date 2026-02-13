#include<stdio.h>
int main(){
    int num;
    printf("Input a number(integer value): ");
    scanf("%d",&num);
    if( num<0){
        printf("please input positive number\n");
        return 1;
    }
    
    printf("All positive divisors of %d\n",num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            printf("%d\n",i);
        }
    
}
return 0;
}