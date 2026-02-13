#include <stdio.h>
int main()
{
    int num1, num2, sum = 0, count = 0;
    printf("Input two pairs value(integer value): ");
    scanf("%d%d", &num1, &num2);
    printf("Sequence from the lowest to highest number:\n");
    for (int i = num1; i <= num2; i++)
    {

        printf("%d ", i);

        sum += i;
        count++;
    }
    printf("\n");
    float average = (float)sum / count;
    printf("Average value of the said sequence %.2f\n", average);
    return 0;
}