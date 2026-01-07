#include <stdio.h>

int main()
{
    int i, j, k, num = 5;

    for(i = 1; i <= 5; i++)
    {

        num = 5;

        for(k = 5-i; k>0; k--)
        printf(" ");

        for(j = 1; j <= i; j++)
        {
            printf("%d",num);
            num--;
        }
        
        printf("\n");

    }

    return 0;
}