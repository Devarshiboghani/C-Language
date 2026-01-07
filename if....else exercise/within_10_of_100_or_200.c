#include <stdio.h>

int main()
{
    int a = 0;
    printf("Enter number of value = ");
    scanf("%d", &a);

    if(a >= 10 && a <= 100 || a >= 10 && a <= 200)
    {
        printf("true");
    }

    else
    {
        printf("%d",a);
    }

    return 0;
}