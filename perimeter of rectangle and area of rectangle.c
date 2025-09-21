#include <stdio.h>
int Rectangleperimeter(int hei, int wid); // hei=height,wid=width
int Rectanglearea(int hei, int wid);
int main()
{
    int hei = 7;
    int wid = 5;
    printf("The perimeter of rectangle whose height is %d and width is %d = %d", hei, wid, Rectanglearea(7, 5));
    return 0;
}
int Rectangleperimeter(int hei, int wid)
{
    return 2 * (hei + wid);
}
int Rectanglearea(int hei, int wid)
{
    return hei * wid;
}