#include <stdio.h>

int main()
{
    float day = 0, yr = 0, month = 0;

    printf("Enter number of day = ");
    scanf("%f", &day);

    yr = day/365;
    month = yr*12;

    printf("%.f day = %.f month", day ,month);
    
    return 0;
}