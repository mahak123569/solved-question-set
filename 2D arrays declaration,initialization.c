#include<stdio.h>
int main(){
    int arr[3][4]={{11,21,32,33},{22,12,13,66},{4,8,6,0}};
    int *ptr=&arr[0][0];
    printf("Values\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
        printf("arr[%d][%d]=%d\n",i,j,*((arr[i])+j));    
        }
    }
    printf("\n");
    printf("address\n");
   printf("%u\n",&arr[0]+1);
   printf("%u\n",(arr+1));

   printf("%u\n",*(arr+1));
   printf("%u\n",*(arr+1)+0);
   printf("%u\n",*(arr+1)+1);
   printf("%u\n",*(arr+1)+2);
   printf("%u\n",*(arr+1)+3);
   
   printf("%u\n",&arr[1]);
   printf("%u\n",&arr[1]+1);
   printf("%u\n",&arr[2]);
    return 0;
}