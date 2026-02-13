#include <stdio.h>

int main()
{
    float sum = 0.0;
    for (int i = 1; i <= 50; i++)
    {
        sum += 1.0 / i;
    }
    printf("Value of s=%.2f\n", sum);
    return 0;
}