#include <stdio.h>

int main()
{
    float fahrenheit, celsius;

    printf("Enter fahrenheit = ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("%f fahrenheit = %.2f celsius", fahrenheit, celsius);
    return 0;
}