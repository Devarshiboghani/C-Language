#include <stdio.h>

int main()
{
    int i = 1, odd = 1;

    printf("Enter value = ");
    scanf("%d", &odd);

    while(i <= 10)
    {

        printf("series = %d\n", odd);

        i++;

        odd = odd + 2;

    }

    return 0;
}