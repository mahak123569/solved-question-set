#include <stdio.h>

int main()
{
    int num[5];
    int count_pos = 0, count_neg = 0;
    printf("Enter a number: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);

        if (num[i] > 0)
        {
            count_pos++;
        }
        else if (num[i] < 0)
        {
            count_neg++;
        }
    }
    printf("Number of positive number = %d\n", count_pos);
    printf("Number of Negative number = %d\n", count_neg);

    return 0;
}