#include <stdio.h>

int main()
{
    float ton = 0, kg = 0;

    printf("Enter number of ton = ");
    scanf("%f", &ton);

    kg = ton*1000;

    printf("%.0f ton = %.2f kg", ton, kg);

    return 0;
}