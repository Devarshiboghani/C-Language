#include <stdio.h>

int main()
{
    float dec = 0;
    double yr = 0, day = 0, hr = 0, min = 0, sec = 0;

    printf("Enter number of dec = ");
    scanf("%f", &dec);

     yr = dec*10;
     day = yr*365;
     hr = day*24;
     min = hr*60;
     sec = min*60;

     printf("%.0f dec = %.lf sec", dec, sec);
     
    return 0;
}