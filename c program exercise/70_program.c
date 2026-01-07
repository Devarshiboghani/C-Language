#include <stdio.h>

int main()
{
    float cm = 0, inch = 0;

    printf("Enter number of cm = ");
    scanf("%f", &cm);

    inch = cm/2.54;

    printf("%.0f cm = %.2f inch", cm, inch);
    
    return 0;
}