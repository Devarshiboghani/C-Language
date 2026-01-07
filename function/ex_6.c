#include <stdio.h>

void doSum(int, int);

int main()
{
    doSum(45, 56);
    doSum(79,26);
    doSum(78, 56);
    doSum(56, 78);

    return 0;
}

void doSum(int val1, int val2)
{
    int sum;
    sum = val1 + val2;
    printf("The sum of %d and %d is %d\n", val1, val2, sum);
}