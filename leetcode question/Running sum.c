#include <stdio.h>
#include<Math.h>

int nums;
int sum = 0;
 for(int i=0;i<nums;i++){
 sum=sum+nums[i];
 running sum[i]=sum;
 }
 

int main() {
    int nums;
    int* returnSize = (int*)malloc(sizeof(int));
    int* result = runningSum(&nums, 1, returnSize);
    if (result != NULL) {
        for (int i = 0; i < *returnSize; i++) {
            printf("%d ", result[i]);
        }
        free(result);
    }
    free(returnSize);
    return 0;
}