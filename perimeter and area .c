// define variables
#include <stdio.h>
int main() {
   int height = 7;
   int width = 5;
   int perimeter ,area ;
   //calculate perimeter 
   perimeter = 2 *( height + width);
   //calculate area 
   area = height * width;
   //To print perimeter and area
   printf("perimeter of rectangle :%d inches\n",perimeter);
   printf("area of rectangle:%d square inches \n", area);
    return 0;
}