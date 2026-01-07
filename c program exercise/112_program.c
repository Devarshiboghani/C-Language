#include <stdio.h>

int main()
{
    float km = 0, mtr = 0;

    printf("Enter number of km = ");
    scanf("%f", &km);

    mtr = km*1000;

    printf("%.0f km = %.2f mtr", km, mtr);

    return 0;
}