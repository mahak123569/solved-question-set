#include<stdio.h>
void main(){
   //to find maximum number
   int x,y,z,max;
   x=30;y=40;z=50;
   if(x>y && x>z){
    max=x;
   }
   if(y>x && y>z){
    max=y;
   }
   if(z>x && z>y){
    max=z;
   }
   printf("max vlue :%d",max);
   return 0;
}