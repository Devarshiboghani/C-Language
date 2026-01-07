#include <stdio.h>

int main()
{
    int a = 0, b = 0;
     
    printf("Enter number of value 1 = ");
    scanf("%d", &a);

    printf("Enter number of value 2 = ");
    scanf("%d", &b);
 
    if(a != b)
    {
        a = a+b, b = a-b, a = a-b;
        printf("a = %d\n",a);
        printf("b = %d\n",b);
    }

    else
    {
        printf("Values are same");
    }

    return 0;
}