#include <stdio.h>

int main()
{
    int i = 1, val = 0, ecnt = 1, ocnt = 1;

    while(i <= 10)
    {
        printf("Enter value no %d = ", i);
        scanf("%d", &val);

        i++;

        if(val % 2 == 0)
        {
            printf("count = %d\n", ecnt);
            ecnt++;

            printf("It is even number = %d\n");
        }
        
        if(val % 2 != 0)
        {
            printf("count = %d\n", ocnt);
            ocnt++;

            printf("It is odd number = %d\n");
        }

    }

    return 0;
}