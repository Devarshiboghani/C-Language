#include <stdio.h>

int main()
{
    int i = 1, j = 0, num = 1;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i ; j++)
        {
            if(num % 2 != 0)
            {
               printf("1");
            }
            else
            {
                printf("0");
            }
            num++;
        }
        printf("\n");
    }
    return 0;
}