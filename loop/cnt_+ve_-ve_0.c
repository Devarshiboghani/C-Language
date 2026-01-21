// Accept 10 values and count total positive, negative and zero values.

#include <stdio.h>

int main()
{
    int i, num;
    int pos = 0, neg = 0, zero = 0;

    for(i = 1; i <= 10; i++)
    {
        printf("Enter value %d: ", i);
        scanf("%d", &num);

        if(num > 0)
            pos++;
        else if(num < 0)
            neg++;
        else
            zero++;
    }

    printf("\nPositive numbers = %d", pos);
    printf("\nNegative numbers = %d", neg);
    printf("\nZero values = %d", zero);

    return 0;
}
