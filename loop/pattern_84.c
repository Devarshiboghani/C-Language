#include <stdio.h>

int main()
{
    int i, j, val;

    for(i = 1; i <= 5; i++)
    {
        val = i + 1;
    
        for(j = 3; j <= i; j++)
        {
            printf("%d", val);
            val++;
        }

        for(j = (i*2)-1; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}