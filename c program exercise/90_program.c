#include <stdio.h>

int main()
{
    float dec = 0, yr = 0, day = 0;

    printf("Enter number of dec = ");
    scanf("%f", &dec);

    yr = dec*10;
    day = yr*365;

    printf("%.0f dec = %.2f day", dec, day);
    
    return 0;
}