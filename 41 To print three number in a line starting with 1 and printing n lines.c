#include <stdio.h>
int main() {
int n,count=1;
printf("Input the n: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
for(int j=0;j<3;j++){
    printf("%d ",count++);
        //count = count++
}
        printf("\n");
}
    return 0;
}