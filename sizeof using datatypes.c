#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    a = sizeof(int);
    b = sizeof(char);
    c = sizeof(float);
    d = sizeof(double);
    e = sizeof(void);

    printf("%d\n%d\n%d\n%d\n", a, b, c, d);
    return 0;
}