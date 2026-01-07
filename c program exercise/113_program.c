#include <stdio.h>

int main()
{
    float yr = 0, mille = 0;

    printf("Enter number of yr = ");
    scanf("%f", &yr);

    mille = yr/1000;

    printf("%.0f yr = %.2f mille", yr, mille);
    
    return 0;
}