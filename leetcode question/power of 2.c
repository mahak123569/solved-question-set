#include<stdio.h>
#include<stdbool.h>

 bool isPowerOfThree(int n) {
  if(n<=0){
    return false;
  }
  int x=1;
  while(x<n){
      x*=3;
  }
  return x==n;
 
 }
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (isPowerOfThree(n)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}