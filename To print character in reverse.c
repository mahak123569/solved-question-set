#include <stdio.h>
int main()
{
    char a = 'X';
    char b = 'M';
    char c = 'L';

    // reverse char
    char d = 'X';
    a = 'L';
    c = d;
    printf("%c%c%c", a, b, c);
    return 0;
}