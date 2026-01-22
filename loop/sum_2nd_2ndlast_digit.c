//  Accept a value and print sum of second and second last digit.

#include <stdio.h>

int main()
{
    int val , sd = 0, sld = 0;

    printf("Enter value = ");
    scanf("%d", &val);

    val = val / 10;
    sld = val % 10;

    while(val >= 100)
    {
        val = val / 10;
    }
    sd = val % 10;

    printf("Sum of second and second last digit = %d", sd + sld);

    return 0;
}