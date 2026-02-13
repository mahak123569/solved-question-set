#include <stdio.h>
int main()
{
    int num;
    printf("Input a number(integer): ");
    scanf("%d", &num);
    printf("Sequence:\n");
    for (int i = 1; i <= num; i++)
    {
        if (i != num)
        {
            printf("%d,", i);
        }
        else
        {
            printf("%d.", i);
        }
    }
    return 0;
}