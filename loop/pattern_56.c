#include <stdio.h>

int main()
{
    int i ,j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 5; j > 5-i; j--)
        {
            printf("%d", j);
        }
        for(j = 1; j <= 5-i; j++)
        {
            printf("%d", 6-i);
        }
        printf("\n");
    }
    return 0;
}