#include <stdio.h>

int main()
{
    float yr = 0, dec = 0;

    printf("Enter number of yr = ");
    scanf("%f", &yr);

    dec = yr/10;

    printf("%.0f yr = %.2f dec", yr, dec);

    return 0;
}