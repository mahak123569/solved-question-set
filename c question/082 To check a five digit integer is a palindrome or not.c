#include <stdio.h>
int main()
{
    int num, originalNum, remainder, reversedNum = 0;
    printf("Input a five digit number: ");
    scanf("%d", &num);
    // originalNum stores the number
    originalNum = num;
    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    // checks the original number is equal to reverse number
    if (originalNum == reversedNum)
    {
        printf("%d is an palindrome.\n", originalNum);
    }
    else
    {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
