#include <stdio.h>

int main()
{
    float mile = 0, km = 0, mtr = 0, cm = 0, inch = 0;

    printf("Enter number of mile = ");
    scanf("%f", &mile);

    km = mile*1.60934;
    mtr = km*1000;
    cm = mtr*100;
    inch = cm/2.54;

    printf("%.0f mile = %.2f inch", mile, inch);
    
    return 0;
}