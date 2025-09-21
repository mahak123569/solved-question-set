#include <stdio.h>
int main()
{

    int size = 4;
    // outer loop
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}