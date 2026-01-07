#include <stdio.h>

int main()
{
    int i = 1, even = 2;

    printf("Enter value = ");
    scanf("%d", &even);

    while(i <= 10)
    {

        printf("series = %d\n", even);

        i++;

        even = even + 2;

    }

    return 0;
}