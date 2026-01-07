#include <stdio.h>

int main()
{
    float centuries = 0,year = 0,day = 0,hour = 0;

    printf("Enter centuries = ");
    scanf("%f", &centuries);

    year = centuries*100;
    day = year*365;
    hour = day*24;

    printf("%.0f centuries = %.2f hour\n", centuries, hour);
    return 0;
}