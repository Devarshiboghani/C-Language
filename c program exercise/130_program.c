#include <stdio.h>

int main()
{
    float f = 0, k = 0;

    printf("Enter number of f = ");
    scanf("%f", &f);

    k = (f - 32)/1.8 + 273.15;

    printf("%.0f f = %.2f k", f, k);
    
    return 0;
}