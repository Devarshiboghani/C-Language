#include <stdio.h>

int main()
{
    int val1 = 0, val2 = 0, val3 = 0;
    printf("Enter value 1 : ");
    scanf("%d", &val1);

    printf("Enter value 2 : ");
    scanf("%d", &val2);

    printf("Enter value 3 : ");
    scanf("%d", &val3);

     if(val1 > val2 && val1 > val3)
     {
        printf("maximum value 1 is = %d ", val1);
     }

     else if(val2 > val1 && val2 > val3)
     {
        printf("maximum value 2 is = %d", val2);
     }

     else
     {
        printf("maximum value 3 is = %d", val3);
     }

    return 0;
}