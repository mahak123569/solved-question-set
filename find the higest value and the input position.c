#include<stdio.h>
int main(){
    int num[5],highest=0,position=0;
    printf("Enter a num: ");
    for(int i=0;i<5;i++){
        scanf("%d",&num[i]);
}
for(int i=0;i<5;i++){
    if(num[i]>highest){
        highest = num[i];
        position++;
    }
}
printf("highest =%d\n",highest);
printf("position=%d\n",position);
return 0;
}