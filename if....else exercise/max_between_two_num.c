#include <stdio.h>

int main()
{
    int val1, val2;

    printf("Enter value 1 : ");
    scanf("%d", &val1);

    printf("Enter value 2 : ");
    scanf("%d", &val2);

    if(val1 > val2)
    {
        printf("maximum value 1 is = %d", val1);
    }

     else if (val2 > val1)
     {
        printf("Maximum number is %d", val2);
     }

    else 
    {
        printf("Both numbers are equal");
    }

    return 0; 
}