#include <stdio.h>

int main()
{
    int i = 1, j = 0, num = 5;

    for(i = 1; i <= 5; i++)
    {
        for(j = 5; j >= i; j--)
        {
            printf("%d", num);
        }
        printf("\n");
        num--;
    }

    return 0;
}