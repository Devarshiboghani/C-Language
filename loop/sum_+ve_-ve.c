#include <stdio.h>

int main()
{
    int i = 1, val = 0, sum = 0;

    while(i <= 10)
    {
        printf("Enter value no %d = ",i);
        scanf("%d", &val);

        sum = sum + val;

        i++;

        if(val > 0)
        {
            printf("positive value\n");
        }

        if(val < 0)
        {
            printf("negative value\n");
        }
    }

    printf("Sum of positive and negative values are = %d", sum);
    
    return 0;
}