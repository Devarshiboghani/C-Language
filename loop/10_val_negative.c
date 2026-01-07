#include <stdio.h>

int main()
{
    int i = 1, val;

    while(i <= 10)
    {
        printf("Enter value number %d = ",i);
        scanf("%d", &val);

        i++;

        if(val < 0)
        {
            printf("It is negative number\n");
        }
    }
    return 0;
}