#include <stdio.h>

int main()
{
    double inch = 0, cm = 0, mtr = 0, km = 0, mile = 0;

    printf("Enter number of inch = ");
    scanf("%lf", &inch);

    cm = inch * 2.54;
    mtr = cm/100;
    km = mtr/1000;
    mile = km/1.60934;

    printf("%.2f inch = %.6f mile", inch, mile);
    
    return 0;
}