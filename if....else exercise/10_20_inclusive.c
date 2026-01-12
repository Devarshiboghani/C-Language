#include <stdio.h>

int main()
{
    int a, b, sum;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("Sum = %d\n", sum);

    if(sum >= 10 && sum <=20)
    {
        printf("Sum is in the range 10 to 20\n");
    }

    else
    {
        printf("Sum is NOT in the range 10 to 20\n");
    }
    
    return 0;
}