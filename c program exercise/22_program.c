#include <stdio.h>

int main()
{
    float feet, cm, mtr;

    printf("Enter number of feet = ");
    scanf("%f", &feet);

    cm = feet/30.48;
    mtr = cm/100;

    printf("%f feet = %.2f mtr", feet, mtr);
    return 0;
}