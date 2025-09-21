#include <stdio.h>
int main() {
    int principle,rate ,time;
    printf(" principle: ");
    scanf("%d",&principle);
     printf("Rate: ");
     scanf("%d", &rate);
     printf("Time: ");
     scanf("%d", &time);
    
    int simple_intrest = principle*rate*time/100;
    printf("simple intrest = %d",simple_intrest);
    return 0;
}