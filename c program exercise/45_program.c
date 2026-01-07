#include <stdio.h>

int main()
{
    float yr = 0, mon = 0;

    printf("Enter number of yr = ");
    scanf("%f", &yr);

    mon = yr*12;

    printf("%.0f yr = %.2f mon", yr ,mon);
    
    return 0;
}