#include <stdio.h>

int main()
{
    int val1, val2;

    printf("Enter number of value 1 = ");
    scanf("%d", &val1);

    printf("Enter number of value 2 = ");
    scanf("%d", &val2);

    if ((val1 > 100 && val1 < 200) || (val2 > 100 && val2 < 200))
    {
        printf("range is exclusive");
    }

    else
    {
        printf("range is not exclusive");
    }
    
    return 0;
}