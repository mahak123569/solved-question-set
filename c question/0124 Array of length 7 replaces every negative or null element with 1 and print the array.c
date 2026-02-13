#include <stdio.h>
int main()
{
    int length[7];
    printf("Input 7 array elements: ");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &length[i]);
    }
    for (int i = 0; i < 7; i++)
    {
        if (length[i] <= 0)
        {
            length[i] = 1;
        }

        printf("array_num[%d]=%d\n", i, length[i]);
    }
    return 0;
}