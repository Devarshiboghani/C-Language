#include <stdio.h>

int main()
{
    int second = 0,minute = 0;

    printf("Enter second = ");
    scanf("%d", &second);

    minute = second/60;

    printf("%d second = %d minute", second, minute );
    return 0;
}