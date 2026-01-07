#include <stdio.h>

int main()
{
    float yr = 0, day = 0;

    printf("Enter number of yr = ");
    scanf("%f", &yr);

    day = yr*365;

    printf("%.0f yr = %.2f day\n", yr ,day);

    return 0;
}