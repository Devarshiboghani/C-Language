#include <stdio.h>

int main()
{
    int i = 1, j = 0, num = 1;

    for(i = 1; i <= 5; i++)
    {
            num = 1;

        for(j = 5; j >= i; j--)
        {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}