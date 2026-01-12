#include <stdio.h>

int main()
{
    int a, b, c, sum = 0;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a != 13)
        sum = sum + a;

    if (b != 13)
        sum = sum + b;

    if (c != 13)
        sum = sum + c;

    printf("Sum = %d", sum);

    return 0;

}