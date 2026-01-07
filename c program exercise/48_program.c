#include <stdio.h>

int main()
{
    float mtr = 0, cm = 0;

    printf("Enter number of mtr = ");
    scanf("%f", &mtr);

    cm = mtr*100;

    printf("%.0f mtr = %.2f cm", mtr ,cm);
    
    return 0;
}