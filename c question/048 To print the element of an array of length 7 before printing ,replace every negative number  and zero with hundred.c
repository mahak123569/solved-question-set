#include <stdio.h>

int main() {
    //Declare array of length 7.
   int arr[7];
   printf("Input the 5 members of array:\n");
   for(int i=1;i<=5;i++){
       scanf("%d",&arr[i]);
       if(arr[i]<=0){
           //replacement of negative number and zero with 100.
           arr[i]=100;
       }
   }
   printf("Array of values:\n");
   for(int i=1;i<=5;i++){
       printf("arr[%d]=%d\n",i,arr[i]);
   }
    return 0;
}