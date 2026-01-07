#include <stdio.h>

int main()
{
    float mille = 0, dec = 0;

    printf("Enter number of mille = ");
    scanf("%f", &mille);

    dec = mille*100;

    printf("%.0f mille = %.2f dec", mille, dec);
    
    return 0;
}