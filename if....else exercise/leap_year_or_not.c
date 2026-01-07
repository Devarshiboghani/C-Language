#include <stdio.h>

int main()
{
    int val = 365;
    printf("Enter number of = ");
    scanf("%d", &val);

    if(val == 365)
    {
        printf("%d is leap year");
    }

    else
    {
        printf("%d is not leap year");
    }
    
    return 0;
}