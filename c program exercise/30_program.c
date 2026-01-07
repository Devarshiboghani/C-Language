#include <stdio.h>

int main()

{
    float cen = 0, yr = 0, week = 0;

    printf("Enter number of cen = ");
    scanf("%f", &cen);

    yr = cen*100;
    week = yr*52;

    printf("%.0f cen = %.2f week\n", cen, week);

    return 0;
}