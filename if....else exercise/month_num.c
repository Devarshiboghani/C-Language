#include <stdio.h>

int main()
{
    int a = 0;
    printf("Enter a : ");
    scanf("%d", &a);

    if(a==1 ||a==3 ||a==5 ||a==7 ||a==8 ||a==10 ||a==12)
    {
        printf("31 day");
    }

    else if(a==4 ||a==6 ||a==9 ||a==11)
    {
        printf("30 day");
    }
    else if(a==2)
    {
        printf("28/29 day");
    }

    else
    {
        printf("%d is invalid", a);
    }

    return 0;
}