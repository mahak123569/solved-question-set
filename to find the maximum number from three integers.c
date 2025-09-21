// To find the maximum number of three
#include <stdio.h>

int main()
{
    int x, y, z, max;
    printf("Enter a number x: ");
    printf("\nEnter a number y: ");
    printf("\nEnter a number z: ");

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    max = x > y && x > z ? x : y > z ? y
                                     : z;
    printf("Maximum number of three is %d", max);

    return 0;
}