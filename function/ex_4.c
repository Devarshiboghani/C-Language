#include <stdio.h>

void printValue(int);

int main()
{
    printValue(53.86);
    printValue(23);

    return 0;
}

void printValue(int val)
{
    printf("The value is %d\n", val);
}