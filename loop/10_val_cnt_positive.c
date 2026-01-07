#include <stdio.h>

int main()
{
    int i = 1, val = 0, count = 1;

    while(i <= 10)
    {
        printf("Enter value no %d = ", i);
        scanf("%d", &val);

        i++;

        if(val > 0)
        {
            printf("count  = %d\n", count);
            count++;
        }
    }

         printf("Total positive number = %d");

    return 0;
}