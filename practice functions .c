#include <stdio.h>
int perimetercircle(int rad);
float circlearea(int rad);
int main()
{
    int rad = 3;
    printf("perimeter of a circle is = %d", perimetercircle(3));
    return 0;
}
int perimetercircle(int rad)
{
    return 2 * 3.14 * rad;
}
float circlearea(int rad)
{
    return 3.14 * rad * rad;
}