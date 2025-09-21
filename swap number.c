#include<stdio.h>
int main(){
    int x,y;
    printf("Before swapping the value of x: ");
    scanf("%d",&x);
    printf("Before swapping the value of y: ");
    scanf("%d",&y);
    //swap
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swapping the value of x=%d and y=%d\n",x,y);

}