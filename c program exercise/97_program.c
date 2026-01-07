#include <stdio.h>

int main()
{
    float gm = 0, kg = 0, ton = 0;

    printf("Enter number of gm = ");
    scanf("%f", &gm);

    kg = gm*1000;
    ton = kg*1000;

    printf("%.0f gm = %.2f ton", gm, ton);
    
    return 0;
}