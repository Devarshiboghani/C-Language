#include <stdio.h>

int main()
{
    float min=0, hr=0, day=0, yr=0, cen=0;

    printf("Enter number of min = ");
    scanf("%f",&min);

    hr = min/60;
    day = hr/24;
    yr = day/365;
    cen = yr/100;

    printf("%.0f min = %.2f cen", min, cen);
    return 0;
}