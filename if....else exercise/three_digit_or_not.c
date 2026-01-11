#include <stdio.h>

int main()
{
    int val;

    printf("Enter number of value is = ");
    scanf("%d", &val);

    if(val >= 100 && val <= 999)
    {
        printf("%d is a three digit number.\n", val);
    }

    else
    {
        printf("%d is a not three digit number.\n", val);
    }

    return 0;
}