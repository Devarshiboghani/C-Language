#include <stdio.h>

int main()
{
    float day = 0, hr = 0, min = 0;

    printf("Enter number of day = ");
    scanf("%f", &day);

    hr = day*24;
    min = hr*60;

    printf("%.0f day = %.2f min", day, min);

    return 0;
}