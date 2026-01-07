#include <stdio.h>

int main()
{
    float week = 0, yr = 0;

    printf("Enter number of week = ");
    scanf("%f", &week);

    yr = week/52;

    printf("%.0f week = %.2f yr", week ,yr);
    
    return 0;
}