#include<stdio.h>
int main(){
    int number[3];
    printf("Enter 3 number : ");
    for(int i=0;i<3;i++){
        scanf("%d",&number[i]);
    }
    printf("Original number = ");
    for(int i=0;i<3;i++){
        printf("%d  ",number[i]);
    }printf("\n");
    
    for(int i=0;i<3-1;i++){
        for(int j=0;j<3-i-1;j++){
            if(number[j]>number[j+1]){
                int temp=number[j];
                number[j]=number[j+1];
                number[j+1]=temp;
            }
        }
    }
    printf("Sorted number = ");
    for(int i=0;i<3;i++){
        printf("%d  ",number[i]);
    }printf("\n");
return 0;
}