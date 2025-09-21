#include<stdio.h>
int main(){
    int data[3][3];
    //initializing arrays at run time
    printf("Enter the elements:");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&data[i][j]);
        }
    }
    printf("Printing all the elements of the array\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("data[%d][%d]=%d\n",i,j,data[i][j]);
        }
    }
    printf("\n");
    printf("Accessed element\n");
    printf("data[0][1]=%d\n",data[0][1]);
    printf("data[0][0]=%d\n",data[0][0]);
    printf("data[0][2]=%d\n",data[0][2]);
    return 0;

}