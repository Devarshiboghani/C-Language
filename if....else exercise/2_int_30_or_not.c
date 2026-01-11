#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter number of value 1 = ");
    scanf("%d", &a);

    printf("Enter number of value 2 = ");
    scanf("%d", &b);

    if(a == 30 || b == 30 || a+b == 30)
    {
        printf("true");
    }

    else
    {
        printf("false");
    }

    return 0;
}