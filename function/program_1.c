#include <stdio.h>

void printEvenOdd(int val)
{
    if(val % 2 == 0)
    {
        printf("Value is even number");
    }
    else
    {
        printf("Value is odd number");
    }
}

int main()
{
    int value;

    printf("Enter value is = ");
    scanf("%d", &value);

    printEvenOdd(value);

    return 0;
}