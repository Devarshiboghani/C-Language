#include <stdio.h>

int main()
{
    int val = 0;
    printf("Enter week number : ");
    scanf("%d", &val);

    if(val==1)
    {
        printf("%d is monday", val);
    }

    else if(val==2)
    {
        printf("%d is tuesday", val);
    }
    else if(val==3)
    {
        printf("%d is wednesday", val);
    }
    else if(val==4)
    {
        printf("%d is thursday", val);
    }
    else if(val==5)
    {
        printf("%d is friday", val);
    }
    else if(val==6)
    {
        printf("%d is saturday", val);
    }
    else if(val==7)
    {
        printf("%d is sunday", val);
    }

    else
    {
        printf("%d is not weekday", val);
    }

    return 0;
}