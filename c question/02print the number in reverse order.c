#include <stdio.h>
int main()
{
    int n;
    int reversearr[n];
    printf("input the number of elements to store in the array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("element-%d:", i);
        scanf("%d", &reversearr[i]);
    }
    printf("The value store in the array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", reversearr[i]);
    }
    for (int i = 0; i < n / 2; i++)
    {
        int firstvalue = reversearr[i];
        int secondvalue = reversearr[n - i - 1];
        reversearr[i] = secondvalue;
        reversearr[n - i - 1] = firstvalue;
    }
    printf("\nThe value store into the  array in reverse are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", reversearr[i]);
    }
    printf("\n");
    return 0;
}