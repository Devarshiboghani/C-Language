#include <stdio.h>

int main()
{
    float hr = 0, day = 0, yr = 0, dec = 0;

    printf("Enter number of hr = ");
    scanf("%f", &hr);

    day = hr/24;
    yr = day/365;
    dec = yr/10;

    printf("%.0f hr = %.2f dec", hr, dec);

    return 0;
}