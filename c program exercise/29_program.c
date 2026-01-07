#include <stdio.h>

int main()
{
    float hr = 0, day = 0;

    printf("Enter number of hr = ");
    scanf("%f", &hr);

    day = hr/24;

    printf("%f hr = %f day\n", hr, day);

    return 0;
}