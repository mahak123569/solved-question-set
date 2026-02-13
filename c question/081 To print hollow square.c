#include <stdio.h>
int main()
{
    // Declare side
    int side;
    // Input the size of square
    printf("Input the size of the square: ");

    scanf("%d", &side);
    // check if the size within the valid range
    if (side < 1 || side > 10)
    {
        printf("Size of sides between 1 and 10\n");
        return 1; // exit with error
    }
    // print the top row
    for (int i = 0; i < 10; i++)
    {
        printf("#");
    }
    printf("\n");
    // print the middle row
    for (int i = 0; i < side - 2; i++)
    {
        printf("#");
        for (int j = 0; j < side - 2; j++)
        {
            printf(" ");
        }
        printf("#\n");
    } // print the bottom row
    for (int i = 0; i < 10; i++)
    {
        printf("#");
    }
    printf("\n");
    return 0;
}