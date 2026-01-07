#include <stdio.h>

int main()
{
    float mon = 0, yr = 0, day = 0, hr = 0;

    printf("Enter number of mon = ");
    scanf("%f", &mon);

    yr = mon/12;
    day = yr*365;
    hr = day*24;

    printf("%.0f mon = %.2f hr", mon, hr);
    
    return 0;
}