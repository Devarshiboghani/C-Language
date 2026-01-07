#include <stdio.h>

int main()
{
    int val ,fact = 1;

        printf("value = ");
        scanf("%d", &val);

    while(val > 0)
    {
        printf("The factorial of %d is = %d\n ",val, fact);
        fact = fact * val;

        val--;

    }

    return 0;
}