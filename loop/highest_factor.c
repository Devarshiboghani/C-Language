// Accept a value and find highest factor.

#include <stdio.h>

int main()
{
    int val, i, hf = 1;

    printf("Enter value = ");
    scanf("%d", &val);
    
    for(i = 1; i <= val / 2; i++)
    {
        if(val % i == 0)
        {
            hf = i;
        }
    }

    printf("Highest factor is = %d\n",hf);

    return 0;
}