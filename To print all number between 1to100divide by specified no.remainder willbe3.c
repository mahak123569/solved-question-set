#include<stdio.h>
int main(){
    int specifiednumber;
    printf("Enter a specified number: ");
    scanf("%d",&specifiednumber);
    for(int i=1;i<=100;i++){
        if(i%specifiednumber==3){
            printf("%d\n",i);
        }
    }
    return 0;
}