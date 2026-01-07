#include <stdio.h>

int main()
{
    float min = 0, hr = 0, day = 0, week = 0;

    printf("Enter number of min = ");
    scanf("%f", &min);

    hr = min/60;
    day = hr/24;
    week = day/7;

    printf("%.0f min = %.2f week", min, week);
    
    return 0;
}