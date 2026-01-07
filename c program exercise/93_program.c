#include <stdio.h>

int main()
{
    float mon = 0, yr = 0, dec = 0;

    printf("Enter number of mon = ");
    scanf("%f", &mon);

    yr = mon/12;
    dec = yr/10;

    printf("%.0f mon = %2f dec", mon, dec);
    
    return 0;
}