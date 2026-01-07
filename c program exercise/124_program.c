#include <stdio.h>

int main()
{
    float week = 0, yr = 0, cen = 0;

    printf("Enter number of week = ");
    scanf("%f", &week);

    yr = week/52;
    cen = yr/100;

    printf("%.0f week = %.2f cen", week, cen);

    return 0;
}