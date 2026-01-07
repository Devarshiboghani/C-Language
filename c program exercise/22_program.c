#include <stdio.h>

int main()
{
    float feet=0, cm=0, mtr=0;

    printf("Enter number of feet = ");
    scanf("%f", &feet);

    cm = feet/30.48;
    mtr = cm/100;

    printf("%f feet = %f mtr", feet, mtr);
    return 0;
}