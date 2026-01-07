#include <stdio.h>

int main()
{
    int val = 0;
    printf("Enter number of value = ");
    scanf("%d", &val);

    if(val % 3 == 0 || val % 7 == 0)
    {
        printf("it is possible");
    }

    else
    {
        printf("it is not possible");
    }
    return 0;
}