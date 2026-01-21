// Accept 10 values and count total odd and even numbers.

#include <stdio.h>

int main()
{
    int i, num;
    int even = 0, odd = 0;

    printf("Enter 10 values:\n");

    for(i = 1; i <= 10; i++)
    {
        scanf("%d", &num);

        if(num % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Total Even numbers = %d\n", even);
    printf("Total Odd numbers = %d", odd);

    return 0;
}