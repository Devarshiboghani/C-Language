#include <stdio.h>

int main()
{
    int val1, val2, sum_val;

    printf("Enter 1st value = ");
    scanf("%d", &val1);

    printf("Enter 2nd value = ");
    scanf("%d", &val2);

    sum_val = val1 + val2;

    printf("Sum of %d and %d = %d\n", val1, val2, sum_val);
    return 0;
}