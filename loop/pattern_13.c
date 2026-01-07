#include <stdio.h>

int main()
{
    int i = 1, j = 1, r = 5, c = 5;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            if(i == (r+1)/2 || j == (c+1)/2 )
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}