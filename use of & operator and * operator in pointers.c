#include <stdio.h>
int main()
{
    int p = 30;
    int *ptr = &p;

    // value at ptr
    printf("%d\n", p);
    printf("%d\n", *ptr);
    printf("%d\n", *(&p));
    // address of ptr
    printf("%u\n", &p);
    printf("%u\n", &ptr);
    return 0;
}