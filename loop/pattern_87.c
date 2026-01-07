#include <stdio.h>

int main()
{
    int i, j;

    for(i = 7; i >= 1; i--)
    {
        for(j = 1; j <= 7; j++)
        {
            if(i == 1|| j == 7|| j == i)
            {
                printf("*");
            }
            else
            {
                 printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}