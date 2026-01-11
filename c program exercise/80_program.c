#include <stdio.h>

int main()
{
    float dec = 0, yr = 0, day = 0, hr = 0;

    printf("Enter number of dec = ");
    scanf("%f", &dec);

    yr = dec*10;
    day = yr*365;
    hr = day*24;

    printf("%.2f dec = %.2f hr", dec, hr);
    
    return 0;
}