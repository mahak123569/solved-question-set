#include<stdio.h>
int main(){
    float num,sum=0,count=0,avg;
while(1){
    printf("Input each number on a seperate line (888 to exit): ");
    scanf("%f",&num);
    if(num==888){
        break;
}
    sum+=num;
    count++;
}
if(count>0){
     avg=sum/count;
    printf("The average value of the said number is %f.\n",avg);
}else{
  printf("No number are entered.\n");
}
return 0;
}