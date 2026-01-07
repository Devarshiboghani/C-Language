#include <stdio.h>

int main()
{
    int val, fd = 0, sld = 0;

    printf("Enter value = ");
    scanf("%d", &val);

    val = val / 10;
    
    sld = val % 10;

    while(val > 0)
    {
        fd = val % 10;

        val = val / 10;
    }

    printf("sum of first and second last digit = %d", fd + sld);

    return 0;
}