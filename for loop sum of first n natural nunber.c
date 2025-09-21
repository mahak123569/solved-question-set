#include <stdio.h>
int main()
{
    int nNum, sum = 0;
    printf("Enter a number ");
    scanf("%d", &nNum);
    for (int i = 1; i <= nNum; i++)
    {
        sum = sum + i;
        printf("%d ", i);
    }

    printf("\nSum of %d natural number is = %d\n", nNum, sum);

    return 0;
}
