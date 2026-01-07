#include <stdio.h>

int main()
{
    float cen = 0, yr = 0;

    printf("Enter number of cen = ");
    scanf("%f", &cen);

    yr = cen*100;

    printf("%.0f cen = %.2f yr", cen, yr);
    
    return 0;
}