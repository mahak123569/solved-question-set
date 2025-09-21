#include<stdio.h>
int *reversearray(int a_count,int *a,int *result_count){
    for(int i=0;i<a_count;i++){
        int first=a[i];
        int second=a[a_count-i-1];
        a[i]=second;
        a[a_count-i-1]=first;

        
    }
    
        return a;
    }
    


int main(){
    int N,count;
    printf("Enter size:");
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
        }
    printf("\n");
    
    A=reversearray(N,A,&count);
    
     for(int i=0;i<count;i++){
        printf("%d\n",p);
    }
    printf("\n");
    return 0;
}