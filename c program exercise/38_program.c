#include <stdio.h>

int main()
{
    float mtr = 0,km = 0, mile = 0;

    printf("Enter number of mtr = ");
    scanf("%f", &mtr);

    km = mtr/1000;
    mile = km/1.60934;

    printf("%.0f mtr = %.2f mile",mtr, mile);

    return 0;
}