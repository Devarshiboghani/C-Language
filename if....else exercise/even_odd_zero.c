#include <stdio.h>

int main()
{
    int val = 5;
    printf("Enter number of value = ");
    scanf("%d", &val);

    if(val % 2 == 0)
    {
        printf("%d is even number");
    }

    else if(val % 2 != 0)
    {
        printf("%d is odd number");
    }

    else
    {
        printf("%d is zero");
    }

    return 0;
}