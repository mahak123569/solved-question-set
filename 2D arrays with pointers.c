#include<stdio.h>
int main(){
    //valid
   
  int d[2][3]={2,4,6,8,10,12};
  for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
     printf("a[%d][%d]=%d,  ",i,j,d[i][j]);   
    }
  }
    printf("\n");

    
    return 0;
}