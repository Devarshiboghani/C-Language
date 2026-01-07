#include <stdio.h>

int main()
{
    int eng=80,math=88, sci=78, his = 67,com=90;

    printf("Enter english mark = ");
    scanf("%d", &eng);

    printf("Enter math mark = ");
    scanf("%d", &math);

    printf("Enter science mark = ");
    scanf("%d", &sci);

    printf("Enter history mark = ");
    scanf("%d", &his);

    printf("Enter computer mark = ");
    scanf("%d", &com);

    int sum = eng + math+sci+his+com;
    float pr = sum*100/500;

    if(pr >= 90)
    {
        printf("grade a+");
    }

    else if(pr >= 80)
    {
        printf("grade a");
    }
    else if(pr >= 70)
    {
        printf("grade b");
    }
    else if(pr >= 60)
    {
        printf("grade c");
    }
    else if(pr >= 40)
    {
        printf("grade d");
    }
    else if (pr < 40)
    {
        printf("fail");
    }

    else
    {
        printf("invalid");
    }

    return 0;
}