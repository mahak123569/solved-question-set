#include <stdio.h>
int main()
{
    int i, j, l;
    printf("enter l:");
    scanf("%d", &l);
    // outer loop

    for (i = 1; i <= l; i++)
    {
        for (j = 1; j <= l; j++)
        {
            if (j <= l + 1 - i)
            {
                printf("*");
            }
            else
            {
                printf("");
            }
        }
        printf("\n");
    }
}