#include <stdio.h>

int main()
{
    int i = 1, j = 0;

    for(i = 1; i <= 5; i++)
    {

        for(j = i; j < 5 + i; j++)
        {
            printf("%d", j % 2);
        }

        printf("\n");
    }

    return 0;
}