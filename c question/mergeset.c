#include <stdio.h>
#include <stdlib.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i=0;
    int j=0;
    int temp;
    
    while(i<m+n && j<n){
        if(nums1[i]==0){
            nums1[i]=nums2[j];
            i++;
            j++;
        }
        else{
            j++;
            for(int i=0;i<nums1Size-1;i++){
                for(int j=0;j<m+n-i-1;j++){
                    if(nums1[i]>nums2[j]){
                        temp = nums1[i];
                        nums1[i] =nums2[j+1];
                        nums2[j+1]=temp;
                }
            }
        }
    }
 }
}
