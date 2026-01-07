#include <stdio.h>

int main()
{
    float celsius = 0, fahrenheit = 0;

    printf("Enter number of celsius = ");
    scanf("%f", &celsius);

    fahrenheit = (celsius*1.8) + 32;

    printf("%.0f celsius = %.2f fahrenheit", celsius, fahrenheit);
    
    return 0;
}