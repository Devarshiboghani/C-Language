#include <stdio.h>

int main()
{
    int val;

    printf("Enter number of value = ");
    scanf("%d", &val);

    if(val > 0)
    {
        printf("Number is Positive");
    }

    else if(val < 0)
    {
        printf("Number is Negative");
    }

    else
    {
        printf("Number is zero");
    }

    return 0;
}