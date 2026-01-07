#include <stdio.h>

int main()
{
    int i = 1, j = 0, num;

    for(i = 1; i <= 5; i++)
    {
        num = 5;
        for(j = 1; j <= i; j++)
        { 
            printf("%d",num);
            num--;
        }
        printf("\n");
    }

    return 0;
}