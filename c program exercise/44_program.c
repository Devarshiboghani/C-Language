#include <stdio.h>

int main()
{
    float sec = 0, min = 0, hr = 0, day = 0, yr = 0, mille = 0;

    printf("Enter number of sec = ");
    scanf("%f", &sec);

    min = sec/60;
    hr = min/60;
    day = hr/24;
    yr = day/365;
    mille = yr/1000;

    printf("%.0f sec = %.2f mille", sec, mille);
    
    return 0;
}