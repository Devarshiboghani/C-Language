#include <stdio.h>

int isPrime(int val)
{
    if(val <= 1)
    {
        return 0;
    }

    for(int i = 2; i * i <= val; i++)
    {
        if(val % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    printf("Prime numbers between 1 to 100 are : \n");
    for(int i = 1; i <= 100; i++)
    {
        if(isPrime(i))
        {
            printf("%d\n", i);
        }
    }
    printf("\n");
    return 0;
}