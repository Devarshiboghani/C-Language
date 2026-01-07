#include <stdio.h>

int main()
{
    float hr =0, day = 0, yr = 0, mille = 0;

    printf("Enter number of hr = ");
    scanf("%f", &hr);

    day = hr/24;
    yr = day/365;
    mille = yr/1000;

    printf("%.0f hr = %.2f mille", hr, mille);
    
    return 0;
}