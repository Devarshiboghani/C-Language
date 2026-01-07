#include <stdio.h>

int main()
{
    float cm = 0, feet = 0;

    printf("Enter number of cm = ");
    scanf("%f", &cm);

    feet = cm*30.48;

    printf("%.0f cm = %.2f feet", cm, feet);
    
    return 0;
}