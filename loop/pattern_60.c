#include <stdio.h>

int main()
{
    int i , j, num;
    
    for(i = 5; i >= 1; i--)
    {
        num = 1;
        for(j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        for(j = i; j >= 1; j--)
        {
            printf("%d", num);
            num++;
        }
        for(j = i; j >= 2; j--)
        {
            printf("%d", j-1);
        }
        printf("\n");
    }
    return 0;
}
