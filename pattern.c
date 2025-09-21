#include<stdio.h>
int main(){
    int i,j;
    //outer loop
    for(i=0;i<3;i++){
        //inner loop
        for(j=0;j<2;j++){
            printf("%d%d\n",i,j);
        }
    }return 0;
}

 