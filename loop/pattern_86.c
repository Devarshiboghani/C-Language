#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 7; i++)
    {
        for(j = 7; j >= 1; j-=1)
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