#include <stdio.h>

int main()
{
    float mille = 0, yr = 0, mon = 0;

    printf("Enter number of mille = ");
    scanf("%f", &mille);

    yr = mille*1000;
    mon = yr*12;

    printf("%.0f mille = %.2f mon", mille, mon);
    return 0;
}