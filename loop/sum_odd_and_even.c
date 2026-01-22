// Accept 10 values and print sum of odd and even numbers.

#include <stdio.h>

int main()
{
     int i, num;
    int even_sum = 0, odd_sum = 0;

    printf("Enter 10 values:\n");

    for(i = 1; i <= 10; i++)
    {
        scanf("%d", &num);

        if(num % 2 == 0)
            even_sum = even_sum + num;
        else
            odd_sum = odd_sum + num;
    }

    printf("Sum of Even numbers = %d\n", even_sum);
    printf("Sum of Odd numbers = %d", odd_sum);
    
    return 0;
}