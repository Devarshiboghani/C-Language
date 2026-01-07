#include <stdio.h>

int main()
{
    int val1 = 10, val2 = 34, val3 = 24;

    if(val1 > val2 && val1 > val3)
    {
        printf("Value 1 is biggest");
    }

    else if(val2 > val1 && val2 > val3)
    {
        printf("Value 2 is biggest");
    }

    else
    {
        printf("Value 3 is biggest");
    }
    
    return 0;
}