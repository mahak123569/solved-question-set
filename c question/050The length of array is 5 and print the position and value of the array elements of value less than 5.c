
#include <stdio.h>

int main()
{
    float arr[5];
    printf("Input the 5 members of the array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < 5)
        {
            printf("arr[%d]=%.1f\n", i, arr[i]);
        }
    }
    return 0;
}