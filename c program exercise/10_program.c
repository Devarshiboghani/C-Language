#include <stdio.h>

int main()
{
    int month, week;

    printf("Enter month = ");
    scanf("%d", &month);

     week = month*4;

    printf("%d month = %d week", month, week);
    return 0;
}