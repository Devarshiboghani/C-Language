#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter a value 1 = ");
    scanf("%d", &a);

    printf("Enter a value 2 = ");
    scanf("%d", &b);

    printf("Enter a value 3 = ");
    scanf("%d", &c);

    if(a == b)
    {
        printf("%d",c);
    }

    else if(b == c)
    {
        printf("%d",a);
    }
    else if(a == c)
    {
        printf("%d",b);
    }

    else
    {
        printf("sum = %d",a+b+c);
    }

    return 0;
}