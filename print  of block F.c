#include <stdio.h>
int main()
{
    for (int i = 0; i <= 8; i++)
    {
        if (i == 0 || i == 4)
        {
            printf("#######\n");
        }
        else
        {
            printf("#\n");
        }
    }
    return 0;
}