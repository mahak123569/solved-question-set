#include<stdio.h>
#include<stdbool.h>

bool isPowerOfFour(int n) {
    
if (n<=0){
    return false;
}
while(n%4==0){
    n=n/4;
}

return n==1;

    
}




int main(void) {
    int n;
    scanf("%d", &n);
    if (isPowerOfFour(n)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}