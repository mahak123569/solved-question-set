#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    int i=1;
    while ( i<=10){
        printf("%d\n",i*n);
        i++;
    }return 0;
}