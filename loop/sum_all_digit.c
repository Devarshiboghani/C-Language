#include <stdio.h>

int main()
{
    int val, last, sum = 0;

    printf("Enter value = ");
    scanf("%d", &val);

    while(val > 0)
    {
        last = val % 10;

        sum = sum + last;

        val = val/10;
    }

        printf("sum = %d\n", sum);
    
    return 0;
}