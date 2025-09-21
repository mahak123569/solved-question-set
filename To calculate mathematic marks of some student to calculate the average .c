#include<stdio.h>
int main(){
    double  marks,count=0,sum=0,avg;
    printf("Input mathematics marks (0 to terminate): ");
    scanf("%lf",& marks);
    sum =sum+marks;
    count++;
avg = sum/count ;
if(marks==0||marks<0){
    printf("Average marks in mathamatic %lf",avg);

}return 0;
}
