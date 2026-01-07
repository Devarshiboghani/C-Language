#include <stdio.h>

int main()
{
    float km = 0, mtr = 0, cm = 0;

    printf("Enter number of km = ");
    scanf("%f", &km);

    mtr = km*1000;
    cm = mtr*100;

    printf("%.0f km = %.2f cm", km, cm);
    
    return 0;
}