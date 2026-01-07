#include <stdio.h>

int main()
{
    int i = 1, pcnt = 1, ncnt = 1, zcnt = 1, val = 0;

    while(i <= 10)
    {
        printf("Enter value no %d = ", i);
        scanf("%d", &val);

        i++;

        if(val > 0)
        {
            printf("count = %d\n",pcnt);
            pcnt++;

            printf("It is positive values = %d\n");
        }

        if(val < 0)
        {
            printf("count = %d\n", ncnt);
            ncnt++;

            printf("It is negative values = %d\n");
        }

        if(val == 0)
        {
            printf("count = %d\n", zcnt);
            zcnt++;

            printf("It is zero = %d\n");
        }
    }

    return 0;
}