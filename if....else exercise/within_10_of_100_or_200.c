#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number = ");
    scanf("%d", &a);

    if(a >= 10 && a <= 100 || a >= 10 && a <= 200)
    {
        printf("true");
    }

    else
    {
        printf("false");
    }

    return 0;
}