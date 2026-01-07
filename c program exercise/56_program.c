#include <stdio.h>

int main()
{
    float cm = 0, mtr = 0, km = 0, mile = 0;

    printf("Enter number of cm = ");
    scanf("%f", &cm);

    mtr = cm/100;
    km = mtr/1000;
    mile = km/1.60934;

    printf("%.0f cm = %.2f mile", cm, mile);
    
    return 0;
}