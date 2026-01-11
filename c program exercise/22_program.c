#include <stdio.h>

int main()
{
    float feet, mtr;

    printf("Enter number of feet = ");
    scanf("%f", &feet);

    mtr = feet * 0.3048;

    printf("%f feet = %.2f mtr", feet, mtr);
    return 0;
}