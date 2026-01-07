#include <stdio.h>

int main()
{
    int val;

    printf("Enter a value = ");
    scanf("%d", &val);

    int last_digit = val % 10;

    printf("Last digit of %d is %d\n", val, last_digit);

    return 0;
}