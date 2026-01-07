#include <stdio.h>

int main()
{
    float mile = 0, km = 0;

    printf("Enter number of mile = ");
    scanf("%f", &mile);

    km = mile*1.60934;

    printf("%.0f mile = %.2f km", mile ,km);
    
    return 0;
}