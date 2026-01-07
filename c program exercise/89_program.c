#include <stdio.h>

int main()
{
    float yr = 0, day = 0, hr = 0;

    printf("Enter number of yr = ");
    scanf("%f", &yr);

    day = yr*365;
    hr = day*24;

    printf("%.0f yr = %.2f hr", yr, hr);
    
    return 0;
}