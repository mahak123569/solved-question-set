#include<stdio.h>
int main(){
    int a[50]={11,23,45,67,90,87};
    int size=6;
    int element=55;
    int index=3;
    int indextwo=5;
    int elementwo=30;
    
    printf("Array before insertion\n");
    for(int i=0;i<size;i++){
       printf("a[%d]=%d\n",i,a[i]);
    }
    printf("Array After insertion\n");
    for(int i=size-1;i>=index;i--){
        a[i+1]=a[i];
    }
    a[index]=element;
    size++;
    for(int i=0;i<size;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    printf("Array after second Insertion\n");
      for(int i=size-1;i>=indextwo;i--){
        a[i+1]=a[i];
      }
      a[indextwo]=elementwo;
      size++;
      for(int i=0;i<size;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }

return 0;
}