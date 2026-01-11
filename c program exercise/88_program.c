#include <stdio.h>

int main()
{
    float min = 0, hr = 0, day = 0, yr = 0;

    printf("Enter number of min = ");
    scanf("%f", &min);

    hr = min/60;
    day = hr/24;
    yr = day/365;

    printf("%.2f min = %.6f yr", min, yr);

    return 0;
}