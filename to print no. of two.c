
#include <stdio.h>
int main(){
int a;
int b;
printf("Enter a num ");
scanf("%d",&a);
printf("\n Enter a num ");
scanf("%d",&b);
int small=a<b?a:b;
printf("smallest number of two %d\n",small);
    return 0;
}