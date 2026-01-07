#include <stdio.h>

int main()
{
    float week = 0, yr = 0, mon = 0;

    printf("Enter number of week = ");
    scanf("%f", &week);

    yr = week/52;
    mon = yr*12;

    printf("%.0f week = %.2f mon", week, mon);

    return 0;
}