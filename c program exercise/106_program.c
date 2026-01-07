#include <stdio.h>

int main()
{
    float feet = 0, cm = 0, mtr = 0, km = 0, mile = 0;

    printf("Enter number of feet = ");
    scanf("%f", &feet);

    cm = feet/30.48;
    mtr = cm/100;
    km = mtr/1000;
    mile = km/1.60934;

    printf("%.0ffeet = %.2f mile", feet, mile);

    return 0;
}