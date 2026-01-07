#include <stdio.h>

int main()
{
    float day = 0, yr = 0, mille = 0;

    printf("Enter number of day = ");
    scanf("%f", &day);

    yr = day/365;
    mille = yr/1000;

    printf("%.0f day = %.2f mille", day, mille);
    
    return 0;
}