#include <stdio.h>

int main()
{
    float cen=0, yr=0, mon=0;

    printf("Enter number of cen = ");
    scanf("%f", &cen);

    yr = cen*100;
    mon = yr*12;

    printf("%f cen = %f mon\n", cen, mon);
    return 0;
}