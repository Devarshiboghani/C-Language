#include <stdio.h>

int main()
{
    float mille = 0, yr = 0;

    printf("Enter number of mille = ");
    scanf("%f", &mille);

    yr = mille*1000;

    printf("%.0f mille = %.2f yr",mille, yr);
    
    return 0;
}