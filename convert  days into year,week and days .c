#include <stdio.h>
int main()
{
    int days, years, weeks, _days;
    printf("Input days : ");
    scanf("%d", &days);
    years = days / 365;
    weeks = (days % 365) / 7;
    _days = (days % 365) % 30;
    printf("%d\n%d\n%d\n", years, weeks, _days);
    return 0;
}