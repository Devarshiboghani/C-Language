#include <stdio.h>

int main()
{
    float hr = 0, day = 0, week = 0;

    printf("Enter number of hr = ");
    scanf("%f", &hr);

    day = hr/24;
    week = day/7;

    printf("%.0f hr = %.2f week", hr, week);
    
    return 0;
}