#include <stdio.h>

int main()
{
    float mtr = 0, cm = 0, feet = 0;

    printf("Enter number of mtr = ");
    scanf("%f", &mtr);

    cm = mtr*100;
    feet = cm*30.48;

    printf("%.0f mtr = %.2f feet", mtr, feet);
    
    return 0;
}