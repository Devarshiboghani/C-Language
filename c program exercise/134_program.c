#include <stdio.h>

int main()
{
    float yr = 0, cen = 0;

    printf("Enter number of yr = ");
    scanf("%f", &yr);

    cen = yr/100;

    printf("%.0f yr = %.2f cen", yr, cen);
    
    return 0;
}