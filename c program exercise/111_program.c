#include <stdio.h>

int main()
{
    float mille = 0, yr = 0, day = 0;

    printf("Enter number of mille = ");
    scanf("%f", &mille);

    yr = mille*1000;
    day = yr*365;

    printf("%.0f mille = %.2f day", mille, day);
    
    return 0;
}