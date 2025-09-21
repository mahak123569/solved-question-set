#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks ");
    scanf("%d", &marks);
    if (marks >= 30 && marks <= 50)
    {
        printf("C grade");
    }
    else if (marks >= 50 && marks <= 90)
    {
        printf("B grade");
    }
    else if (marks >= 90 && marks <= 100)
    {
        printf("A grade");
    }
    else
    {
        printf("this is not correct number");
    }
    return 0;
}