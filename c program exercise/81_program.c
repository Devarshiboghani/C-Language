#include <stdio.h>

int main()
{
    float kg = 0, ton = 0;

    printf("Enter number of kg = ");
    scanf("%f", &kg);

    ton = kg/1000;

    printf("%.0f kg = %.2f ton", kg, ton);
    
    return 0;
}