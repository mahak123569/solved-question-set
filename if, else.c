#include <stdio.h>
int main()
{
    int p, q, r, s;
    printf("\nEnter the value of p: ");
    printf("\nEnter the value of q: ");
    printf("\nEnter the value of r: ");
    printf("\nEnter the value of s: ");
    scanf("%d%d%d%d", &p, &q, &r, &s);

    if ((q > 0) && (r > 0) && (s > 0) && (p % 2 == 0) && (q > r) && (s > p) && (r + s > p + q))
    {
        printf("Correct values");
    }
    else
    {
        printf("Wrong values");
    }
    printf("\n");
    return 0;
}