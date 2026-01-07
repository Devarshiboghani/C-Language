#include <stdio.h>

int main()
{ 
    float week = 0, yr = 0, dec = 0;

    printf("Enter number of week = ");
    scanf("%f", &week);

    yr = week/52;
    dec = yr/10;

    printf("%.0f week = %.2f dec", week, dec);

    return 0;
}