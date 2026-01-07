#include <stdio.h>

int main()
{
    int i, j, num;

    for(i = 1 ; i <= 5; i++)
    {
        num = i;
    for(j = 1; j <= 5; j++)
    {
        if(num <= 5)
        {
           printf("%d", num);
        }
        else
        {
            printf("5");
        }
        num++;
    }
    printf("\n");
}
    return 0;
}