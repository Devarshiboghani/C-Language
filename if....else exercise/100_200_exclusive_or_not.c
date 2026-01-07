#include <stdio.h>

int main()
{
    int val1 = 0, val2 = 0;

    printf("Enter number of value 1 = ");
    scanf("%d", &val1);

    printf("Enter number of value 2 = ");
    scanf("%d", &val2);

    if(val1 <= 100 && val2 >= 200)
    {
        printf("range is exclusive");
    }

    else
    {
        printf("range is not exclusive");
    }
    
    return 0;
}