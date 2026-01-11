#include <stdio.h>

int main()
{
    float f = 0, k = 0;

    printf("Enter temperature in Fahrenheit = ");
    scanf("%f", &f);

    k = (f - 32)/1.8 + 273.15;

    printf("%.2f f = %.2f k", f, k);
    
    return 0;
}