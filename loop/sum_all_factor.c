// Accept a value and find sum of all factors.

#include <stdio.h>

int main()
{
    int val, i, sum = 0 ;

    printf("Enter value = ");
    scanf("%d", &val);

    for(i = 1; i <= val; i++)
    {
        if(val % i == 0)
        {
            sum = sum + i;
        }
    }
         printf("Sum of all factors = %d", sum);

    return 0;
}