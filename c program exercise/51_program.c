#include <stdio.h>

int main()
{
    float mtr = 0, cm = 0, inch = 0;

    printf("Enter number of mtr = ");
    scanf("%f", &mtr);

    cm = mtr*100;
    inch = cm*2.54;

    printf("%.0f mtr = %.2f inch\n", mtr, inch);
    
    return 0;
}