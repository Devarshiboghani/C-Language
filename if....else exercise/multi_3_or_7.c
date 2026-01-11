#include <stdio.h>

int main()
{
    int val;
    
    printf("Enter a positive number = ");
    scanf("%d", &val);

    if(val % 3 == 0 || val % 7 == 0)
    {
        printf("it is possible");
    }

    else
    {
        printf("it is not possible");
    }
    return 0;
}