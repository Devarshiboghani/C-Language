#include <stdio.h>

int main()
{
    float cen=0,dec=0;

    printf("Enter number of cen = ");
    scanf("%f", &cen);

    dec = cen*10;

    printf("%.0f cen = %.2f dec",cen, dec);
    return 0;
}