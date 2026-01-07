#include <stdio.h>

int main()
{
    float cm = 0, mtr = 0, km = 0;

    printf("Enter number of cm = ");
    scanf("%f", &cm);

    mtr = cm/100;
    km = mtr/1000;

    printf("%.0f cm = %.2f km", cm, km);

    return 0;
}