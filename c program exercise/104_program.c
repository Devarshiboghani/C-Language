#include <stdio.h>

int main()
{
    float cm = 0, mtr = 0;

    printf("Enter number of cm = ");
    scanf("%f", &cm);

    mtr = cm/100;

    printf("%.0f cm = %.2f mtr", cm, mtr);

    return 0;
}