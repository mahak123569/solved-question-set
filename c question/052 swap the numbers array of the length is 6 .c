#include <stdio.h>

int main() {
  int arr[6],temp;
  printf("Input the 6 members of array:\n");
  for(int i=0;i<6;i++){
      scanf("%d",&arr[i]);
  }
  for(int i=0;i<3;i++){
  temp=arr[i];
  arr[i]=arr[5-i];
  arr[5-i]=temp;
  }
  for(int i=0;i<6;i++){
  printf("arr[%d]=%d\n",i,arr[i]);
  }
   return 0;
}