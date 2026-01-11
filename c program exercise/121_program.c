#include <stdio.h>

int main()
{
    float km = 0, mtr = 0, cm = 0, feet = 0;

    printf("Enter number of km = ");
    scanf("%f", &km);

    mtr = km*1000;
    cm = mtr*100;
    feet = cm / 30.48;

    printf("%.2f km = %.2f feet", km, feet);

    return 0;
}