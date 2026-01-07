#include <stdio.h>

int main()
{
    float km = 0, ltr = 0;

    printf("Enter number of km = ");
    scanf("%f", &km);

    ltr = km*1000;
    
    printf("%.0f km = %.2f ltr", km, ltr);

    return 0;
}