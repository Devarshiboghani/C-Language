#include <stdio.h>

int main()
{
    float mile = 0, km = 0, mtr = 0, cm = 0, feet = 0;

    printf("Enter number of mile = ");
    scanf("%f", &mile);

    km = mile*1.60934;
    mtr = km*1000;
    cm = mtr*100;
    feet = cm*30.48;

    printf("%.0f mile = %.2f feet", mile, feet);

    return 0;
}