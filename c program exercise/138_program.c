#include <stdio.h>

int main()
{
    float dec = 0, yr = 0, week = 0;

    printf("Enter number of dec = ");
    scanf("%f", &dec);

    yr = dec*10;
    week = yr*52;

    printf("%.0f dec = %.2f week", dec, week);

    return 0;
}