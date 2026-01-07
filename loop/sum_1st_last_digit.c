#include <stdio.h>

int main()
{
    int val, fd = 0, ld = 0;

    printf("Enter value = ");
    scanf("%d", &val);

        ld = val % 10;
       val = val / 10;

    while(val > 0)
    {
       fd = val % 10;

       val = val / 10;

    }
        printf("sum of first and last digit  = %d\n", fd+ld);

    return 0;
}