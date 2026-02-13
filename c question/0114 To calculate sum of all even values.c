#include <stdio.h>
int main()
{
    // Declaration of first number second number,sum is initialises with 0
    int num1, num2, sum = 0;
    // Input num1,num2 and sum=0;
    printf("Input two number(integer value): ");
    scanf("%d%d", &num1, &num2);

    for (int i = num1; i <= num2; i++)
    {
        // Check even number
        if (i % 2 == 0)
        {
            // Calculate sum
            sum += i;
        }
    }
    printf("Sum of all even values between %d and %d is %d\n", num1, num2, sum);
    return 0;
}