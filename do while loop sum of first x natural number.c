#include <stdio.h>
int main()
{
    int i = 1, sum = 0, sNum;
    printf("enter num:");
    scanf("%d", &sNum);
    do
    {
        sum = sum + i;
        i++;
    } while (i <= sNum);
    printf("sum of %d natural number is = %d\n", sNum, sum);
    return 0;
}