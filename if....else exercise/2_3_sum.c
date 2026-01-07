#include <stdio.h>

int main()
{
    int val;
    int a = 0, b = 0, c = 0;

    printf("How many values use for addition = ");
    scanf("%d", &val);

    if(val == 2)
    {
        printf("Add two values = ");
        scanf("%d %d" , &a, &b);

        printf("Sum of %d and %d is %d\n", a, b, a + b);
    }

    else if(val == 3)
    {
        printf("Add three values = ");
        scanf("%d %d %d", &a, &b, &c);

        printf("Sum of %d, %d and %d is %d\n", a, b, c, a + b + c);
    }

    else
    {
        printf("invalid val\n");
    }
    return 0;
}