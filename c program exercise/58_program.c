#include <stdio.h>

int main()
{
    float week = 0, day = 0, hr = 0, min = 0, sec = 0;

    printf("Enter number of week = ");
    scanf("%f", &week);

    day = week*7;
    hr = day*24;
    min = hr*60;
    sec = min*60;

    printf("%.0f week = %.2f sec", week, sec);

    return 0;
}