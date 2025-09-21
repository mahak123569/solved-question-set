#include <stdio.h>

int main()
{
    int p, q, count = 1;
    printf("Input the number of lines: ");
    scanf("%d", &p);
    printf("Number of character in a line: ");
    scanf("%d", &q);

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d", count++);
        }
        printf("\n");
    }

    return 0;
}