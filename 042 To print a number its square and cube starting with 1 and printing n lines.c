#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Input number of lines: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        printf("%d%d%d", i, (int)pow(i, 2), (int)pow(i, 3));
        printf("\n");
    }
    
    return 0;
}