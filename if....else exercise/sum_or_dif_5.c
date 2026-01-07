#include <stdio.h>

int main()
{
    int a = 5, b = 10;

    printf("Enter number of value 1 = ");
    scanf("%d", &a);

    printf("Enter number of value 2 = ");
    scanf("%d", &b);

    if(a == 5 || b == 5 || a+b == 5 || a-b == 5)
    {
        printf("true");
    }

    else
    {
        printf("false");
    }
    return 0;
}