#include <stdio.h>

int main()
{
    float kelvin = 0, celsius = 0;

    printf("Enter number of kelvin = ");
    scanf("%f", &kelvin);

    celsius = kelvin - 273.15;

    printf("%.2f kelvin = %.2f celsius", kelvin, celsius);
    
    return 0;
}