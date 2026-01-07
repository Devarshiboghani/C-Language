#include <stdio.h>

int main()
{
    float km = 0, mile = 0;

    printf("Enter number of km = ");
    scanf("%f", &km);

    mile = km/1.60934;

    printf("%.0f km = %.2f mile", km, mile);

    return 0;
}