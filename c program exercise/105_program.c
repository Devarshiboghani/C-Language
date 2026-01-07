#include <stdio.h>

int main()
{
    float sec = 0, min = 0, hr = 0, day = 0, week = 0;

    printf("Enter number of sec = ");
    scanf("%f", &sec);

    min = sec/60;
    hr = min/60;
    day = hr/24;
    week = day/7;

    printf("%.0f sec = %.2f week", sec, week);

    return 0;
}