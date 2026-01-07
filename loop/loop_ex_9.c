#include <stdio.h>

int main()
{
    int i = 1;

    while(i <= 5)
    {
        if(i == 3)
            goto jump1;

        printf("%d\n", i);

        i++;
    }

    jump1:
    printf("This is jump 1\n");
    goto jump2;

    jump2:
    printf("This is jump 2\n");

    return 0;
}