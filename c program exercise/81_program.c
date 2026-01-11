#include <stdio.h>

int main()
{
    float kg = 0, ton = 0;

    printf("Enter number of kg = ");
    scanf("%f", &kg);

    ton = kg/1000;

    printf("%.2f kg = %.6f ton", kg, ton);
    
    return 0;
}