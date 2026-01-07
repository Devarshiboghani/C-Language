#include <stdio.h>

int main()
{
    float gm = 0, kg = 0;

    printf("Enter number of gm = ");
    scanf("%f", &gm);

    kg = gm/1000;

    printf("%f gm = %f kg\n", gm, kg);
    
    return 0;
}