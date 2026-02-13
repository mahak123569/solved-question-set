// To calculate an average of marks in mathematics
#include <stdio.h>

int main()
{
    // Declaration
    int marks, total_marks = 0, count = 0;
    // A while loop will run until a user enters a negative number or zero
    while (1)
    {
        printf("Input mathematics marks(0 to terminate): ");
        scanf("%d", &marks);
        // if user enter a negative or zero loop will stop and program ends.
        if (marks <= 0)
        {
            break;
        }
        // Total marks calculates
        total_marks += marks;
        // count will count the number of marks
        count++;
    }
    // count is greater than zero then average marks is calculate.
    if (count > 0)
    {
        float avg = (float)total_marks / count;
        printf("Average marks in mathematics=%.2f\n", avg);
    }
    else
    {
        printf("No marks are input.\n");
    }
    return 0;
}