// Accept a value and find its factorial value.

#include <stdio.h>

int main()
{
    int val, i;
    long long fact = 1;

        printf("Enter a number: ");
        scanf("%d", &val);

     for(i = 1; i <= val; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %lld", fact);

    return 0;
}