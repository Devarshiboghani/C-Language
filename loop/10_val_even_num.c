// Accept 10 values and print even numbers

#include <stdio.h>

int main()
{
    int i = 1, val = 0;

    while(i <= 10)
    {
        printf("Enter value no %d = ", i);
        scanf("%d", &val);

        i++;

        if(val % 2 == 0)
        {
             printf("%d is even\n", val);
        }
    }
    
    return 0;
}