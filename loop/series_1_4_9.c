#include <stdio.h>

int main()
{
    int i = 1, sq = 1;

    printf("Enter value = ");
    scanf("%d", &sq);

    while(i <= 10)
    {

        printf("series = %d\n", sq);

        i++;

        sq = i * i;
    }

    return 0;
}