#include <stdio.h>
int counteven(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[] = {2, 3, 5, 6, 7, 8, 9, 15, 34, 12, 98, 76, 44};
    printf("Even number = %d\n", counteven(arr, 13));
    return 0;
}