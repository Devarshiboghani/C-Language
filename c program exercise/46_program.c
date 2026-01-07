#include <stdio.h>

int main()
{
    float mille = 0, cen = 0;

    printf("Enter number of mille = ");
    scanf("%f", &mille);

    cen = mille*10;

    printf("%.0f mille = %.2f cen", mille, cen);
    
    return 0;
}