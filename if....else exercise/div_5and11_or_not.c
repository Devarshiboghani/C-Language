#include <stdio.h>

int main()
{
    int val;

    printf("Enter number of value = ");
    scanf("%d", &val);

    if(val % 5 == 0 ||  val % 11 == 0)
    {
        printf("Number is divisible by 5 and 11");
    }

    else
    {
        printf("Number is not divisible by 5 and 11");
    }

    return 0;
}