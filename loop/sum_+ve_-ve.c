// Accept 10 values and print sum of positive and negative values.

#include <stdio.h>

int main()
{
    int i, num;
    int pos_sum = 0, neg_sum = 0;

    printf("Enter 10 values:\n");

    for(i = 1; i <= 10; i++)
    {
        scanf("%d", &num);

        if(num > 0)
            pos_sum = pos_sum + num;
        else if(num < 0)
            neg_sum = neg_sum + num;
    }

    printf("Sum of Positive numbers = %d\n", pos_sum);
    printf("Sum of Negative numbers = %d", neg_sum);

    return 0;
}