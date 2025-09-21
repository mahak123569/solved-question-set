#include <stdio.h>
int main()
{
    int n;
    int number[n];
    printf("Enter n number: ");
    scanf("%d", &n);

    printf("Enter %d number : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    printf("Original number = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", number[i]);
    }
    printf("\n");

    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (number[j] > number[j + 1])
            {
                int temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }
    printf("Sorted number = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", number[i]);
    }
    printf("\n");
    return 0;
}