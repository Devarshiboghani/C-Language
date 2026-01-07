#include <stdio.h>

int main()
{
    int a =6, b = 9, c = 3;

    printf("Enter number of value 1 = ");
    scanf("%d", &a);
   
    printf("Enter number of value 2 = ");
    scanf("%d", &b);

    printf("Enter number of value 3 = ");
    scanf("%d", &c);

    if(a == 13)
    {
        printf("sum = %d",b+c);
    }

    else if(b == 13)
    {
        printf("sum = %d",a+c);
    }
    else if(c == 13)
    {
        printf("sum = %d",a+b);
    }

    else
    {
        printf("sum = %d",a+b+c);
    }
    
    return 0;
}