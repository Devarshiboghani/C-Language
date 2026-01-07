#include <stdio.h>

int main()
{
    int val = 7;
    printf("Enter number of value = ");
    scanf("%d", &val);

    if(val % 2 == 0)
    {
        printf("%d is a even number");
    }

    else
    {
        printf("%d is a odd number");
    }
    
    return 0;
}