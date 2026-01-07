#include <stdio.h>

int main()
{
    int i, j,k, num;

    for(i = 1; i <= 5; i++)
    {
        num = 1;
        k = i;
        for(j = 1; j <= i; j++)
        {
            if(i == 1|| i == 3|| i == 5)
            {
                printf("%d", num);
                num++;
            }
            else
            {
                printf("%d", k);
                k--;
            }
        }
        printf("\n");
    }
    return 0;
}