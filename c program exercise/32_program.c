#include <stdio.h>

int main()
{
    float cen = 0, yr = 0, day = 0;

    printf("Enter number of cen = ");
    scanf("%f", &cen);

    yr = cen*100;
    day = yr*365;

    printf("%.0f cen = %.1f day\n", cen, day);

    return 0;
}