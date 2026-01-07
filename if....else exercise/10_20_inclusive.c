#include <stdio.h>

int main()
{
    int a = 7, b = 9;
    printf("Enter number of value 1 = ");
    scanf("%d", &a);

    printf("Enter number of value 2 = ");
    scanf("%d", &b);

    if(10 <= a+b && a+b <= 20)
    {
        printf("sum is in the range");
    }

    else
    {
        printf("sum is not in the range");
    }
    
    return 0;
}