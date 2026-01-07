#include <stdio.h>

int main()
{
    float week = 0, yr = 0, day = 0, hr = 0;

    printf("Enter number of week = ");
    scanf("%f", &week);

    yr = week/52;
    day = yr*365;
    hr = day*24;

    printf("%.0f week = %.2f hr", week, hr);
    
    return 0;
}