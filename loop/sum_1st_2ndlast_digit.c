// Accept a value and print sum of first and second last digit.

#include <stdio.h>

int main()
{
    int val, fd = 0, sld = 0;

    printf("Enter value = ");
    scanf("%d", &val);

    val = val / 10;
    sld = val % 10;

    while(val >= 10)
    {
        val = val / 10;
    }
    fd = val;

    printf("sum of first and second last digit = %d", fd + sld);

    return 0;
}