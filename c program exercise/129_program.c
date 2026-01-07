#include <stdio.h>

int main()
{
    float yr = 0, week = 0;

    printf("Enter number of yr = ");
    scanf("%f", &yr);

    week = yr*52;

    printf("%.0f yr = %.2f week", yr, week);

    return 0;
}