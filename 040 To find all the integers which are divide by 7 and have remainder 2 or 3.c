// Integers which are divide by 7 have remainder 2 or 3

#include <stdio.h>

int main()
{
    int num1, num2, numbers;
    printf("\nEnter first number: ");
    printf("\nEnter second number: ");

    scanf("%d%d", &num1, &num2);

    for (int i = num1; i <= num2; i++)
    {
        if (i % 7 == 2 || i % 7 == 3)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}