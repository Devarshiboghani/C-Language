#include <stdio.h>

int main()
{
    float day = 0,yr = 0, dec = 0;

    printf("Enter number of day = ");
    scanf("%f", &day);

    yr = day/365;
    dec = yr/10;

    printf("%.0f day = %.2f dec\n", day, dec);

    return 0;
}