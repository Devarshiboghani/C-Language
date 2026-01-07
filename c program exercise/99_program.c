#include <stdio.h>

int main()
{
    float day = 0, yr = 0, cen = 0;

    printf("Enter number of day = ");
    scanf("%f", &day);

    yr = day/365;
    cen = yr/100;

    printf("%.0f day = %.2f cen", day, cen);

    return 0;
}