#include <stdio.h>
int main()
{
    float num1, num2, Result;
    printf("Input two integer values: ");
    scanf("%f%f", &num1, &num2);

    Result = num1 / num2;

    if (num2 != 0)
    {
        printf("Result:%.2f\n", Result);
    }
    else
    {
        printf("Division is not possible.\n");
    }
    return 0;
}
