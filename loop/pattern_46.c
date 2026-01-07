#include <stdio.h>

int main()
{
    int i , j ,k , num = 5;

    for(i = 5; i >= 1; i--)
    {
        num = 5;

        for(k = 5-i; k > 0; k--)
        printf(" ");

        for(j = i; j > 0; j--)
        {
            printf("%d", num);
            num--;
        }
        printf("\n");
    }
    return 0;
}