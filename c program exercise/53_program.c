#include <stdio.h>

int main()
{
    float mon = 0, yr = 0, mille = 0;

    printf("Enter number of mon = ");
    scanf("%f", &mon);

    yr = mon/12;
    mille = yr/1000;

    printf("%.0f mon = %.2f mille", mon, mille);
    
    return 0;
} 