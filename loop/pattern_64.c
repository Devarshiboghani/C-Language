#include <stdio.h>

int main()
{
    int i, j;

    // for(i = 1; i <= 5; i++)
    // { 
    //     for(j = 1; j <= 5-i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for(j = 5; j >= 6-i; j--)
    //     {
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }

   for(i = 5; i >= 1; i--)
    { 
        for(j = 2; j <= i; j++)
        {
            printf(" ");
        }
        for(j = i; j <= 5; j++)
        {
            printf("%d",j);
        }
        for(j = 4; j >= i; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}