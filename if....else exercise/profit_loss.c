#include <stdio.h>

int main()
{
    int sp = 0, bp = 0;
    printf("Enter number of value 1 = ");
    scanf("%d", &sp);

    printf("Enter number of value 2= ");
    scanf("%d", &bp);

    if(sp > bp)
    {
        printf("%d profit");
    }

    else if(sp < bp)
    {
        printf("%d loss");
    }

    else
    {
        printf("%d is no profit no loss");
    }

    return 0;
}