#include <stdio.h>

int main()
{
    float dec = 0, yr = 0, mon = 0; 

    printf("Enter number of dec = ");
    scanf("%f", &dec);

    yr = dec*10;
    mon = yr*12;

    printf("%.0f dec = %.2f mon", dec, mon);
    
    return 0;
}