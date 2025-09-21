#include<stdio.h>
int main(){
    int rows=5;//number of rows
    //number of colums
    //outer loop for rows
    for(int i=1;i<=rows;i++){
        //inner loop for spaces
        for(int j=1;j<=rows-1;j++){
            printf("");
        }
        //inner loop for stars
        for(int k=1;k<=i;k++){
            printf("1-6");
        }
        printf("\n");
    }
    return 0;
}