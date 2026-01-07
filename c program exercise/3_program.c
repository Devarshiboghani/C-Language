#include <stdio.h>

int main()
{
    int val1, val2, multi_val;

    printf("Enter 1st value = ");
    scanf("%d", &val1);

    printf("Enter 2nd value = ");
    scanf("%d", &val2);

    multi_val = val1* val2;

    printf("Multiplication of %d and %d = %d\n", val1, val2, multi_val);
    return 0;
}