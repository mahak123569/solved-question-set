#include<stdio.h>
int main(){
    int m,n,sum=0;
    printf("Input two integer (m,n): ");
    scanf("%d%d",&m,&n);

    for(int i=m;i<=n;i++){
        //odd
        if(i%2!=0){
            sum+=i;
        }
    }printf("Sum of %d odd numbers starting from %d : %d\n",n,m,sum);
    return 0;
}