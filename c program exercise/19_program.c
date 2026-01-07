#include <stdio.h>

int main()
{
    float kg=0, gm=0;

    printf("Enter number of kg = ");
    scanf("%f", &kg);

    gm = kg*1000;

    printf("%f kg = %f gm", kg, gm);
    return 0;
}