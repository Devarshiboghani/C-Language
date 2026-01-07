#include <stdio.h>

int main()
{
    float ml = 0, ltr = 0;

    printf("Enter number of ml = ");
    scanf("%f", &ml);

    ltr = ml/1000;

    printf("%.0f ml = %.2f ltr", ml, ltr);

    return 0;
}