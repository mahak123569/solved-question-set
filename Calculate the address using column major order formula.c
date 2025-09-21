#include <stdio.h>
void accessaddress(int row,int cols,int a[row][cols]){
    int *Baseaddress=(int*)a;
    for(int j=0;j<cols;j++){
        for(int i=0;i<row;i++){
            int calc=(j*row)+i;
            int *address=Baseaddress+calc+sizeof(int);
            printf("a[%d][%d]=%p\n",i,j,address);
            
        }
    }
    printf("\n");
    for(int j=0;j<cols;j++){
        for(int i=0;i<row;i++){
    printf("a[%d][%d]=%d\n",i,j,a[i][j]);
        }
    }
printf("\n");
}

int main() {
    int rows = 3;
    int cols = 3;
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

   accessaddress(3,3,a);

    return 0;
}