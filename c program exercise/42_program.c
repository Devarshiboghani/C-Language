#include <stdio.h>

int main()
{
    float inch = 0, feet = 0;

    printf("Enter number of inch = ");
    scanf("%f", &inch);

    feet = inch/12;

    printf("%.0f inch = %.2f feet", inch ,feet);

    return 0;
}