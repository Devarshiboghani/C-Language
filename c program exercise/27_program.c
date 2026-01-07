#include <stdio.h>

int main()
{
    float mille = 0, yr = 0, day = 0, hr = 0;

    printf("Enter number of mille = ");
    scanf("%f", &mille);

    yr = mille*1000;
    day = yr*365;
    hr = day*24;

    printf("%.0f mille = %.2f hr\n", mille, hr);

    return 0;
}