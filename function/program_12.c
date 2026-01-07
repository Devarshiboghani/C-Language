#include <stdio.h>

int reverseNumber(int value)
{
    int r = 0 , d;

    while(value != 0)
    {
        d = value % 10;
        r = (r * 10) + d;
        value = value / 10;
    }
    return r;
}

int main()
{
    int value, reversed = 0;

    printf("Enter a number : ");
    scanf("%d", &value);

    reversed = reverseNumber(value);

    printf("Reverse number : %d\n", reversed);

    return 0;
}