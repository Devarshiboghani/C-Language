#include <stdio.h>

int main()
{
    int val = 0;
    printf("Enter number of value is = ");
    scanf("%d", &val);

    if(val >= 100 && val <= 999)
    {
        printf("%d is three digit", val);
    }

    else
    {
        printf("%d is not three digit", val);
    }

    return 0;
}