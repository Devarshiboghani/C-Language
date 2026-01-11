#include <stdio.h>

int main()
{
    float ton = 0, kg = 0, gm = 0;

    printf("Enter number of ton = ");
    scanf("%f", &ton);

    kg = ton*1000;
    gm = kg*1000;

    printf("%.2f ton = %.2f gm", ton, gm);
    
    return 0;
}