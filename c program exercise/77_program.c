#include <stdio.h>

int main()
{
    float feet = 0, inch = 0;

    printf("Enter number of feet = ");
    scanf("%f", &feet);

    inch = feet*12;

    printf("%.0f feet = %.2f inch", feet, inch);
    
    return 0;
}