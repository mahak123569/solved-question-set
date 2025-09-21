#include<stdio.h>
int main(){
    float price = 20.00;
    float *ptr = &price;
    printf("ptr = %p\n",ptr);
    ptr++;
    printf("ptr = %p\n",ptr);
    ptr--;
    printf("ptr = %p\n",ptr);
    return 0;
}