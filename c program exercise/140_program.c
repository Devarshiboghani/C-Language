#include <stdio.h>

int main()
{
    float week = 0, day = 0, hr = 0;

    printf("Enter number of week = ");
    scanf("%f", &week);

    day = week * 7;
    hr = day * 24;

    printf("%.0f week = %.2f hr", week, hr);
    
    return 0;
}