#include <stdio.h>

int main()
{
    float week = 0,year = 0, millennium = 0;

    printf("Enter number of week = ");
    scanf("%f", &week);

    year = week / 52;
    millennium = year / 1000;

    printf("%.0f week = %.2f millennium\n", week, millennium);
    return 0;
}