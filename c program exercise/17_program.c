#include <stdio.h>

int main()
{
    float feet=0, cm=0;

    printf("Enter number of feet = ");
    scanf("%f", &feet);

    cm = feet * 30.48;

    printf("%.2f feet = %.2f cm\n", feet, cm);
    return 0;
}