#include <stdio.h>

int main()
{
    int val1 = -22, val2 = +22;

    if(val1 < 0)
    {
        printf("negative value is = %d &", val1);
    }

    if(val2 > 0)
    {
        printf(" positive value is = %d", val2);
    }

    else
    {
        printf("it is zero");
    }
    return 0;
}