#include <stdio.h>

int main()
{
    int a = 7, b = 9, c = 6;
    printf("Enter number of value 1 = ");
    scanf("%d", &a);

    printf("Enter number of value 2 = ");
    scanf("%d", &b);

    printf("Enter number of value 3 = ");
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