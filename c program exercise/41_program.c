#include <stdio.h>

int main()
{
    float min = 0, hr = 0, day = 0, yr = 0, mille = 0;

    printf("Enter number of min = ");
    scanf("%f", &min);

    hr = min/60;
    day = hr/24;
    yr = day/365;
    mille = yr/1000;

    printf("%.0f min = %.2f mille", min, mille);
    
    return 0;
}