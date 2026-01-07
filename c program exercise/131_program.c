#include <stdio.h>

int main()
{
    float mon = 0, yr = 0;

    printf("Enter number of mon = ");
    scanf("%f", &mon);

    yr = mon/12;

    printf("%.0f mon = %.2f yr", mon, yr);

    return 0;
}