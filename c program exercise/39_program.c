#include <stdio.h>

int main()
{
    float inch = 0,cm = 0, mtr = 0, km = 0;

    printf("Enter number of inch = ");
    scanf("%f", &inch);

    cm = inch*2.54;
    mtr = cm/100;
    km = mtr/1000;

    printf("%.0f inch = %.6f km", inch , km);
    return 0;
}