#include <stdio.h>

int main()
{
    float mille = 0, yr = 0, week = 0;

    printf("Enter number of mille = ");
    scanf("%f", &mille);

    yr = mille*1000;
    week = yr*52;

    printf("%.0f mille = %.2f week\n", mille , week);

    return 0;
}