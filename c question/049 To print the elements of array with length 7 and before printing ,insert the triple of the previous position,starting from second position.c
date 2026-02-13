#include <stdio.h>


int main()
{
    int arr[7], first_num;
    printf("Input the first number of array: ");
    scanf("%d", &first_num);

    arr[0] = first_num;
    printf("arr[0] = %d\n", arr[0]);

    for (int i = 1; i < 7; i++)
    {
        arr[i] = arr[i - 1] * 3;
        printf("arr[%d]= %d\n", i, arr[i]);
    }
    return 0;
}