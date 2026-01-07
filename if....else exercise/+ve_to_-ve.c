#include <stdio.h>

int main()
{
    int a = 0;

    printf("Enter a = ");
    scanf("%d",&a);

    if(a > 0)
    {
        printf("%d",a*-1);
    }

    else if(a < 0)
    {
        printf("%d",0-a);
    }

    else
    {
        printf("zero");
    }

    return 0;
}