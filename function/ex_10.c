#include <stdio.h>

int getValue(int);

int main()
{
    printf("Value = %d\n", getValue(45));

    return 0;
}

int getValue(int val)
{
    return val;
}