#include <stdio.h>

int main()
{
    int val;

    printf("Enter number of value = ");
    scanf("%d", &val);

    if(val % 2 == 0)
    {
        printf("Number is Even");
    }

    else
    {
        printf("Number is Odd");
    }
    
    return 0;
}