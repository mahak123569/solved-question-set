#include<stdio.h>
int main(){
    int m,n,sum=0;
    printf("Input two integer (m,n): ");
    scanf("%d%d",&m,&n);

    for(int i=m;i<=n;i++){
        //even
        if(i%2==0){
            sum+=i;
        }
    }printf("Sum of %d even numbers starting from %d is %d\n",n,m,sum);
    return 0;
}