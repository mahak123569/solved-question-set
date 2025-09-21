#include <stdio.h>
int findmin(int a, int b, int c, int d)
{
    if (a <= b && a <= c && a <= d)
    {
        return a;
    }
    else if (b <= a && b <= c && b <= d)
    {
        return b;
    }
    else if (c <= a && c <= b && c <= d)
    {
        return c;
    }
    else if (d <= a && d <= b && d <= c)
    {
        return d;
    }
    else
    {
        printf("not correct");
    }
}

int main()
{
    int num1, num2, num3, num4;
    printf("Enter four integer: ");
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);
    int min = findmin(num1, num2, num3, num4);
    printf("The minimum number of four integer is = %d", min);
    return 0;
}