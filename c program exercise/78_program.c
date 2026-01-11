#include <stdio.h>

int main()
{
    float dec = 0, cen = 0;

    printf("Enter number of dec = ");
    scanf("%f", &dec);

    cen = dec/10;

    printf("%.2f dec = %.2f cen", dec, cen);
    
    return 0;
}