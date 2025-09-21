#include <stdio.h>
#include <math.h>
int main()
{
    int specified_value;
    printf("Input a specified_value: ");
    scanf("%d", &specified_value);
    for (int i = 1; i <= specified_value; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", (int)pow(i, 2));
        }
    }
    return 0;
}