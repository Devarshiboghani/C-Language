#include <stdio.h>

int main()
{
    float day = 0, hr = 0;

    printf("Enter number of day = ");
    scanf("%f", &day);

    hr = day*24;

    printf("%.0f day = %.2f hr", day, hr);
    
    return 0;
}