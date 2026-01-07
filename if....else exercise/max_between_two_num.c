#include <stdio.h>

int main()
{
    int val1 = 0, val2 = 0;
    printf("Enter value 1 : ");
    scanf("%d", &val1);

    printf("Enter value 2 : ");
    scanf("%d", &val2);

    if(val1 > val2)
    {
        printf("maximum value 1 is = %d", val1);
    }

    else 
    {
        printf("maximum value 2 is = %d", val2);
    }

    return 0; 
}