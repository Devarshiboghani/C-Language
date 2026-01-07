#include <stdio.h>

int main()
{
    float hr = 0, day = 0, yr = 0, cen = 0;

    printf("Enter number of hr = ");
    scanf("%f", &hr);

    day = hr/24;
    yr = day/365;
    cen = yr/100;

    printf("%.0f hr = %.2f cen", hr, cen);

    return 0;
}