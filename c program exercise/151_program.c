#include <stdio.h>

int main()
{
    float val1 = 0, val2 = 0;

    printf("Enter number of val1 = ");
    scanf("%f", &val1);

    printf("Enter number of val2 = ");
    scanf("%f", &val2);

    val1 = val1 + val2;
    val2 = val1 - val2;
    val1 = val1 - val2;

    printf("value1 %.0f and value2 %.0f", val1, val2);

    return 0;
}