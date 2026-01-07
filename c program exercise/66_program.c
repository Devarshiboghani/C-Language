#include <stdio.h>

int main()
{
    float mtr = 0, km = 0;

    printf("Enter number of mtr = ");
    scanf("%f", &mtr);

    km = mtr/1000;

    printf("%.0f mtr = %.2f km", mtr, km);
    
    return 0;
}