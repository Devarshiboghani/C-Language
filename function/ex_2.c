#include <stdio.h>

void doSum();

int main()
{
    doSum();

    return 0;
}

void doSum()
{
    int val1 = 20, val2 = 40, sum = 0;

    sum = val1 + val2;
    printf("The sum of %d and %d is %d", val1, val2, sum);
}