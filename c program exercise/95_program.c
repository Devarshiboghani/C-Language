#include <stdio.h>

int main()
{
    float dec = 0, mille = 0;

    printf("Enter number of dec = ");
    scanf("%f", &dec);

    mille = dec/100;

    printf("%.0f dec = %.2f mille", dec, mille);
    
    return 0;
}