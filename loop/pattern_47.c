#include <stdio.h>

int main()
{
    int i , j, k, num = 1;

    for(i = 1; i <= 5; i++)
    {
        for(k = 5; k>i; k--)
        {
        printf(" ");
        }
      
        for(j = 1; j <= (i*2)-1; j++)
        {
            printf("%d ", num);
        }
        printf("\n");
        num++;
    }
    return 0;
}