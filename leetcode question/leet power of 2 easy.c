#include<stdio.h>
#include<stdbool.h>


bool isPowerOfTwo(int n) {
   if(n<=0) {
    return false;
   }
while(n%2==0){
    n=n/2;
   }
   return n==1;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(isPowerOfTwo(num)){
        printf("true\n");
        printf("The number %d is a power of 2.\n",num);
    }else {
        printf("false\n");
        printf("The number %d is not a power of 2.\n",num);
    }
}