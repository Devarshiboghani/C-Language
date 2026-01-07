#include <stdio.h>

int main()
{
    float kelvin=0, fahrenheit=0;

    printf("Enter number of kelvin = ");
    scanf("%f", &kelvin);

    fahrenheit = (kelvin - 273.15)*9/5 + 32;

    printf("%.0f kelvin = %.2f fahrenheit", kelvin, fahrenheit);
    return 0;
}