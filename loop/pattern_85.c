#include <stdio.h>

int main()
{
    int i, j;

    for(i = 7; i >= 1; i--)
    {
        for(j = 7; j >= 1; j--)
        {
            if(i == 7|| j == 1||j == i)
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