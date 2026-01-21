// Accept a value and find whether it is perfect no or not.

#include <stdio.h>

int main()
{
    int i, val, sum = 0;

    printf("Enter value = ");
    scanf("%d", &val);

    for(i = 1; i <= val / 2; i++)
    {
        if(val % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == val && val > 0)
    {
        printf("%d is perfect number\n", val);
    }

    else
    {
        printf("%d is not perfect number\n", val);
    }

    return 0;
}