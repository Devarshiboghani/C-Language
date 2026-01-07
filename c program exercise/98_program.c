#include <stdio.h>

int main()
{
    float min = 0, hr = 0, day = 0, yr = 0, mon = 0;

    printf("Enter number of min = ");
    scanf("%f", &min);

    hr = min/60;
    day = hr/24;
    yr = day/365;
    mon = yr*12;

    printf("%.0f min = %.2f mon", min, mon);
    
    return 0;
}