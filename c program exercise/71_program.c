#include <stdio.h>

int main()
{
    float cen = 0, mille = 0;

    printf("Enter number of cen = ");
    scanf("%f", &cen);

    mille = cen/10;

    printf("%.2f cen = %.2f mille", cen, mille);

    return 0;
}