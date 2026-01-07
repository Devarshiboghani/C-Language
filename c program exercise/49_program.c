#include <stdio.h>

int main()
{
    float mille = 0, yr = 0, day = 0, hr = 0, min = 0, sec = 0;

    printf("Enter number of mille = ");
    scanf("%f", &mille);

    yr = mille*1000;
    day = yr*365;
    hr = day*24;
    min = hr*60;
    sec = min*60;

    printf("%.0f mille = %.2f sec", mille, sec);
    
    return 0;
}