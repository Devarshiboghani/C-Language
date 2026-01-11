#include <stdio.h>

int main()
{
    float km = 0, mtr = 0, cm = 0, inch = 0;

    printf("Enter number of km = ");
    scanf("%f", &km);

    mtr = km*1000;
    cm = mtr*100;
    inch = cm / 2.54;

    printf("%.0f km = %.2f inch", km, inch);

    return 0;
}