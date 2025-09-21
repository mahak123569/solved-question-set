#include <stdio.h>
int main()
{
    int days, weeks, years;
    printf("Enter a days: ");
    scanf("%d", &days);

    years = (days / 365);
    weeks = (days % 365) / 7;
    days = (days % 365) % 30;

    printf("%d\n%d\n%d\n", years, weeks, days); 
    return 0;
}