#include<stdio.h>
int main(){
    //initialization at compile time
    int data[3][4]={{2,3,7,6},{9,5,4,45},{12,1,0,98}};

    //how to access element
    printf("Accessed element\n ");
   printf("a[0][1]=%d",data[0][1]);

   printf("\n");
printf("Printing all the elements\n");
    //printing all the elements
    for(int i=0;i<3;i++){//for rows
    for(int j=0;j<4;j++){//for columns
        printf("a[%d][%d]=%d\n",i,j,data[i][j]);
    }
    }
    printf("\n");

 return 0;   
}