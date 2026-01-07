#include <stdio.h>

int main()
{
    int i, j,k, num;

    for(i = 1; i <= 5; i++)
    {
        num = 1;
        for(k = 5-i; k > 0; k--)
        {
            printf(" ");
        }
        for(j = 1; j <= i; j++)
        {
            if(i == 1|| i == 3|| i == 5)
            {
                printf("%d",(num*2)-1);
                num++;
            }
            else
            {
                printf("%d",(num*2));
                num++;
            }
        }
        printf("\n");
    }
    return 0;
}