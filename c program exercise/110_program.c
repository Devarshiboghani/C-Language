#include <stdio.h>

int main()
{
    float day = 0, week = 0;

    printf("Enter number of day = ");
    scanf("%f", &day);

    week = day/7;

    printf("%.0f day = %.2f week", day, week);

    return 0;
}