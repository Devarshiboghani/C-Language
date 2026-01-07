#include <stdio.h>

int Perfect(int val)
{
int sum = 0;
int i;
    for(i = 1; val / 2 >= i; i++)
    {
        if(val % i == 0)
        {
            sum = sum + i;
        }
    }
    return (sum == val);
}

void printPerfectNumbers(int start, int end) 
{
    printf("Perfect numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++)
     {
        if (Perfect(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main()
{
    printPerfectNumbers(1, 500);

    return 0;
}