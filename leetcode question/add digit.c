#include<stdio.h>
  int addDigits(int sum){
    while(num>=10){
        int sum = 0;
        while(num>0){
            sum += num%10;
            num/=10;
        }
        num = sum;
    }
  }
