#include<stdio.h>
void reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstvalue=arr[i];
        int secondvalue=arr[n-i-1];
        arr[i]=secondvalue;
        arr[n-i-1]=firstvalue;
    }
}
    void printreverse(int arr[],int n){
        for(int i=0;i<n;i++){
            printf("%d  ",arr[i]);
            
        }printf("\n");
    }

int main(){
    int arr[]={2,3,4};
    reverse(arr,3);
    printreverse(arr,3);
    
    return 0;

}