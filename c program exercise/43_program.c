#include <stdio.h>

int main()
{
    float inch = 0, cm = 0, mtr = 0;

    printf("Enter number of inch = ");
    scanf("%f", &inch);

    cm = inch*2.54;
    mtr = cm/100;

    printf("%.0f inch = %.2f mtr", inch, mtr);
    return 0;
}