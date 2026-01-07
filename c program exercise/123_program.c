#include <stdio.h>

int main()
{
    float hr = 0, min = 0;

    printf("Enter number of hr = ");
    scanf("%f", &hr);

    min = hr*60;

    printf("%.0f hr = %.2f min", hr, min);

    return 0;
}