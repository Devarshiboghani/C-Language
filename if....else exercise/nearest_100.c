#include <stdio.h>

int main()
{
    int a = 90, b = 95;
    int x = 0, y = 0;

    printf("Enter number of value 1= ");
    scanf("%d", &a);

    printf("Enter number of value 2= ");
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
    else
    {
        printf("both are equal");
    }
    return 0;
}