#include <stdio.h>

int main()
{
    int fahrenheit = 0, celsius = 0;

    printf("Enter fahrenheit = ");
    scanf("%d", &fahrenheit);

    celsius = 9/5*(fahrenheit-32);

    printf("%d fahrenheit = %d celsius", fahrenheit, celsius);
    return 0;
}