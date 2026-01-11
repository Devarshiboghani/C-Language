#include <stdio.h>

int main()
{
    float celsius = 0, kelvin = 0;

    printf("Enter temperature in celsius = ");
    scanf("%f", &celsius);

   kelvin = celsius + 273.15;

   printf("%.2f celsius = %.2f kelvin", celsius, kelvin);
   
    return 0;
}