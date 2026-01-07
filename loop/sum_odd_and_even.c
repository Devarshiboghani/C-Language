#include <stdio.h>

int main()
{
    int i = 1, val = 0, sum = 0;

    while(i <= 10)
    {
        printf("Enter value no %d = ", i);
        scanf("%d", &val);

        sum = sum + val;

        i++;
        
        if(val % 2 == 0)
        {
            printf("odd num\n");
        }

        if(val % 2 != 0)
        {
            printf("even num\n");
        }
    }

    printf("Sum of odd and even numbers are = %d", sum);
    
    return 0;
}