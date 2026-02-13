#include <stdio.h>

int main()
{
    // Declare
    float s = 1.0, numerator = 3.0, denominator = 2.0;
    // loop
    for (int i = 1; i <= 3; i++)
    {
        s += numerator / denominator; // s=s+numerator/denominator.
        numerator += 2.0;             // numerator=numerator+2.0.
        denominator *= 2.0;           // denominator=denominator*2.0.
    }
    printf("Value of series:%.2f\n", s);

    return 0;
}






































