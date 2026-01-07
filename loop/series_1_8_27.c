#include <stdio.h>

int main()
{
    int i = 1, qu = 1;

    printf("Enter value = ");
    scanf("%d", &qu);

    while(i <= 10)
    {
        printf("series = %d\n", qu);

        i++;

        qu = i * i * i;
    }

    return 0;
}