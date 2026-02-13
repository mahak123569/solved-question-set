#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Input two pair values (integer values): ");
    scanf("%d%d", &num1, &num2);

    if (num1 < num2)
    {
        printf("Ascending order\n");
    }
    else
    {
        printf("Decending order\n");
    }
}