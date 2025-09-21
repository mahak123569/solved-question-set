#include <stdio.h>
int main() {
    int n[7];
    printf("Input the 7 members of the array: ");
    for(int i=0;i<7;i++){
        scanf("%d",&n[i]);
        if (n[i]<=0){
            n[i]=100;
            
        }
    }
    printf("Array of values:\n");
    for(int i=0;i<7;i++){
 printf("n[%d]=%d\n",i,n[i]);
}
    return 0;
}