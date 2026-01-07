#include <stdio.h>

int main()
{
    float hr = 0, day = 0, yr =0 , mon = 0;

    printf("Enter number of hr = ");
    scanf("%f", &hr);

    day = hr/24;
    yr = day/365;
    mon = yr*12;

    printf("%.0f hr = %.2f mon", hr, mon);

    return 0;
}