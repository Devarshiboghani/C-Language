#include <stdio.h>

int main()
{
    float day = 0, yr = 0;

    printf("Enter number of day = ");
    scanf("%f", &day);

    yr = day/365;

    printf("%.0f day = %.2f yr", day, yr);

    return 0;
}