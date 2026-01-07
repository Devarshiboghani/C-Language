#include <stdio.h>

int main()
{
    float mile = 0, km = 0, mtr = 0;

    printf("Enter number of mile = ");
    scanf("%f", &mile);

    km = mile*1.60934;
    mtr = km*1000;

    printf("%.0f mile = %.2f mtr", mile, mtr);

    return 0;
}