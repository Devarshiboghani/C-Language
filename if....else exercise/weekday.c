#include <stdio.h>

int main()
{
    int weekNumber;

    printf("Enter week number (1-7): ");
    scanf("%d", &weekNumber);

    if(weekNumber==1)
    {
        printf("%d is monday", weekNumber);
    }

    else if(weekNumber==2)
    {
        printf("%d is tuesday", weekNumber);
    }
    else if(weekNumber==3)
    {
        printf("%d is wednesday", weekNumber);
    }
    else if(weekNumber==4)
    {
        printf("%d is thursday", weekNumber);
    }
    else if(weekNumber==5)
    {
        printf("%d is friday", weekNumber);
    }
    else if(weekNumber==6)
    {
        printf("%d is saturday", weekNumber);
    }
    else if(weekNumber==7)
    {
        printf("%d is sunday", weekNumber);
    }

    else
    {
        printf("%d is not weekday", weekNumber);
    }

    return 0;
}