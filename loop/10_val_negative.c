// Accept 10 values and print negative numbers.

#include <stdio.h>

int main()
{
    int i = 1, val;

    while(i <= 10)
    {
        printf("Enter value number %d = ",i);
        scanf("%d", &val);

        i++;

        if(val < 0)
        {
            printf("%d is negative number\n", val);
        }
    }
    return 0;
}