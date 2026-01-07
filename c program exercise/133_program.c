#include <stdio.h>

int main()
{
    float inch = 0, cm = 0;

    printf("Enter number of inch = ");
    scanf("%f", &inch);

    cm = inch*2.54;

    printf("%.0f inch = %.2f cm", inch, cm);

    return 0;
}