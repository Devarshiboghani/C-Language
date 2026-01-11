#include <stdio.h>

int main()
{
    float feet = 0, cm = 0, mtr = 0, km = 0;

    printf("Enter number of feet = ");
    scanf("%f", &feet);

    cm = feet * 30.48;
    mtr = cm/100;
    km = mtr/1000;

    printf("%.0f feet = %.6f km\n", feet, km);

    return 0;
}