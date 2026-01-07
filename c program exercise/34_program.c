#include <stdio.h>

int main()
{
    float dec = 0, yr = 0;

    printf("Enter number of dec = ");
    scanf("%f", &dec);

    yr = dec*10;

    printf("%.0f dec = %.2f yr\n", dec, yr);
    return 0;
}