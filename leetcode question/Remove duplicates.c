#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0)
        return 0;

    int i = 0;
    for (int j = 1; j < numsSize; j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1; // Correct position after loop ends
}

int main() {
    int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int n = sizeof(nums) / sizeof(nums[0]);

    int k = removeDuplicates(nums, n);

    printf("k = %d\n", k);
    printf("nums = ");
    for (int idx = 0; idx < n; idx++) {
        if (idx < k) printf("%d ", nums[idx]);
        else printf("_ ");
    }
    printf("\n");

    return 0;
}
//remove duplicates from sorted array