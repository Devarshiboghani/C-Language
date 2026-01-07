#include <stdio.h>

int main()
{
    int val = 15;
    printf("Enter number of value = ");
    scanf("%d", &val);

    if(val > 0)
    {
        printf("%d is a positive value");
    }

    else if(val < 0)
    {
        printf("%d is a negative value");
    }

    else
    {
        printf("%d is zero");
    }

    return 0;
}