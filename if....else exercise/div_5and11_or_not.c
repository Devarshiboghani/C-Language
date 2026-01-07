#include <stdio.h>

int main()
{
    int val = 45;
    printf("Enter number of valye = ");
    scanf("%d", &val);

    if(val % 5 == 0 ||  val % 11 == 0)
    {
        printf("Value is divisible by 5&11", val);
    }

    else
    {
        printf("Value is not divisible by 5&11", val);
    }

    return 0;
}