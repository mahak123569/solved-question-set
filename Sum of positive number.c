#include <stdio.h>
int main()
{
    int pos_num[500], sum = 0;
    printf("Input a positive number less than 500: ");
    for (int i = 1; i < 500; i++)
    {
        scanf("%d", &pos_num[i]);
        sum = sum + pos_num[i];
        printf("Sum of the digits of %d is %d", pos_num[i], sum);
    }
    return 0;
}