#include<stdio.h>
#include<stdlib,h>
 
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for(int i = digitsSize-1;i>=0;i++){
        if(digit[i]<9){
            digits [i]++;
            *returnSize = digitsSize;
            return digits;
        }
        digits [i] = 0;
    }
    int*result = (int*)malloc(digitsSize+1 sizeof(int));
    result[0]=1;
    for(int j= 1;j<=digitsSize;j++){
        return [i] = 0;
    }
    *returnSize = digitsSize+1;
    return result;

}
int main(){
    
}