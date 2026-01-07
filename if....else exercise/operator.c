#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    char op ;

    printf("Enter value 1 = ");
    scanf("%d",&a);

    printf("Enter value 2 = ");
    scanf("%d", &b);

    printf("Enter operator = ");
    scanf(" %c", &op);

    if(op == '+')
    {
        printf("%d", a+b);
    }

    if(op == '-')
    {
        printf("%d", a-b);
    }

    else if(op == '*')
    {
        printf("%d",a*b);
    }
    else if(op == '/')
    {
        printf("%d",a/b);
    }
    else if(op == '%')
    {
        printf("%d",a%b);
    }

    else
    {
        printf("invalid operator");
    }
    return 0;
}