#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 6-i; j <= 5; j++)
        {
            printf("%d", j);
        }
        for(j = i*2; j < 9; j++)
        {
            printf(" ");
        }
        for(j = i==5 ? 4 : 5; j >= 6-i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}