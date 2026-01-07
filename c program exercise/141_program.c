#include <stdio.h>

int main()
{
    float mon = 0, yr = 0, day = 0, hr = 0, min = 0, sec = 0;

    printf("Enter number of mon = ");
    scanf("%f", &mon);

    yr = mon/12;
    day = yr*365;
    hr = day*24;
    min = hr*60;
    sec = min*60;

    printf("%.0f mon = %.2f sec", mon, sec);
    
    return 0;
}