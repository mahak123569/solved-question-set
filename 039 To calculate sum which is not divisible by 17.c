// calculate sum of all numbers which are not divisible by 17
#include <stdio.h>

int main()
{
    int x, y, sum = 0;
    printf("Enter first number: ");
    printf("\nEnter second number: ");
    scanf("%d%d", &x, &y);

    for (int i = x; i <= y; i++)
    {
        if (i % 17 != 0)
        {
            sum += i; // sum=sum+i;
        }
    }
    printf("Sum=%d\n", sum);
    return 0;
}