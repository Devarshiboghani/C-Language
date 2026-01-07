#include <stdio.h>

int main()
{
    float yr = 0, day = 0, hr = 0, min = 0, sec = 0;

    printf("Enter number of yr = ");
    scanf("%f", &yr);

    day = yr*365;
    hr = day*24;
    min = hr*60;
    sec = min*60;

    printf("%.0f yr = %.2f sec", yr, sec);
    
    return 0;
}