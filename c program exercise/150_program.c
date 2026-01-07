#include <stdio.h>

int main()
{
    float val1 = 0, val2 = 0, val3 = 0;

    printf("Enter number of val1 = ");
    scanf("%f", &val1);

    printf("Enter number of val2 = ");
    scanf("%f", &val2);

    printf("Enter number of val3 = ");
    scanf("%f", &val3);
     
    val3 = val1;
    val1 = val2;
    val2 = val3;

    printf("value1 %.0f and value2 %.0f", val1, val2, val3);
    
    return 0;
}