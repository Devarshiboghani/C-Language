#include <stdio.h>

int main()
{
    float kelvin, fahrenheit;

    printf("Enter number of kelvin = ");
    scanf("%f", &kelvin);

    fahrenheit = (kelvin - 273.15) * 9.0/5.0 + 32;

    printf("%.0f kelvin = %.2f fahrenheit", kelvin, fahrenheit);
    return 0;
}