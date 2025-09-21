//swaping of values
#include <stdio.h>

int main() {
    int a,b;
    a=8;
    b=9;
    printf("a=%d\nb=%dint\n",a,b);
    int t=a;
        a=b;
        b=t;
        printf("a=%dint\nb=%d\n",a,b);
   
    return 0;
}