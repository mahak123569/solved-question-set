#include <stdio.h>
int factorial(int num){
if(num==0||num==1){
    return 1;
}else{
    return num*factorial(num-1);
}
}

int main() {
    int i,sum=0;
    for(i=1;i<=5;i++){
        sum+=factorial(i)/i;
    }
   printf("The sum of series:%d",sum);

    return 0;
}