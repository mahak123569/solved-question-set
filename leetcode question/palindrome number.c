#include<stdio.h>
#include<stdbool.h>
bool ispalindrone(int x){
    if(x<0){
        return false;
    }
    long long reversed = 0;  
    int original = x;
        while(x != 0){
        int digit = x%10;
        reversed = reversed * 10 + digit;
        x = x/10;
    }
    return reversed == original;
}
 int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if(ispalindrone(num)){
      printf("%d is a palindrome\n", num);
  }else{
      printf("%d is not a palindrome\n", num);
  }
  return 0;
 }