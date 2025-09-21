#include<stdio.h>
int main(){
    int i,j,k=1;
    scanf("%d",&k);
    for(i=1;i<=4;i++){
       for(j=4;j>=1;j--){
        k++;
printf("%d",k);
       }printf ("\n");
    }

    return 0;
}