#include <stdio.h>

int main()
{
    int a, b;
    int x, y;

    printf("Enter a value 1= ");
    scanf("%d", &a);

    printf("Enter a value 2= ");
    scanf("%d", &b);

    x = 100-a;
    y = 100-b;
    
    if(x < y)
    {
        printf("a is nearest value");
    }

    else if(y < x)
    {
        printf("b is nearest value");
    }

    else if(y == x)
    {
        printf("both are equal");
    }

    else
    {
        printf("both are equal");
    }

    return 0;
}