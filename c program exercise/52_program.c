#include <stdio.h>

int main()
{
    float week = 0, day = 0;

    printf("Enter number of week = ");
    scanf("%f", &week);

    day = week * 7;
    
    printf("%.f week = %.f day", week, day);
    
    return 0;
}